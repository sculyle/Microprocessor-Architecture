`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:12:19 09/05/2025
// Design Name:   threeInAND
// Module Name:   /home/ise/Shared/ThreeInputANDGate/threeInAnd_tb.v
// Project Name:  ThreeInputANDGate
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: threeInAND
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module threeInAnd_tb;

	// Inputs
	reg A;
	reg B;
	reg C;

	// Outputs
	wire Y;
	integer count;

	// Instantiate the Unit Under Test (UUT)
	threeInAND uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.Y(Y)
	);

	reg [2:0] co;

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C = 0;
		co = 0;

		// Wait 100 ns for global reset to finish
		#100;

		for(count=0;count<=8;count=count+1)begin
			A=co[0];
			B=co[1];
			C=co[2];
			co=co+1;
			#20;
		end
	end
      
endmodule

