`timescale 1ns / 1ps

module TwoToFourDecoder_tb;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire W;
	wire X;
	wire Y;
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	TwoToFourDecoder uut (
		.A(A), 
		.B(B), 
		.W(W), 
		.X(X), 
		.Y(Y), 
		.Z(Z)
	);

	integer i;

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		for (i=0;i<4;i=i+1)begin
			B=i[0];
			A=i[1];
			#20;
		end
		  
		$finish;
	end
      
endmodule

