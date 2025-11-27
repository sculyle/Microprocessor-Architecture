`timescale 1ns / 1ps
////////////////////
module coinCounter(clk, inQ, inD, inN, rst, moneyCount);

	input inQ, inD, inN, rst, clk;
	
	output [9:0] moneyCount;

	parameter QUARTER_VALUE = 10'd25;
	parameter DIME_VALUE = 10'd10;
	parameter NICKEL_VALUE = 10'd5;
	
	reg [9:0] count;
	wire coinIn;

	assign moneyCount = count;
	assign coinIn =  inQ | inD | inN;
	
	always @(posedge clk, posedge rst)begin
		if (rst == 1) begin
			count <= 0;
		end else begin
			count <= count + (inQ*QUARTER_VALUE + inD*DIME_VALUE + inN*NICKEL_VALUE);
		end
	end


endmodule
