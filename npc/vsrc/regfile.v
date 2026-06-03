module regfile(
    input clk,
    input rst,
    input [ADDR_WIDTH-1:0] waddr,
    input [DATA_WIDTH-1:0] raddr1,
    input [ADDR_WIDTH-1:0] raddr2,

    input wen,
    input [DATA_WIDTH-1:0] wdata,

    output [DATA_WIDTH-1:0] rdata1,
    output [DATA_WIDTH-1:0] rdata2
);

reg [DATA_WIDTH-1:0] regfile [2**ADDR_WIDTH-1:0];

//同步写，异步读
assign rdata1 = (raddr1 == 0) ? 0 : regfile[raddr1];
assign rdata2 = (raddr2 == 0) ? 0 : regfile[raddr2];

always @(posedge clk) begin
    if (rst) begin
        integer i;
        for (i = 0; i < 2**ADDR_WIDTH; i = i + 1) begin
            regfile[i] <= 0;
        end
    end else if (wen && waddr != 0) begin
        //0号寄存器一直是0
        regfile[waddr] <= wdata;
    end
end

endmodule