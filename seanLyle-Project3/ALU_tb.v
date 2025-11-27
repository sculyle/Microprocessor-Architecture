`timescale 1ns / 1ps

/*
Name: Sean Lyle
R-Number: R-11812648
Assignment: Project 3
*/

module ALU_tb;

	// Inputs
	reg [31:0] busA;
	reg [31:0] busB;
	reg [4:0] operation;
	reg clk;
	reg rst;

	// Outputs
	wire [31:0] result;
	wire z;
	wire n;
	wire c;
	wire v;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.busA(busA), 
		.busB(busB), 
		.operation(operation), 
		.clk(clk), 
		.rst(rst), 
		.result(result), 
		.z(z), 
		.n(n), 
		.c(c), 
		.v(v)
	);

	initial begin
		// Initialize Inputs
		busA = 0;
		busB = 0;
		operation = 0;
		clk = 0;
		rst = 0;
		 
		#50
      // LD test - result is same as busA
      busA = 32'h0F0F0F0F; 
      operation = 5'h01;
      #50;

		// Add test  - result should be 7
		busA = 32'd2;
      busB = 32'd5;
      operation = 5'h03;
      #50;

		// Overflow test - result should ben 80000000 - flags n and v
		busA = 32'h7fffffff;   // max positive
		busB = 32'd1;
		operation = 5'h03;
		#50;

	   // Subtract test - result should be 2 - flag c
	   busA = 32'd5;
	   busB = 32'd3;
	   operation = 5'h04;
	   #50;
	  
	  //subtract with borrow - result should be -2 - flag n
	   busA = 32'd3;
	   busB = 32'd5;
	   operation = 5'h04;
	   #50;
	  
	  
	   // And test - result should be 00000000 - flag z
	   busA = 32'hF0F0_F0F0;
	   busB = 32'h0F0F_0F0F;
	   operation = 5'h05;
	   #50;
	  
	   // Or test - result should be ffffffff - no flag
	   operation = 5'h06;
	   #50;
	  
	   // XOR test - result should be ffffff00 - no flag
  	   busA = 32'hF0F0_F00F;
	   busB = 32'h0F0F_0F0F;
	   operation = 5'h07;
	   #50;
	
	   // Not test - result should be 0000ffff - no flag
	   busA = 32'hFFFF_0000;
	   busB = 32'h0F0F_0F0F;
	   operation = 5'h08;
	   #50;
	  
	  
	   // SL - result should be 00000002 - flag c
	   busA = 32'h8000_0001; 
	   busB = 32'd1;
	   operation = 5'h09;
	   #50;
	  
	   // SR - result should be 40000000 - no flags
	   busA = 32'h8000_0001;
	   busB = 32'd1;
	   operation = 5'h0A;
	   #50;
		 
		 
		$finish;
	end
      
endmodule

