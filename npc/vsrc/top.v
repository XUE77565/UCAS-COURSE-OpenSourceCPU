`timescale 10ns / 1ns
`include "define.v"

module custom_cpu(
	input         clk,
	input         rst,

	//Instruction request channel
	output [31:0] PC,
	output        Inst_Req_Valid,
	input         Inst_Req_Ready,

	//Instruction response channel
	input  [31:0] Instruction,
	input         Inst_Valid,
	output        Inst_Ready,

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

	input         intr,

	output [31:0] cpu_perf_cnt_0,
	output [31:0] cpu_perf_cnt_1,
	output [31:0] cpu_perf_cnt_2,
	output [31:0] cpu_perf_cnt_3,
	output [31:0] cpu_perf_cnt_4,
	output [31:0] cpu_perf_cnt_5,
	output [31:0] cpu_perf_cnt_6,
	output [31:0] cpu_perf_cnt_7,
	output [31:0] cpu_perf_cnt_8,
	output [31:0] cpu_perf_cnt_9,
	output [31:0] cpu_perf_cnt_10,
	output [31:0] cpu_perf_cnt_11,
	output [31:0] cpu_perf_cnt_12,
	output [31:0] cpu_perf_cnt_13,
	output [31:0] cpu_perf_cnt_14,
	output [31:0] cpu_perf_cnt_15,

	output [69:0] inst_retire
);

//分支预测的信号
wire	prediction_incorrect;
wire    [`PREDICTION_WIDTH-1:0]  predictor_to_IF_data;
wire    [31:0]                   PC_correct;

//各个握手信号
wire	IF_to_ID_valid;
wire    ID_ready;
wire	ID_to_EX_valid;
wire    EX_ready;
wire    EX_to_MEM_valid;
wire    MEM_ready;
wire    MEM_to_WB_valid;
wire    WB_ready;
wire	inst_Req_Valid;

//各个模块之间的数据传输
wire	[`IF_TO_ID_WIDTH-1:0]      IF_to_ID_data;
wire    [`ID_TO_EX_WIDTH-1:0]      ID_to_EX_data;
wire    [`EX_TO_MEM_WIDTH-1:0]     EX_to_MEM_data;
wire    [`EX_ID_BYPATH_WIDTH-1:0]  EX_to_ID_bypath_data;
wire	[`MEM_TO_WB_WIDTH-1:0]     MEM_to_WB_data;
wire    [`MEM_ID_BYPATH_WIDTH-1:0] MEM_to_ID_bypath_data;
wire    [`WB_ID_BYPATH_WIDTH-1:0]  WB_to_ID_bypath_data;

//连接各个模块
if_stage	IF_EX(
	.clk			(clk),
	.rst			(rst),
	.PC			(PC),
	.Instruction		(Instruction),
	.Inst_Valid		(Inst_Valid),
	.Inst_Ready		(Inst_Ready),
	.Inst_Req_Valid		(Inst_Req_Valid),
	.Inst_Req_Ready		(Inst_Req_Ready),
	.IF_to_ID_data		(IF_to_ID_data),
	.prediction_incorrect	(prediction_incorrect),
	.predictor_to_IF_data	(predictor_to_IF_data),
	.PC_correct		(PC_correct),
	.IF_to_ID_valid		(IF_to_ID_valid),
	.ID_ready		(ID_ready),
	.MemRead		(MemRead)
);


id_stage	ID_EX(
	.clk			(clk),
	.rst			(rst),
	.IF_to_ID_data		(IF_to_ID_data),
	.EX_to_ID_bypath_data	(EX_to_ID_bypath_data),
	.MEM_to_ID_bypath_data	(MEM_to_ID_bypath_data),
	.WB_to_ID_bypath_data	(WB_to_ID_bypath_data),
	.ID_to_EX_data		(ID_to_EX_data),
	.predictor_to_IF_data	(predictor_to_IF_data),
	.prediction_incorrect	(prediction_incorrect),
	.ID_ready		(ID_ready),
	.ID_to_EX_valid		(ID_to_EX_valid),
	.IF_to_ID_valid		(IF_to_ID_valid),
	.EX_ready		(EX_ready)
);


ex_stage	EX_EX(
	.clk			(clk),
	.rst			(rst),
	.prediction_incorrect	(prediction_incorrect),
	.ID_to_EX_data		(ID_to_EX_data),
	.EX_to_MEM_data		(EX_to_MEM_data),
	.EX_to_ID_bypath_data	(EX_to_ID_bypath_data),
	.EX_ready		(EX_ready),
	.EX_to_MEM_valid	(EX_to_MEM_valid),
	.ID_to_EX_valid		(ID_to_EX_valid),
	.MEM_ready		(MEM_ready),
	.PC_correct		(PC_correct)
);


mem_stage MEM_EX(
	.clk			(clk),
	.rst			(rst),
	.Address		(Address),	
	.MemWrite		(MemWrite),
	.Write_data		(Write_data),
	.Write_strb		(Write_strb),
	.MemRead		(MemRead),
	.Mem_Req_Ready		(Mem_Req_Ready),
	.Read_data		(Read_data),
	.Read_data_Valid	(Read_data_Valid),
	.Read_data_Ready	(Read_data_Ready),
	.EX_to_MEM_data		(EX_to_MEM_data),
	.MEM_to_WB_data		(MEM_to_WB_data),
	.MEM_to_ID_bypath_data	(MEM_to_ID_bypath_data),
	.MEM_ready		(MEM_ready),
	.MEM_to_WB_valid	(MEM_to_WB_valid),
	.EX_to_MEM_valid	(EX_to_MEM_valid),
	.WB_ready		(WB_ready)
);


wb_stage	WB_EX(
	.clk			(clk),
	.rst			(rst),
	.MEM_to_WB_data		(MEM_to_WB_data),
	.WB_to_ID_bypath_data	(WB_to_ID_bypath_data),
	.MEM_to_WB_valid	(MEM_to_WB_valid),
	.WB_ready		(WB_ready),
	.inst_retired		(inst_retire)
);

// reg [31:0] cycle_cnt;

// always @(posedge clk) begin
// 	if(rst) begin
// 		cycle_cnt <= 32'd0;
// 	end
// 	else begin
// 		cycle_cnt <= cycle_cnt + 32'd1;
// 	end
// end

// assign cpu_perf_cnt_0 = cycle_cnt;

// reg [31:0] ins_cnt;

// always @(posedge clk) begin
// 	if(rst) begin
// 		ins_cnt <= 32'd0;
// 	end
// 	else if (Inst_Ready && Inst_Valid)begin
// 		ins_cnt <= ins_cnt + 32'd1;
// 	end
// 	else begin
// 		ins_cnt <= ins_cnt;
// 	end
// end

// assign cpu_perf_cnt_1 = ins_cnt;

// reg [31:0] mem_cnt;

// always @(posedge clk) begin
// 	if(rst) begin
// 		mem_cnt <= 32'd0;
// 	end
// 	else if (Read_data_Ready && Read_data_Valid)begin
// 		mem_cnt <= mem_cnt + 32'd1;
// 	end
// 	else begin
// 		mem_cnt <= mem_cnt;
// 	end
// end

// assign cpu_perf_cnt_2 = mem_cnt;



endmodule
