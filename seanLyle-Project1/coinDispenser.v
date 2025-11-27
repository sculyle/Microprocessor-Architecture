// Sean Lyle
// R11812648

`timescale 1ns / 1ps

module coinDispenser(
    input clk,
    input rst,
    input disp,
    input [9:0] change,
    output reg dispQuarter,
    output reg dispDime,
    output reg dispNickel,
    output reg busy,
    output reg done
);

    //  State machine states
    parameter STATE_IDLE     = 3'd0;
    parameter STATE_CQUARTER = 3'd1;
    parameter STATE_CDIME    = 3'd2;
    parameter STATE_CNICKEL  = 3'd3;
    parameter STATE_QUARTER  = 3'd4;
    parameter STATE_DIME     = 3'd5;
    parameter STATE_NICKEL   = 3'd6;
    parameter STATE_WAIT     = 3'd7; 
    parameter QUARTER_VALUE = 25;
    parameter DIME_VALUE    = 10;
    parameter NICKEL_VALUE  = 5;

    // registers/wires
    reg [2:0] state;
    reg [9:0] money;
    reg [6:0] quarters;
    reg [7:0] dimes;
    reg [8:0] nickels;

    reg disp_prev;
    wire disp_rise = disp & ~disp_prev; // make sure to note when a dispense occurs 

    always @(posedge clk) begin
        if (rst) begin // default state all zeros and idle
            dispQuarter <= 0;
            dispDime    <= 0;
            dispNickel  <= 0;
            state       <= STATE_IDLE;
            money       <= 0;
            quarters    <= 0;
            dimes       <= 0;
            nickels     <= 0;
            busy        <= 0;
            done        <= 0;
            disp_prev   <= 0;
        end else begin
            disp_prev <= disp; // record previous disp state

            // default outputs each clock
            dispQuarter <= 0;
            dispDime    <= 0;
            dispNickel  <= 0;
            busy        <= 0;
            done        <= 0;

            case (state)
                STATE_IDLE: begin // see if money availible and dispense possible
                    if (disp_rise) begin
                        money <= change;
                        state <= STATE_CQUARTER;
                        busy  <= 1;
                    end
                end

                STATE_CQUARTER: begin // calc quarters
                    busy     <= 1;
                    quarters <= money / QUARTER_VALUE;
                    money    <= money % QUARTER_VALUE;
                    state    <= STATE_CDIME;
                end
					 
                STATE_CDIME: begin // calc dimes
                    busy  <= 1;
                    dimes <= money / DIME_VALUE;
                    money <= money % DIME_VALUE;
                    state <= STATE_CNICKEL;
                end

                STATE_CNICKEL: begin // calc nickels
                    busy    <= 1;
                    nickels <= money / NICKEL_VALUE;
                    state   <= STATE_QUARTER;
                end

                // -----------------------------
                STATE_QUARTER: begin // dispense quarters
                    busy <= 1;
                    if (quarters > 0) begin
                        dispQuarter <= 1;
                        quarters    <= quarters - 1;
                        state       <= STATE_WAIT;  // 
                    end else begin
                        state <= STATE_DIME;
                    end
                end

                // -----------------------------
                STATE_DIME: begin // dispense dimes
                    busy <= 1;
                    if (dimes > 0) begin
                        dispDime <= 1;
                        dimes    <= dimes - 1;
                        state    <= STATE_WAIT;  
                    end else begin
                        state <= STATE_NICKEL;
                    end
                end

                // -----------------------------
                STATE_NICKEL: begin  // dispense nickels
                    busy <= 1;
                    if (nickels > 0) begin
                        dispNickel <= 1;
                        nickels    <= nickels - 1;
                        state      <= STATE_WAIT; // 
                    end else begin
                        state <= STATE_IDLE;
                        done  <= 1;
                    end
                end

                // -----------------------------
                STATE_WAIT: begin  // stall and remember where the previous output state was for next clock
                    busy  <= 1;
                    // return to whichever dispense type still active
                    if (quarters > 0)      state <= STATE_QUARTER;
                    else if (dimes > 0)    state <= STATE_DIME;
                    else if (nickels > 0)  state <= STATE_NICKEL;
                    else begin
                        state <= STATE_IDLE;
                        done  <= 1;
                    end
                end
            endcase
        end
    end
endmodule