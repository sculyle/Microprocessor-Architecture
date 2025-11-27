// Sean Lyle
// R11812648

`timescale 1ns / 1ps

module main(
    input  wire clk,
    input  wire rst,
    input  wire inQ, inD, inN, // input of each coin type
    input  wire inbev1, inbev2, inbev3, // inputs of each bev request 
    input  wire cancel, // cancel request

    output wire outbev1, outbev2, outbev3, // dispense beverage
    output wire dispQuarter, dispDime, dispNickel // dispense coin
);

    wire [9:0] moneyCount; // money amount CURRENTLY
    wire [9:0] change_from_purchase; 
    wire busy, done;

    reg [9:0] change_to_dispense; // change needed to output
    reg start_dispense; // start change output
    reg reset_counter; 
    reg [9:0] cancel_latched_amt;// money amount at request (total input)

//instantiate coin count module
    coinCounter u_counter(
        .clk(clk),
        .rst(rst | reset_counter),
        .inQ(inQ),
        .inD(inD),
        .inN(inN),
        .moneyCount(moneyCount)
    );

//instantiate bev dispense module
    BevDispenser u_bev(
        .clk(clk),
        .rst(rst),
        .money(moneyCount),
        .inbev1(inbev1),
        .inbev2(inbev2),
        .inbev3(inbev3),
        .outbev1(outbev1),
        .outbev2(outbev2),
        .outbev3(outbev3),
        .change(change_from_purchase)
    );

//instantiate coin dispense module
    coinDispenser u_disp(
        .clk(clk),
        .rst(rst),
        .disp(start_dispense),
        .change(change_to_dispense),
        .dispQuarter(dispQuarter),
        .dispDime(dispDime),
        .dispNickel(dispNickel),
        .busy(busy),
        .done(done)
    );

    parameter IDLE         = 3'd0;
    parameter VEND_LOAD    = 3'd1;
    parameter VEND_DISP    = 3'd2;
    parameter CANCEL_LOAD  = 3'd3;
    parameter CANCEL_DISP  = 3'd4;
    parameter RESET_COUNT  = 3'd5;

    reg [2:0] state, nstate;

    always @(posedge clk or posedge rst) begin
        if (rst) begin // initate state machine
            state <= IDLE;
            cancel_latched_amt <= 0;
        end else begin // go to next state
            state <= nstate;

            if (cancel && moneyCount > 0 && state == IDLE && !busy) // reset total money count to current money count (new money)
                cancel_latched_amt <= moneyCount;

            // reset total money after dispensing is finished
            if (state == RESET_COUNT) // reset money
                cancel_latched_amt <= 0;
        end
    end

    // state machine
    always @(*) begin
	     // reset states
        nstate = state;
        start_dispense = 0;
        reset_counter  = 0;
        change_to_dispense = 10'd0;

        case (state)
            IDLE: begin // check first, either empty change (cacnel) or go to next state
                if (cancel && moneyCount > 0 && !busy)
                    nstate = CANCEL_LOAD;
                else if (outbev1 || outbev2 || outbev3)
                    nstate = VEND_LOAD;
            end

				VEND_LOAD: begin // check for valid dispense
                if (change_from_purchase > 0) begin
                    start_dispense     = 1;
                    change_to_dispense = change_from_purchase; // calculated change from current money
                    nstate = VEND_DISP;
                end else begin
                    nstate = RESET_COUNT;
                end
            end

            VEND_DISP: begin // dipsence change
                start_dispense = 1;
                change_to_dispense = change_from_purchase; // calculated change from current money
                if (done)
                    nstate = RESET_COUNT;
            end

            CANCEL_LOAD: begin // move to cancel state
                if (cancel_latched_amt > 0) begin
                    start_dispense     = 1;
                    change_to_dispense = cancel_latched_amt; // calculated change from total money
                    nstate = CANCEL_DISP;
                end else begin
                    nstate = IDLE;
                end
            end

            CANCEL_DISP: begin // cancel state
                start_dispense     = 1;
                change_to_dispense = cancel_latched_amt; //calcuated change from total money
                if (done)
                    nstate = RESET_COUNT;
            end

             RESET_COUNT: begin
                reset_counter = 1;
                nstate = IDLE;
            end

            default: nstate = IDLE;
        endcase
    end

endmodule