`timescale 1ns / 1ps

module threeInAND(
	input A,
	input B,
	input C,
	output Y
    );

assign Y = A & B & C;


endmodule
