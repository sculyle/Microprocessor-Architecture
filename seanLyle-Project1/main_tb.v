// Sean Lyle
// R11812648

`timescale 1ns / 1ps

module tb_main;

    // inputs
    reg clk;
    reg rst;
    reg inQ, inD, inN;
    reg inbev1, inbev2, inbev3;
    reg cancel;

    // outputs
    wire outbev1, outbev2, outbev3;
    wire dispQuarter, dispDime, dispNickel;

    main uut (
        .clk(clk),
        .rst(rst),
        .inQ(inQ),
        .inD(inD),
        .inN(inN),
        .inbev1(inbev1),
        .inbev2(inbev2),
        .inbev3(inbev3),
        .cancel(cancel),
        .outbev1(outbev1),
        .outbev2(outbev2),
        .outbev3(outbev3),
        .dispQuarter(dispQuarter),
        .dispDime(dispDime),
        .dispNickel(dispNickel)
    );

    // clock
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 10 ns period
    end

    initial begin
        // initialize values to all zeros
        rst = 1;
        inQ = 0; inD = 0; inN = 0;
        inbev1 = 0; inbev2 = 0; inbev3 = 0;
        cancel = 0;
        #50; rst = 0;
        $display("Test start");


// ---- Test 1: Insert $1.90 (7Q, 1D, 1N), buy Bev1 ($1.75) - $0.15 Change ----
        $display("Test 1: Insert $1.90 (7Q, 1D, 1N), buy Bev1 ($1.75)");
		  //input coins
        inQ=1; #10; inQ=0; #10; // 25
        inQ=1; #10; inQ=0; #10; // 50
        inQ=1; #10; inQ=0; #10; // 75
        inQ=1; #10; inQ=0; #10; // 1.00
        inQ=1; #10; inQ=0; #10; // 1.25
        inQ=1; #10; inQ=0; #10; // 1.50
        inQ=1; #10; inQ=0; #10; // 1.75
        inD=1; #10; inD=0; #10; // 1.85
        inN=1; #10; inN=0; #10; // 1.90
        // press Bev1
        inbev1=1; #10; inbev1=0;
		  //change should dispense
		  #120

        // ---- Test 2: Insert $0.75 (3Q), buy Bev2 ($0.75) - Exact Change ----
        $display("Test 2: Insert $1.00 (4Q), buy Bev2 ($0.75)");
        inQ=1; #10; inQ=0; #10; // 0.25
        inQ=1; #10; inQ=0; #10; // 0.50
        inQ=1; #10; inQ=0; #10; // 0.75
        // press Bev2
        inbev2=1; #10; inbev2=0;
		  //change should dispense		  
        #120;

        // ---- Test 3: Insert 40¢ (1Q, 1D,1N), then cancel - $0.40 Change ----
        $display("Test 3: Insert 40¢ (1Q, 1D,1N), then cancel");
        inQ=1; #10; inQ=0; #10; // 0.25
        inD=1; #10; inD=0; #10; // 0.35
        inN=1; #10; inN=0; #10; // 0.40
		  // press cancel
        cancel=1; #10; cancel=0;
 		  //change should dispense
        #120;



        // ---- Test 4: Insert $2.40, buy Bev3 ($2.00) - $0.40 Change ----
        $display("Test 4: Insert $2.40, buy Bev3 ($2.00) - $0.40 Change");
        inQ=1; #10; inQ=0; #10; // 0.25
        inQ=1; #10; inQ=0; #10; // 0.50
        inQ=1; #10; inQ=0; #10; // 0.75
        inQ=1; #10; inQ=0; #10; // 1.00
        inQ=1; #10; inQ=0; #10; // 1.25
        inQ=1; #10; inQ=0; #10; // 1.50
        inQ=1; #10; inQ=0; #10; // 1.75
        inQ=1; #10; inQ=0; #10; // 2.00
        inQ=1; #10; inQ=0; #10; // 2.25
        inD=1; #10; inD=0; #10; // 2.35
        inN=1; #10; inN=0; #10; // 2.40
        // press bev3
		  inbev3=1; #10; inbev3=0;
        #120;
		  //change should dispense		  
		  
		  
        // ---- Test 5: Cancel at zero balance to make sure no change leftover----
        $display("Test 5: Cancel with zero balance");
        cancel=1; #10; cancel=0;

        $display("Test finished");
        $finish;
    end

endmodule