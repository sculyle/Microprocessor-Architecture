// Sean Lyle
// R11812648

`timescale 1ns / 1ps

module coinCounter(
	input clk, inQ, inD, inN, rst, 
	output [9:0] moneyCount
);

	parameter QUARTER_VALUE = 10'd25;
	parameter DIME_VALUE = 10'd10;
	parameter NICKEL_VALUE = 10'd5;
	
	reg [9:0] count;
	wire coinIn;

	// correlate directly the amount of money to useable io registers/wires
	assign moneyCount = count; //money total
	assign coinIn =  inQ | inD | inN; // was a coin input
	
	// if a coin is inserted on a clock then update total money count with the value of that coin/coins
	always @(posedge clk, posedge rst)begin
		if (rst == 1) begin
			count <= 0;
		end else begin
			count <= count + (inQ*QUARTER_VALUE + inD*DIME_VALUE + inN*NICKEL_VALUE); // calculate value of a coin
		end
	end


endmodule
