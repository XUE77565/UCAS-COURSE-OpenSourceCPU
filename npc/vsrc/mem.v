`include "define.v"

module mem_stage(
    //时钟和复位信号
    input   clk,
    input   rst,
       
       	//Memory request channel
	output [31:0] Address,
	output        MemWrite,
	output [31:0] Write_data,
	output [ 3:0] Write_strb,
	output        MemRead,
	input         Mem_Req_Ready,

	//Memory data response channel
	input  [31:0] Read_data,
	input         Read_data_Valid,
	output        Read_data_Ready,

    //来自其他模块的数据
    input   [`EX_TO_MEM_WIDTH-1:0]   EX_to_MEM_data,

    //发往其他模块的数据
    output  [`MEM_TO_WB_WIDTH-1:0]         MEM_to_WB_data,
    output  [`MEM_ID_BYPATH_WIDTH-1:0]      MEM_to_ID_bypath_data,

    //和其它模块的握手信号
    output  MEM_ready,
    output  MEM_to_WB_valid,
    input   EX_to_MEM_valid,
    input   WB_ready
);

reg [`EX_TO_MEM_WIDTH-1:0] EX_to_MEM_data_reg;


always @(posedge clk) begin
        if(rst) begin
                EX_to_MEM_data_reg  <=  {`EX_TO_MEM_WIDTH{1'b0}};
        end
        else if (MEM_ready && EX_to_MEM_valid) begin
                EX_to_MEM_data_reg  <=  EX_to_MEM_data;
        end
        else begin
                EX_to_MEM_data_reg <= EX_to_MEM_data_reg;
        end
end

//首先将EX传输进来的数据解码
wire [31:0]     Result;
wire [31:0]     U_imm;
wire [4:0]      opcode;
wire [31:0]     PC_MEM;
wire [1:0]      eff;
wire [2:0]      func;
wire            load;
wire            store;
wire            RF_wen;
wire [4:0]      RF_waddr;

wire            ebreak_inst;

assign  {
         ebreak_inst,
         Result,
         func,
         U_imm,         //146:115
         opcode,        //114:110
         eff,           //109:108
         PC_MEM,         //107:76
         Address,       //75:44
         load,          //43:43
         store,         //42:42
         Write_strb,    //41:38
         Write_data,    //37:6
         RF_wen,        //5:5
         RF_waddr       //4:0
        } = EX_to_MEM_data_reg;

//由于MEM模块实际上也是多个状态的合并, 于是在这里也要建立状态转移
localparam   INIT       =  5'b00001,
             SL_BEFORE  =  5'b00010,
             SL         =  5'b00100,
             RDW        =  5'b01000,
             SL_DONE    =  5'b10000;

reg     [4:0]   MEM_current_state;
reg     [4:0]   MEM_next_state;

always @(posedge clk) begin
        if(rst) begin
                MEM_current_state  <=  INIT;
        end
        else begin
                MEM_current_state  <=  MEM_next_state;
        end
end

always @(*) begin
        case (MEM_current_state)
                INIT: begin
                        MEM_next_state = SL_BEFORE;
                end
                SL_BEFORE: begin
                        //标记有没有用MEM, 是不是load或者store指令
                        //如果没有, 则直接结束
                        if(MEM_work) begin
                                if(load || store) begin
                                        MEM_next_state = SL;
                                end
                                else begin
                                        MEM_next_state = SL_DONE;
                                end
                        end
                        else begin
                                MEM_next_state = SL_BEFORE;
                        end
                end
                SL: begin
                        //Load会进入RDW阶段等待读出数据握手
                        if(load && Mem_Req_Ready) begin
                                MEM_next_state = RDW;
                        end
                        else if(store && Mem_Req_Ready) begin
                                MEM_next_state = SL_DONE;
                        end
                        else begin
                                MEM_next_state = SL;
                        end
                end
                RDW: begin
                        if(Read_data_Valid && Read_data_Ready) begin
                                MEM_next_state = SL_DONE;
                        end
                        else begin
                                MEM_next_state = RDW;
                        end
                end
                SL_DONE: begin
                        //如果EX发起了握手请求, 就返回
                        if(EX_to_MEM_valid) begin
                                MEM_next_state = SL_BEFORE;
                        end
                        else begin
                                MEM_next_state = SL_DONE;
                        end
                end
                default: begin
                        MEM_next_state = INIT;
                end
        endcase
end

//准对状态来对控制信号赋值
assign  MemRead    =    load && (MEM_current_state==SL);
assign  MemWrite   =    store && (MEM_current_state==SL);
//注意在INIT的时候拉高Read_data_reg
assign  Read_data_Ready  =  (MEM_current_state==RDW) || (MEM_current_state==INIT);

//对MEM的状态
reg     MEM_work;
wire    MEM_done;

always @(posedge clk) begin
        if(rst) begin
                MEM_work  <=  0;
        end
        //每次再MEM_ready的时候更新状态
        else if(MEM_ready) begin
                MEM_work  <=  EX_to_MEM_valid;
        end
end

assign  MEM_done    =   (MEM_current_state==SL_DONE);
assign  MEM_ready   =   ~MEM_work || (MEM_done && WB_ready);
assign  MEM_to_WB_valid  = MEM_done && MEM_work;

//读数据
reg [31:0]      Read_data_current;
always @(posedge clk) begin
        if(rst) begin
                Read_data_current  <=  32'b0;
        end
        else if (Read_data_Ready && Read_data_Valid) begin
                Read_data_current  <=  Read_data;
        end
end


wire [7:0] read_byte_3;
wire [7:0] read_byte_2;
wire [7:0] read_byte_1;
wire [7:0] read_byte_0;

assign read_byte_3 = Read_data_current [31:24];
assign read_byte_2 = Read_data_current [23:16];
assign read_byte_1 = Read_data_current [15: 8];
assign read_byte_0 = Read_data_current [ 7: 0];

wire [31:0]     RF_wdata;

assign  RF_wdata  =	(opcode==`JAL ||opcode==`JALR)?		PC_MEM + 4:
			(opcode==`AUIPC)?			PC_MEM + U_imm:
			(opcode==`LUI)?				U_imm:
			(opcode==`I_type_l)?	
			((func[1:0]==2'b00)?	((eff==2'b00)?  ((func[2]==0)?	{{24{read_byte_0[7]}},read_byte_0} :	{{24{1'b0}},read_byte_0}):
						 (eff==2'b01)?  ((func[2]==0)?	{{24{read_byte_1[7]}},read_byte_1} :	{{24{1'b0}},read_byte_1}):
						 (eff==2'b10)?  ((func[2]==0)?	{{24{read_byte_2[7]}},read_byte_2} :	{{24{1'b0}},read_byte_2}):
						 		((func[2]==0)?	{{24{read_byte_3[7]}},read_byte_3} :	{{24{1'b0}},read_byte_3}) ):
			 (func[1:0]==2'b01)?	((eff==2'b00)?  ((func[2]==0)?	{{24{read_byte_1[7]}},Read_data_current [15:0]} : {{24{1'b0}},Read_data_current [15:0]}):
			 					((func[2]==0)?	{{24{read_byte_3[7]}},Read_data_current [31:16]} : {{24{1'b0}},Read_data_current [31:16]})):
			 Read_data_current
			):
			Result;

//对于返回ID阶段的数据旁路
assign  MEM_to_ID_bypath_data = {
                                  load,
                                  MEM_work && RF_wen,
                                  RF_waddr,
                                  RF_wdata
                                };

//对于向WB传输的数据
assign  MEM_to_WB_data     =    {
                                  ebreak_inst,
                                  PC_MEM,       
                                  RF_waddr,
                                  RF_wen,
                                  RF_wdata
                                };

endmodule