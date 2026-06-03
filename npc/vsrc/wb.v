`include "define.v"

// DPI-C导入, 用于在ebreak时通知仿真环境结束
import "DPI-C" function void set_ebreak();

module wb_stage (
        //时钟和复位信号
        input   clk,
        input   rst,

        //来自其他模块的数据
        input   [`MEM_TO_WB_WIDTH-1:0]          MEM_to_WB_data,

        //发往其他模块的数据
        output  [`WB_ID_BYPATH_WIDTH-1:0]       WB_to_ID_bypath_data,
        
        //来自其他模块的控制信号
        input   MEM_to_WB_valid,
        //发往其他模块的控制信号
        output  WB_ready,

        //用来测试的inst_retired
        output [69:0]   inst_retired
);

reg [`MEM_TO_WB_WIDTH-1:0] MEM_to_WB_data_reg;

always @(posedge clk) begin
        if(rst) begin
                MEM_to_WB_data_reg  <=  {`MEM_TO_WB_WIDTH{1'b0}};
        end
        else if(WB_ready && MEM_to_WB_valid) begin
                MEM_to_WB_data_reg  <=  MEM_to_WB_data;
        end
        else begin
                MEM_to_WB_data_reg  <=  MEM_to_WB_data_reg;
        end
end

//对数据来自MEM的数据解码
wire    RF_wen;
wire    [31:0]  PC_WB;
wire    [31:0]  RF_wdata;
wire    [4:0]   RF_waddr;

wire    ebreak_inst;

assign {
        ebreak_inst,
        PC_WB,
        RF_waddr,
        RF_wen,
        RF_wdata
       }  =  MEM_to_WB_data_reg;

//对WB的状态
reg     WB_work;
wire    WB_done;

always @(posedge clk) begin
        if(rst) begin
                WB_work  <=  0;
        end
        else if (WB_ready) begin
                WB_work  <=  MEM_to_WB_valid;
        end
end

//纯组合逻辑, WB一直ready
assign WB_done  = 1;
assign WB_ready = 1;

//会ID阶段的数据通路
assign  WB_to_ID_bypath_data ={
                                RF_wen,
                                RF_waddr,
                                RF_wdata
                              };

//用来控制inst_retired的控制信号, 保证这个不是一直改变的
//用来避免重复的比较
wire    inst_retire_valid   =   WB_done && WB_work;
wire    inst_wen            =   inst_retire_valid && RF_wen;
assign  inst_retired  = {
                          inst_wen,
                          RF_waddr,
                          RF_wdata,
                          PC_WB
                        };

// ebreak指令检测, 当ebreak指令到达WB阶段并且准备提交时, 调用DPI-C函数结束仿真
always @(posedge clk) begin
        if (ebreak_inst && inst_retire_valid) begin
                set_ebreak();
        end
end

endmodule