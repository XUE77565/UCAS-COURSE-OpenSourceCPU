`include "define.v"

module id_stage(
        //时钟和复位信号
        input   clk,
        input   rst,

        //来自其他模块的数据, IF传输以及后三个模块的数据旁路
        input   [`IF_TO_ID_WIDTH-1:0]           IF_to_ID_data,
        input   [`EX_ID_BYPATH_WIDTH-1:0]       EX_to_ID_bypath_data,
        input   [`MEM_ID_BYPATH_WIDTH-1:0]      MEM_to_ID_bypath_data,
        input   [`WB_ID_BYPATH_WIDTH-1:0]       WB_to_ID_bypath_data,

        //发往其他模块的数据
        output  [`ID_TO_EX_WIDTH-1:0]      ID_to_EX_data,
        output  [`PREDICTION_WIDTH-1:0]    predictor_to_IF_data,

        //分支预测结果
        input           prediction_incorrect,

        //和其他模块的握手信号
        output          ID_ready,
        output          ID_to_EX_valid,
        input           IF_to_ID_valid,
        input           EX_ready,

        // 导出 a0 寄存器值, 用于 ebreak 退出码
        output [31:0]   a0_out
);

reg [`IF_TO_ID_WIDTH-1:0] IF_to_ID_data_reg;

//和来自IF的握手
always @(posedge clk) begin
        if(rst) begin
                IF_to_ID_data_reg   <=   {`IF_TO_ID_WIDTH{1'b0}};
        end
        else if(IF_to_ID_valid && ID_ready) begin
                IF_to_ID_data_reg   <=   IF_to_ID_data;
        end
        else begin
                IF_to_ID_data_reg   <=   IF_to_ID_data_reg;
        end
end

wire  [31:0]    PC_ID;
wire  [31:0]    Instruction_current;

assign {
        PC_ID,
        Instruction_current
        }  =  IF_to_ID_data_reg;

//指令分段
//指令分段, riscv指令集的分段要更为复杂
wire [4:0]opcode	=	Instruction_current[6:2];
wire [4:0]rd		=	Instruction_current[11:7];
wire [4:0]rs1		=	Instruction_current[19:15];
wire [4:0]rs2		=	Instruction_current[24:20];
wire [4:0]shamt		=	Instruction_current[24:20];
wire [2:0]func		=	Instruction_current[14:12];
wire [3:0]func_r	=	{Instruction_current[30],func};
wire [6:0]func7     =   Instruction_current[31:25];

//对于立即数的翻译
wire [31:0]U_imm	=	{Instruction_current[31:12],{12{1'b0}}};
wire [31:0]I_imm	=	{{20{Instruction_current[31]}},Instruction_current[31:20]};
wire [31:0]S_imm	=	{{20{Instruction_current[31]}},Instruction_current[31:25],Instruction_current[11:7]};
wire [31:0]B_imm	=	{{20{Instruction_current[31]}},Instruction_current[7],Instruction_current[30:25],Instruction_current[11:8],1'b0};
wire [31:0]J_imm	=	{{12{Instruction_current[31]}},Instruction_current[19:12],Instruction_current[20],Instruction_current[30:25],Instruction_current[24:21],1'b0};

wire [4:0]		RF_waddr;
wire [31:0]		RF_wdata;

//用于存储译码阶段中读出来的两个数据, 要注意数据冒险! 最终用的应该是rdata_true
wire [31:0]		rdata1;
wire [31:0]		rdata2;
wire [31:0]		rdata1_true;
wire [31:0]		rdata2_true;

//进行控制信号的声明
wire 		    Branch;
wire   [2:0]    ALUop;
wire   [1:0]	Shiftop;
wire		    Jump;
wire		    AluShi_sel;
wire            load;
wire            store;


wire   [31:0]	Branch_offset;

//定义两个器件的操作数
wire	[31:0]	ALUop_A;
wire	[31:0]	ALUop_B;
wire	[31:0]	Shiftop_A;
wire	[4:0]	Shiftop_B;

wire	[4:0]	raddr1;
wire	[4:0]	raddr2;


//读寄存器地址
assign raddr1 = rs1;
assign raddr2 = rs2;


//在Risc-v指令集中, 所有有写回寄存器操作的目标寄存器地址都是rd
assign  RF_waddr  =	rd;

//=================
//===添加乘法指令===
//=================
wire mul = (opcode==`R_type && func7==7'b0000001 && func==3'b000);

//ebreak指令检测
wire ebreak_inst = (Instruction_current == 32'h00100073);

//运算器功能选择信号, RISC-V的简便之处在于所有的弄能选择都在指令之中体现
assign ALUop =  (opcode==`I_type_l || opcode==`S_type)?		`ADD:		//取数指令和存数指令用add
		(opcode==`B_type && func[2:1]==2'b00)?		        `SUB:		//对分支指令进行处理, 这样之后的处理都可以直接利用func来判断
		(opcode==`B_type && func[2:1]==2'b10)?		        `SLT:		//BLT和BGE
		(opcode==`B_type && func[2:1]==2'b11)?		        `SLTU:		//BLTU和BGEU
		(opcode==`R_type && func_r==`SUBr)?		            `SUB:		//除了分支指令以外只有SUB指令用了减法, 剩下的直接利用func来判断
		(func==3'b000)?					 `ADD:
		(func==3'b010)?					`SLT:
		(func==3'b011)?					`SLTU:
		(func==3'b100)?					`XOR:
		(func==3'b110)?					`OR:
		(func==3'b111)?					`AND:
								        `OR;		//默认的用OR来处理


//对于ID工作状态的更新
reg     ID_work;
wire    ID_done;
wire    block;          //如果遇到数据冒险的情况, 需要等待结束
//EX的数据冒险
wire            EX_load;
wire            EX_write;
wire    [4:0]   EX_waddr;
wire    [31:0]  EX_data;
wire            EX_related;
//MEM的数据冒险
wire            MEM_load;       //如果MEM遇到load之后也要等待? 不确定, 先这么写
wire            MEM_write;
wire    [4:0]   MEM_waddr;
wire    [31:0]  MEM_data;
wire            MEM_related;

wire            WB_wen;
wire    [31:0]  WB_data;
wire    [4:0]   WB_waddr;

assign  {
        EX_load,
        EX_write,
        EX_waddr,
        EX_data
                }  =  EX_to_ID_bypath_data;

assign  {
        MEM_load,
        MEM_write,
        MEM_waddr,
        MEM_data
                }  =  MEM_to_ID_bypath_data;

assign  {
        WB_wen,
        WB_waddr,
        WB_data
                }  =  WB_to_ID_bypath_data;



//实例化regfile, 写部分用的是WB传回来的总线
regfile reg_file_ex(
    .clk		(clk),
    .rst		(rst),
	.waddr		(WB_waddr),
	.raddr1		(rs1),
	.raddr2		(rs2),
	.wen		(WB_wen),
	.wdata		(WB_data),
	.rdata1		(rdata1),
	.rdata2		(rdata2),
	.a0_out		(a0_out)
);


//标记出现了数据冒险
assign  EX_related   =  (EX_write) && (rs1==EX_waddr || rs2==EX_waddr);
assign  MEM_related  =  (MEM_write) && (rs1==MEM_waddr || rs2==MEM_waddr);

//如果遇到load指令才阻塞, 不然直接传回来就可以
assign  block        =  (EX_related && EX_load) || (MEM_load && MEM_related);

// always @(posedge clk) begin
//         if(rst) begin
//                 ID_work  <=  0;
//         end
//         else if(prediction_incorrect) begin
//                 ID_work  <=  0;
//         end
//         else if(ID_ready && IF_to_ID_valid) begin
//                 ID_work  <=  1;
//         end
//         else begin
//                 ID_work  <=  0;
//         end
// end

always @(posedge clk) begin
        if(rst) begin
                ID_work  <=  0;
        end
        else begin
                if(prediction_incorrect) begin
                        ID_work  <=  0;
                end
                else if(ID_ready) begin
                        ID_work  <=  IF_to_ID_valid;
                end
        end
end


//ID完成信号, 因为ID阶段基本上全是组合逻辑的, 所以如果没有阻塞或者分支错误冲刷
//ID阶段就立即结束
assign  ID_done     =   ~block  &&  ~prediction_incorrect;
assign  ID_ready    =   ~ID_work  ||  (ID_done && EX_ready);
//assign  ID_to_EX_data   =   ID_done  &&  EX_ready;
assign  ID_to_EX_valid   =   ID_done  &&  ID_work && EX_ready;

//考虑数据冒险的数据的真实值
assign  rdata1_true  =  (rs1==5'b0)?                            32'b0:
                        (EX_write && rs1==EX_waddr)?            EX_data:       
                        (MEM_write && rs1==MEM_waddr)?          MEM_data:
                        (WB_wen && rs1==WB_waddr)?              WB_data:
                                                                rdata1; 

assign  rdata2_true  =  (rs2==5'b0)?                            32'b0:
                        (EX_write && rs2==EX_waddr)?            EX_data:       
                        (MEM_write && rs2==MEM_waddr)?          MEM_data:
                        (WB_wen && rs2==WB_waddr)?              WB_data:
                                                                rdata2; 


//运算器操作数A选择信号
assign	ALUop_A    =	rdata1_true;		//后续的BGE和BGEU可以利用结果取反来实现判断分支



//运算器操作数B选择信号
assign  ALUop_B	   =	(opcode==`I_type_c || opcode==`I_type_l)?	I_imm:
			(opcode==`S_type)?			        S_imm:
									rdata2_true;	


//移位器选择信号
assign Shiftop = (func==3'b001)?	2'b00:	//SLL
		 (func_r==4'b0101)?	2'b10:	//SRL
		 (func_r==4'b1101)?	2'b11:	//SRA
		 			2'b01;


//移位器操作数A选择信号
assign	Shiftop_A   =	rdata1_true;		//rs2移动



//移位器操作数B选择信号
assign 	Shiftop_B   =   (opcode==`I_type_c)?	shamt:
						rdata2_true[4:0];	//可变目标左右移量为rs[4:0]


//定义RF写回控制信号
wire    RF_wen_i;
assign  RF_wen_i  = 	(opcode==`AUIPC || opcode==`JAL || opcode==`JALR)?	1:	//对于跳转指令
			(opcode==`I_type_l || opcode==`LUI)?			1:	//对于加载指令
			(opcode==`I_type_c || opcode==`R_type)?			1:	//对于R型指令
										0;

//移位器和运算器结果二选一信号
assign AluShi_sel = ((opcode==`I_type_c || opcode==`R_type) && (func==3'b101 || func==3'b001));			//结果为1,选择shifter,否则选择alu

//分支控制信号
assign Branch = (opcode==`B_type);

//跳转控制信号
assign Jump   = (opcode==`JAL || opcode==`JALR);

//ls信号
assign load   = (opcode==`I_type_l);
assign store  = (opcode==`S_type);

//计算出分支目标地址
assign Branch_offset  =   B_imm;

//计算出跳转目标地址
wire [31:0]Jump_r     =	(rdata1_true + I_imm) & 32'hfffffffe;

//分支和跳转对应的PC值
wire   [31:0]   PC_Branch;
wire   [31:0]   PC_Jump;

assign PC_Branch   =    PC_ID + B_imm;
assign PC_Jump	   =	(opcode==`JAL)?	PC_ID + J_imm:
					Jump_r;


wire    [31:0]  prediction_addr = (Branch)?     PC_Branch:
                                  (Jump)?       PC_Jump:
                                                32'b0;
                                                
wire    prediction_out;
reg     predictor_update;

always @(posedge clk) begin
        if(ID_to_EX_valid)
                predictor_update <= 1'b1;
        else 
                predictor_update <= 1'b0;
end

//分支预测的结果
wire    prediction_yes  =   (Jump) || ((opcode==`B_type) && prediction_out);

branch_predictor  prediction_ex(
        .clk                            (clk),
        .rst                            (rst),
        .is_Branch                      (Branch),
        .predictor_update               (predictor_update),
        .prediction_incorrect           (prediction_incorrect),
        .prediction_out                 (prediction_out)
);

//对各个数据进行赋值
assign  predictor_to_IF_data =  {
                                  prediction_yes,
                                  prediction_addr
                                };

assign ID_to_EX_data =  {
                          ebreak_inst,          //ebreak指令标志
                          mul,                  //添加mul命令
                          U_imm,        
                          opcode,       
                          PC_ID,     
                          prediction_out,
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
                          func,         //用于存储分支的类型
                          load,         
                          store,         
                          RF_wen_i,     
                          RF_waddr,     
                          rdata2_true   //31:0用于store指令
                        };
endmodule