`timescale 1ns / 1ps

module TwoToFourDecoder(A, B, W, X, Y, Z);

	input A, B;
	output reg W, X, Y, Z;
	
	always @(A, B)begin
		case({A,B}) //{A,B} is conctenating contents of A and B
			2'b00:begin
				W=1;
				X=0;
				Y=0;
				Z=0;
			end
			
			2'b01:begin
				W=0;
				X=1;
				Y=0;
				Z=0;
			end
			
			2'b10:begin
				W=0;
				X=0;
				Y=1;
				Z=0;
			end
			
			2'b11:begin
				W=0;
				X=0;
				Y=0;
				Z=1;
			end
		endcase
	end


endmodule
