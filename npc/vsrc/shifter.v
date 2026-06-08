`timescale 10 ns / 1 ns

`define DATA_WIDTH 32

module shifter (
    input  [`DATA_WIDTH - 1:0] A,
    input  [              4:0] B,
    input  [              1:0] Shiftop,
    output [`DATA_WIDTH - 1:0] Result
);
    	//转换为有符号数
	wire signed [`DATA_WIDTH-1:0] A_signed;
    	assign A_signed = $signed(A);

	//值得注意的是, 在这里需要用这三个wire来承接三个左右移的结果, 经过测试, 在三目运算符中的运算如果有
	//无符号数的出现, 会将运算公式中的所有有符号数转换为无符号数, 来产生结果
    	wire [`DATA_WIDTH-1:0]	result_sll;
    	wire [`DATA_WIDTH-1:0]	result_srl;
    	wire [`DATA_WIDTH-1:0]	result_sra;


    	assign	result_sll = A << B;
    	assign	result_srl = A >> B;
    	assign	result_sra = A_signed >>> B;

    	assign Result = (Shiftop == 2'b00) ? result_sll :	// 逻辑左移
                  	(Shiftop == 2'b10) ? result_srl :       // 逻辑右移
                  	(Shiftop == 2'b11) ? result_sra :	// 算术右移
                  	A;                                	// 默认直接输出A


	//以下是更改前的代码, 这个代码经过测试不能正确运行
	// assign Result = (Shiftop == 2'b00) ? A << B :		// 逻辑左移
        //           	   (Shiftop == 2'b10) ? A >> B :      		// 逻辑右移
        //           	   (Shiftop == 2'b11) ? A_signed >>> B :	// 算术右移
        //           	   A;    
endmodule