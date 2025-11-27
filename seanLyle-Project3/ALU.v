`timescale 1ns / 1ps

/*
Name: Sean Lyle
R-Number: R-11812648
Assignment: Project 3
*/

module ALU(
	input [31:0] busA,
	input [31:0] busB,
	input [4:0] operation,
	input clk, rst,
	
	output reg [31:0] result,
	output reg z, //zero
	output reg n, //negative
	output reg c, // carry
	output reg v //overflow

    );


always @(*) begin

	result = 32'b0;
	n = 1'b0;
	v = 1'b0;
	c = 1'b0;
	z = 1'b0;


	case(operation)
	
		5'h01: begin // 0x01 - LD pass through (port: busA)
 			result = busA;
		end
		
		5'h03: begin // 0x03 Add
			{c, result} = busA + busB; //add
		 
			v = (busA[31] == busB[31]) && (result[31] != busA[31]); // overflow? if the inputs are same sign but output sign flipped
			z = (result==0); // checks if result is zero
			n = result[31]; // checks sign bit for negative
		end
		
		5'h04: begin // 0x04 Subtract
			{c, result} = busA - busB; //subtract
			c = ~c;
			z = (result == 0); // zero? checks if result is zero
			v = (busA[31] != busB[31]) && (result[31] != busA[31]); // overflow? if the inputs are same sign but sign flipped
			n = result[31]; // // checks sign bit for negative
		end
		
		5'h05: begin // 0x05 AND
			result = busA & busB; // and

			z = (result == 0); // checks if result is zero
		end
		
		5'h06: begin // 0x06 OR
			result = busA | busB; // or
			
			z = (result == 0); //checks if result is zero
		end
		
		5'h07: begin // 0x07 XOR
			result = busA ^ busB; // xor

			z = (result == 0); // checks if result is zero
		end
		
		5'h08: begin // 0x08 NOT (busA)
			result = ~busA; //not

			z = (result == 0); // checks if result is zero
		end
		
		5'h09: begin // 0x09 SL - Shift left contents of one bus by number of bits speicifed by the other
			result = busA << busB[4:0]; //shift

			if (busB[4:0] > 0) begin // if a shift had to occur then so did a carry
				c = busA[31];
			end else begin
				c = 0;
			end
		
			z = (result == 0); // checks if result is zero
		end

		5'h0A: begin // 0x0A SR - Shift right contents of one bus by number of bits speicifed by the other
			result = busA >> busB[4:0]; //shift
		
			z = (result == 0); // checks if result is zero
		end
		
		default begin
			result = 32'b0;
		end
		
	endcase
	
end


endmodule
