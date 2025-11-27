// Sean Lyle
// R11812648

`timescale 1ns / 1ps

module BevDispenser(
    input clk,
    input rst,
    input [9:0] money,
    input inbev1,
    input inbev2,
    input inbev3,
    output reg [9:0] change,
    output reg outbev1,
    output reg outbev2,
    output reg outbev3
);

	// beverage values
    parameter VALUE_BEV1 = 10'd175;
    parameter VALUE_BEV2 = 10'd75;
    parameter VALUE_BEV3 = 10'd200;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            change  <= 0;
            outbev1 <= 0;
            outbev2 <= 0;
            outbev3 <= 0;
        end else begin
            // default outputs
            outbev1 <= 0;
            outbev2 <= 0;
            outbev3 <= 0;

            // pulse for each  beverage request
				// each instance is a beverage pulse, and change calcuation
            if (inbev1 && money >= VALUE_BEV1) begin
                outbev1 <= 1;
                change  <= money - VALUE_BEV1;
            end
            else if (inbev2 && money >= VALUE_BEV2) begin
                outbev2 <= 1;
                change  <= money - VALUE_BEV2;
            end
            else if (inbev3 && money >= VALUE_BEV3) begin
                outbev3 <= 1;
                change  <= money - VALUE_BEV3;
            end
        end
    end
endmodule