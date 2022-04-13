// Booth Mulitplier Top level verilator simulation file:
// EEE 446 Spring 2021
// Ali Muhtaroglu, Middle East Technical University - Northern Cyprus Campus

#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "testbench.h"
#include "Vtop.h"

// Top level interface signals defined here:
#define	Op          Op
// Internal signals defined here:
// Note systemverilog design hierarchy can be traced by appending __DOT__ at every level:
#define MemRead         top__DOT__MemRead
#define MemWrite        top__DOT__MemWrite
#define PCSrc           top__DOT__PCSrc
#define MemToReg        top__DOT__MemToReg
#define RegWrite        top__DOT__RegWrite
#define ALUOp           top__DOT__ALUOp
#define ALUSrc          top__DOT_ALUSrc
#define datamem         top__DOT__datapath__DOT__datamem
#define RF              top__DOT__datapath__DOT__RF
#define instmem         top__DOT__datapath__DOT__instmem
#define Alu1out         top__DOT__datapath__DOT__Alu1out


// In case you would like he simulator to do operations conditional to DEBUG mode:
#define DEBUG       1

// Note the use of top level design name here after 'V' as class type:
class	TOPLEVEL_TB : public TESTBENCH<Vtop> {

  long m_tickcount;

public:

  TOPLEVEL_TB(void) {
  }

  // Every time this procedure is called, clock is ticked once and associated
  // simulation tests and/or signal outputs for debug can be put into action:
  void tick(void) {

    TESTBENCH<Vtop>::tick();

    // we are often interested in keeping track of number of clock ticks:
    m_tickcount++;

    // if DEBUG macro is set, we will then dump some signal values out every clock cycle
    // only the top level interface signals are listed here, but note you can use the
    // above defined macros to look at internal signals as well in debug mode. This is
    // quite useful when gtkwave cannot handle very large memory arrays etc.
  }
};

int main(int argc, char** argv, char** env){


  long clock_count = 0;
  // Initialize Verilators variables
  Verilated::commandArgs(argc, argv);
  // Create an instance of our module under test
  TOPLEVEL_TB *tb = new TOPLEVEL_TB;

  // Message to standard output that test is starting:
  printf("Executing the test ...\n");

  // Data will be dumped to trace file in gtkwave format to look at waveforms later:
  tb->opentrace("lab2_waveforms.vcd");

  // Note this message will only be output if we are in DEBUG mode:
  if (DEBUG) printf("Giving the system 1 cycle to initialize with reset...\n");

      tb->reset();
      clock_count++;
  // Hit that reset button for one clock cycle:
  for(int x = 0; x < 50; x ++){
        tb->tick();
        clock_count++;
  }

  // Change the inputs if you wish, check the outputs if you wish, and
  // tick the clock until done:

  // first enable register updates:
//  tb->m_topsim->startSignal = 1;

  // verify the unsigned adder operation using 10000 random numbers for inputs:
  if (DEBUG) printf("Running verification with 10000 random inputs...\n");

  printf("Execution completed successfully (simulation waveforms in .vcd file) ... !\n");
  printf("Elapsed Clock Cycles: %ld\n",clock_count);
  exit(EXIT_SUCCESS);

}
