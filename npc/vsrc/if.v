`include "define.v"

module if_stage(
    //时钟,PC和复位信号
    input               clk,
    input               rst,
    output  [31:0]      PC,

    //有关指令的部分
    input   [31:0]  Instruction,
    input           Inst_Valid,
	output          Inst_Ready,

    //有关IF的握手信号
    output          Inst_Req_Valid,
	input           Inst_Req_Ready,

    //向下一模块传输的数据
    output  [`IF_TO_ID_WIDTH-1:0]      IF_to_ID_data,

    //有关分支预测的部分,
    //来自id阶段的分支预测结果和预测错误信号
    //来自EX阶段的计算出正确的PC值
    input                            prediction_incorrect,
    input   [`PREDICTION_WIDTH-1:0]  predictor_to_IF_data,
    input   [31:0]                   PC_correct,

    //和id阶段的握手信号
    output          IF_to_ID_valid,
    input           ID_ready,

    input           MemRead
);

//用于内部IF的标记, 因为这里的IF实际上是由IW和IF两个状态合成的
localparam      INIT    =       5'b00001,
                IF      =       5'b00010,
                IW      =       5'b00100,
                INS_GO  =       5'b01000,//准备好传信号
                INS_DONE=       5'b10000;//信号已经传过去, 在这个周期来改变PC

reg [4:0] IF_current_state;
reg [4:0] IF_next_state;

always @(posedge clk) begin
        if(rst)begin
                IF_current_state        <=      INIT;
        end
        else begin
                IF_current_state        <=      IF_next_state;
        end
end

//IF内部的状态更新
always @(*) begin
        case (IF_current_state) 
                INIT:begin
                        IF_next_state   =   IF;
                end
                IF:begin
                        //如果分支预测不正确, 那么就保持在取指阶段, 最后实现冲刷
                        if(prediction_incorrect)begin
                                IF_next_state   =   IF;
                        end
                        else if(Inst_Req_Ready && Inst_Req_Valid) begin
                                IF_next_state   =   IW;
                        end
                        else begin
                                IF_next_state   =   IF;
                        end
                end
                IW:begin
                        if(prediction_incorrect)begin
                                IF_next_state   =   IF;
                        end
                        else if(Inst_Ready && Inst_Valid)begin
                                IF_next_state   =   INS_GO;
                        end
                        else begin
                                IF_next_state   =   IW;
                        end
                end
                INS_GO:begin
                        if(prediction_incorrect)begin
                                IF_next_state   =   IF;
                        end
                        //传输出指令
                        else if (ID_ready) begin
                                IF_next_state   =   INS_DONE;
                        end
                        else begin
                                IF_next_state   =   INS_GO;
                        end
                end
                //这个状态实际上是用来更新PC的
                INS_DONE:begin
                        if(ID_ready) begin
                                IF_next_state  =    IF;
                        end
                        else begin
                                IF_next_state   =   INS_DONE;      
                        end              
                end
                default:begin
                        IF_next_state   =   INIT;
                end
        endcase
end

assign Inst_Ready  =  (IF_current_state==IW) || (IF_current_state==INIT);
assign Inst_Req_Valid  =  (IF_current_state==IF) && ~prediction_incorrect && ~MemRead;

//更新指令寄存器
reg [31:0] Instruction_reg;

always @(posedge clk) begin
        if (rst) begin
                Instruction_reg   <=   32'b0;
        end
        else if(Inst_Ready && Inst_Valid) begin
                Instruction_reg   <=   Instruction;
        end
        else begin
                Instruction_reg   <=   Instruction_reg;
        end
end

wire prediction_yes;
wire [31:0]     prediction_addr;
//有关分支预测的部分以及PC更新, 在INS_DONE阶段进行

assign {
        prediction_yes, //32:32
        prediction_addr
        }   =   predictor_to_IF_data;

reg   [31:0] PC_reg;

always @(posedge clk) begin
        if(rst) begin
                PC_reg   <=   32'h80000000;
        end
        else if(prediction_incorrect) begin
                PC_reg   <=   PC_correct;
        end
        else if(IF_current_state == INS_DONE && ID_ready) begin
                if(prediction_yes) begin
                        PC_reg   <=   prediction_addr;
                end
                else begin
                        PC_reg   <=   PC_reg + 4;
                end
        end
        else begin
                PC_reg   <=   PC_reg;
        end
end

assign  PC      =       PC_reg;

//IF模块的结束标记, 目前来看好像没什么用
wire    IF_done;
assign  IF_done  =  (IF_current_state == INS_DONE) && ~prediction_incorrect;

//向ID的握手信号
assign  IF_to_ID_valid   =   (IF_current_state == INS_GO) && (~prediction_incorrect);

//向ID的数据
assign  IF_to_ID_data    =      {
                                PC,                 //63:32
                                Instruction_reg         //31:0
                                };

endmodule