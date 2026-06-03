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

//规定指令类型
`define R_type          5'b01100        //R型的计算指令
`define I_type_c        5'b00100        //I型的运算指令
`define I_type_l        5'b00000        //I型的取数指令
`define JALR            5'b11001        //I型的跳转指令
`define S_type          5'b01000        //S型的存数指令
`define B_type          5'b11000        //B型的分支指令
`define LUI             5'b01101        //U型指令LUI
`define AUIPC           5'b00101        //U型指令AUIPC
`define JAL             5'b11011        //J型跳转指令

//规定操作类型
//B型分支指令
`define BEQ             3'b000
`define BNE             3'b001
`define BLT             3'b100
`define BGE             3'b101
`define BLTU            3'b110
`define BGEU            3'b111

//I型取数指令
`define LB              3'b000
`define LH              3'b001
`define LW              3'b010
`define LBU             3'b100
`define LHU             3'b101

//S型存数指令
`define SB              3'b000
`define SH              3'b001
`define SW              3'b010

//I型运算指令
`define ADDI            3'b000
`define SLTI            3'b010
`define SLTIU           3'b011
`define XORI            3'b100
`define ORI             3'b110
`define ANDI            3'b111
`define SLLI            3'b001
`define SR              3'b101          //要注意SR分为逻辑和算数, 这个取决于ins[30]的标志位

//R型指令, 利用ins[30]和中间的功能码共同拼成一个码
`define ADDr             4'b0000
`define SUBr             4'b1000
`define SLLr             4'b0001
`define SLTr             4'b0010
`define SLTUr            4'b0011
`define XORr             4'b0100
`define SRLr             4'b0101
`define SRAr             4'b1101
`define ORr              4'b0110
`define ANDr             4'b0111

//模块之间传输的位宽
`define PREDICTION_WIDTH 33
`define IF_TO_ID_WIDTH   64
//`define ID_TO_EX_WIDTH   254    //无mul
`define ID_TO_EX_WIDTH   256    //有mul + ebreak
`define EX_ID_BYPATH_WIDTH 39
`define MEM_ID_BYPATH_WIDTH 39
`define WB_ID_BYPATH_WIDTH 38
`define EX_TO_MEM_WIDTH 183
`define MEM_TO_WB_WIDTH 71