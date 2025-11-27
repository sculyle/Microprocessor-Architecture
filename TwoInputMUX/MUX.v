`timescale 1ns / 1ps

module MUX(A, B, sel, X);
	input [7:0] A;
	input [7:0] B;
	input sel;
	
	output reg [7:0] X;
	
	always @(A, B, sel) begin //whenever those change the always block will execute
		case(sel)
			2'b0: 
				begin
					X = A;
				end
			2'b1: 
				X = B;
		endcase
	end

endmodule
