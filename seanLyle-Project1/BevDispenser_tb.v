`timescale 1ns / 1ps

module BevDispenser_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [9:0] money;
	reg inbev1;
	reg inbev2;
	reg inbev3;

	// Outputs
	wire [9:0] change;
	wire outbev1;
	wire outbev2;
	wire outbev3;

	// Instantiate the Unit Under Test (UUT)
	BevDispenser uut (
		.clk(clk), 
		.rst(rst), 
		.money(money), 
		.change(change), 
		.inbev1(inbev1), 
		.inbev2(inbev2), 
		.inbev3(inbev3), 
		.outbev1(outbev1), 
		.outbev2(outbev2), 
		.outbev3(outbev3)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		money = 500;
		inbev1 = 0;
		inbev2 = 0;
		inbev3 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		rst = 1;
		#50;
		rst = 0;
		#50;
		
		inbev1 = 1;
		#50;
		inbev1 = 0;
		#500;
		
		inbev2 = 1;
		#50;
		inbev2 = 0;
		#500;
		
//		inbev3 = 1;
//		#500;
//		inbev3 = 0;
//		#500;
		  
	end
	
	always begin
		clk <= ~ clk;
		#20;
	end
      
endmodule

