`timescale 10 ns / 1 ns

//define the operation
`define DATA_WIDTH 32
`define AND  3'b000
`define OR   3'b001
`define XOR  3'b100
`define NOR  3'b101
`define ADD  3'b010
`define SUB  3'b110 
`define SLT  3'b111
`define SLTU 3'b011

module alu(
	input  [`DATA_WIDTH - 1:0]  A,
	input  [`DATA_WIDTH - 1:0]  B,
	input  [              2:0]  ALUop,
	output                      Overflow,
	output                      CarryOut,
	output                      Zero,
	output [`DATA_WIDTH - 1:0]  Result
);

	wire [31:0] temp_sub;
	assign temp_sub = A + ~B + 1;
	wire [32:0] unsigned_A;
	wire [32:0] unsigned_B;
	wire [32:0] unsigend_sub;

	//对于无符号数的比较, 将输入拓展一位, 转化成有符号数来进行比较
	assign unsigned_A = 	{1'b0,A};
	assign unsigned_B = 	{1'b0,B};
	assign unsigend_sub   =	unsigned_A + ~unsigned_B + 1;

	assign {CarryOut,Result} =  (ALUop == `AND)  ? A & B:
                                (ALUop == `OR )  ? A | B:
                                (ALUop == `XOR)  ? A ^ B:
                                (ALUop == `NOR)  ? {1'b0,~(A | B)}:
                                (ALUop == `ADD)  ? A + B:
                                (ALUop == `SUB)  ? A + ~B + 1:
                                (ALUop == `SLT)  ? (({A[31],B[31]} == 2'b10) ? 1 : 
                                                    ({A[31],B[31]} == 2'b01) ? 0 : 
                                                    (temp_sub[31]  == 1) ? 1: 0) :
                                (ALUop == `SLTU) ? (unsigend_sub[32] == 1) : 0;
	
	assign Overflow =   (ALUop == `ADD) ? ((A[31] && B[31] && ~Result[31]) || (~A[31] && ~B[31] && Result[31])) :
			            (ALUop == `SUB) ? ((A[31] && ~B[31] && ~Result[31]) || (~A[31] && B[31] && Result[31])) : 
			                                0;
    //overflow in sub : +- -> -; -+ -> +
    //overflow in add : ++ -> -; -- -> +

	assign Zero = (Result == 0);
endmodule