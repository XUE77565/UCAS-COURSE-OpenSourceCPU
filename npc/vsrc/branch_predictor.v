`include "define.v"

//利用强(弱)分(不分)支为基本思路进行调整
module branch_predictor(
	input	clk,
	input 	rst,
	
        //分支信号, 只有在分支指令下才预测
	input 	is_Branch,
        //分支预测器状态更新信号
        input   predictor_update,

	input 	prediction_incorrect,
	output 	prediction_out
);

	reg [4:0] predictor_current_state;
	reg [4:0] predictor_next_state;

        localparam  INIT      = 5'b00001,
                    S_TAKE    = 5'b00010,
                    W_TAKE    = 5'b00100,
                    W_NTAKE   = 5'b01000,
                    S_NTAKE   = 5'b10000;

	always @ (posedge clk) begin
		if(rst) 
			predictor_current_state <=  INIT; 
		else
			predictor_current_state <= predictor_next_state ;
	end
	

	always @ (*) begin 
		case (predictor_current_state)
			INIT : begin
				if(rst)begin
					predictor_next_state = INIT ; 
                                end
				else begin
					predictor_next_state = S_TAKE ; 
                                end
			end
			S_TAKE : begin
				if(predictor_update && prediction_incorrect && is_Branch) begin
					predictor_next_state = W_TAKE ; 
                                end
				else begin
					predictor_next_state = S_TAKE ; 
                                end
			end
			W_TAKE : begin
				if(predictor_update && prediction_incorrect && is_Branch)begin
					predictor_next_state = W_NTAKE ; 
                                end
				else if (predictor_update && ~prediction_incorrect && is_Branch)begin
					predictor_next_state = S_TAKE ;
                                end
				else begin
					predictor_next_state = W_TAKE ; 
                                end
			end
			W_NTAKE : begin
				if(predictor_update && prediction_incorrect && is_Branch)begin
					predictor_next_state = S_NTAKE ; 
                                end
				else if (predictor_update && ~prediction_incorrect && is_Branch)begin
					predictor_next_state = W_TAKE ; 
                                end
				else begin
					predictor_next_state = W_NTAKE ;
                                end
			end
			S_NTAKE : begin
				if(predictor_update && prediction_incorrect && is_Branch)begin
					predictor_next_state = S_NTAKE ;
                                end
				else if(predictor_update && ~prediction_incorrect && is_Branch)begin
					predictor_next_state = W_NTAKE ; 
                                end
				else begin
					predictor_next_state = S_NTAKE ;
                                end
			end
			default: begin
				predictor_next_state = INIT;
                        end
		endcase
	end
	
	assign	prediction_out = (predictor_current_state == S_TAKE) || (predictor_current_state == W_TAKE);

endmodule