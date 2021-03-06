module mips_testbench();

   reg clk;
   reg rst;
	reg int0;
   
   mips_cpu dut ( .clk(clk), .rst(rst), .int0(int0) );

   initial begin
      clk = 0;
      forever
        #10 clk = ~clk;              
   end


   initial begin
      rst = 1;
      
      repeat (4)
        @(posedge clk);

      rst = 0;

      repeat (10000)				
			@(posedge clk);
				
					

      //$stop();
      
   end

   initial begin
      forever
        begin
           @(posedge clk);
           $display("$t0 (REG8) = %x",dut.datapath_inst.regfile_inst.rf[8]);
			  $display("$PC (PC) = %x",dut.datapath_inst.pc_reg);
        end
   end
	
	initial begin
		int0=0;
		forever
        #500 int0 = ~int0;  
   end
   

endmodule
