`timescale 1ns / 1ps


module MUX_tb;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;
	reg sel;

	// Outputs
	wire [7:0] X;

	// Instantiate the Unit Under Test (UUT)
	MUX uut (
		.A(A), 
		.B(B), 
		.sel(sel), 
		.X(X)
	);

	initial begin
		// Initialize Inputs
		A = 8'b10101010;
		B = 8'b01010101;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		sel=1;
	   #20;
		B=8'hFA;
		#20;
		$finish;
		
		  
	end
      
endmodule

