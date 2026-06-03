`include "define.v"

module ex_stage(
        //时钟和复位信号
        input   clk,
        input   rst,

        //分支预测结果
        output  prediction_incorrect,

        //来自其他模块的数据
        input   [`ID_TO_EX_WIDTH-1:0]   ID_to_EX_data,

        //发往其他模块的数据
        output  [`EX_TO_MEM_WIDTH-1:0]  EX_to_MEM_data,
        output  [`EX_ID_BYPATH_WIDTH-1:0]  EX_to_ID_bypath_data,

        //和其它模块的握手信号
        output  EX_ready,
        output  EX_to_MEM_valid,
        input   ID_to_EX_valid,
        input   MEM_ready,
        
        //正确的PC跳转值
        output  [31:0] PC_correct
);

//定义内部的连线和控制信号
wire    [4:0]   opcode;
wire    [31:0]  U_imm;

wire    [2:0]   ALUop;
wire    [31:0]  ALUop_A;
wire    [31:0]  ALUop_B;

wire    [1:0]   Shiftop;
wire    [31:0]  Shiftop_A;
wire    [4:0]   Shiftop_B;

wire    [31:0]  PC_EX;
wire    [2:0]   func;

wire    prediction_result;
wire    [31:0] prediction_addr;

wire    AluShi_sel;
wire    mul;
wire    Jump;
wire    Branch;
wire    load;
wire    store;
wire    RF_wen;
wire    [4:0] RF_waddr;
wire    [31:0] rdata2_true;

wire    ebreak_inst;

reg     [`ID_TO_EX_WIDTH-1:0]   ID_to_EX_data_reg;

always @(posedge clk) begin
        if(rst) begin
                ID_to_EX_data_reg  <=   {`ID_TO_EX_WIDTH{1'b0}};
        end
        else if(ID_to_EX_valid && EX_ready) begin
                ID_to_EX_data_reg  <=   ID_to_EX_data;
        end
        else begin
                ID_to_EX_data_reg  <=   ID_to_EX_data_reg;
        end
end

//将数据导入EX模块
assign  {
         ebreak_inst,
         mul,
         U_imm,
         opcode,
         PC_EX,
         prediction_result,
         prediction_addr,
         ALUop,
         ALUop_A,
         ALUop_B,
         Shiftop,
         Shiftop_A,
         Shiftop_B,
         AluShi_sel,
         Jump,
         Branch,
         func,
         load,
         store,
         RF_wen,
         RF_waddr,
         rdata2_true
} = ID_to_EX_data_reg;

//实例化alu, 用来出结果的同时检测分支预测结果的正确与否
wire    [31:0]  ALU_result;
wire    [31:0]  Shifter_result;
wire    Zero;
wire    Branch_real;
wire    [31:0]  Result;
alu alu_ex(
	.A              (ALUop_A),
	.B              (ALUop_B),
	.ALUop          (ALUop),
	.Overflow       (),
	.CarryOut       (),
	.Zero           (Zero),
	.Result         (ALU_result)     
);

//实例化Shifter
shifter shifter_ex(
	.A              (Shiftop_A),
	.B              (Shiftop_B),
	.Shiftop        (Shiftop),
	.Result         (Shifter_result)
);

wire    Branch_check;
assign  Branch_check  = (func==3'b000)?				Zero:
			(func==3'b001)?				~Zero:
			(func==3'b100 || func==3'b110)?	        ~Zero:
			(func==3'b101 || func==3'b111)?	        Zero:
								0;

assign  Branch_real = Branch_check && Branch;

//=====================
//====添加乘法的逻辑====
//=====================

wire [63:0] mul_result;

assign mul_result = {64{mul}} & (ALUop_A * ALUop_B);

assign  Result     =    (opcode==`JAL ||opcode==`JALR)?		PC_EX + 4:
			            (opcode==`AUIPC)?			        PC_EX + U_imm:
			            (opcode==`LUI)?				        U_imm:
                        (mul)?                              mul_result[31:0]:
                        (AluShi_sel)?                       Shifter_result: 
                                                            ALU_result;

//这个是将predition_incorrect的信号消除,不然就会一直卡住导致程序锁住
//因此需要在对应的时机来消除它, 让流水线正确运行
//这里是实现在一个周期内冲刷
reg     block_cancel;   

always@(posedge clk) begin
        if(rst) begin
                block_cancel  <=  1;
        end
        else if(ID_to_EX_valid) begin
                block_cancel  <=  0;
        end
        else begin
                block_cancel  <=  1;
        end
end

assign prediction_incorrect   =  (Branch_real ^ prediction_result) && ~block_cancel;//异或表示分支预测结果和实际相反

assign PC_correct   =  (Branch_real || Jump)?  prediction_addr : PC_EX+4;



//对于EX的状态
reg     EX_work;
wire    EX_done;

always @(posedge clk)begin
        if(rst) begin
                EX_work   <=    0;
        end
        //每次在EX_ready的时候更新状态
        else if(EX_ready) begin
                EX_work   <=    ID_to_EX_valid;      
        end
end

assign  EX_ready    =   (~EX_work) || (EX_done && MEM_ready);
assign  EX_done     =    1;     //因为EX中都是组合逻辑
assign  EX_to_MEM_valid   =   EX_work && EX_done;  //EX_work来标记当前正在执行EX模块



//对于接下来的MEM, 计算出一些数据, 这里没有做出改动
wire    [31:0]  Address;
wire    [1:0]   eff;
wire    [3:0]   Write_strb;
wire    [31:0]  Write_data;

assign  Address     =   Result  &  32'hfffffffc;
assign  eff         =   Result [1:0];

assign  Write_strb   =	(func==3'b000)?	((eff==2'b00)?	4'b0001:
					 (eff==2'b01)?	4'b0010:
					 (eff==2'b10)?	4'b0100:
							4'b1000):
			(func==3'b001)?	((eff==2'b00)?	4'b0011:
							4'b1100):
							4'b1111;

wire [7:0] reg_byte_0;
wire [7:0] reg_byte_1;
assign reg_byte_0 = rdata2_true[7:0];
assign reg_byte_1 = rdata2_true[15:8];


assign Write_data   =	(func==3'b000)?	((eff==2'b00)?	{{24{1'b0}},reg_byte_0}:
                                         (eff==2'b01)?	{{16{1'b0}},reg_byte_0,{8{1'b0}}}:
                                         (eff==2'b10)?	{{8{1'b0}},reg_byte_0,{16{1'b0}}}:
                                                        {reg_byte_0,{24{1'b0}}}):
                        (func==3'b001)?	((eff==2'b00)?	{{16{1'b0}},reg_byte_1,reg_byte_0}:
                                                        {reg_byte_1,reg_byte_0,{16{1'b0}}}):
                                                        rdata2_true;

                                        
//返回ID阶段的数据旁路
wire    EX_load;
wire    EX_write;

assign  EX_load    =    load;
assign  EX_write   =    EX_work && RF_wen;

assign  EX_to_ID_bypath_data =  {
                                 EX_load,
                                 EX_write,
                                 RF_waddr,
                                 Result
                                };

//向后传入MEM的数据
assign  EX_to_MEM_data    =     {
                                 ebreak_inst,
                                 Result,
                                 func,          //149:147
                                 U_imm,         //146:115
                                 opcode,        //114:110
                                 eff,           //109:108
                                 PC_EX,         //107:76
                                 Address,       //75:44
                                 load,          //43:43
                                 store,         //42:42
                                 Write_strb,    //41:38
                                 Write_data,    //37:6
                                 RF_wen,        //5:5
                                 RF_waddr       //4:0
                                };
endmodule