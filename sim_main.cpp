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
    if (DEBUG) {
      printf("%08lx-ADDER: ", m_tickcount);
      printf("%s: %16i :: %s: %16i:: %s: %1i :: %s:%32i",
	     "MInput",m_topsim->MInput,
	     "QInput",m_topsim->QInput,
	     "startSignal",m_topsim->startSignal,
	     "Sout",m_topsim->SOUT);
      printf("\n");
    }
  }
};

int main(int argc, char** argv, char** env){

  // input and output numbers to help with testing:
  int M = 0;
  int Mprev = 0;
  int Q;
  int Qprev = 0;
  int S = 0;
  signed int Sprev = 0;
  bool startSignal = 0;
  bool startSignalprev = 0;

  // some parameters we may want to keep track of:
  long clock_count = 0;
  long error_count = 0;
  bool test_pass = false;

  // Initialize Verilators variables
  Verilated::commandArgs(argc, argv);
  // Create an instance of our module under test
  TOPLEVEL_TB *tb = new TOPLEVEL_TB;

  // Message to standard output that test is starting:
  printf("Executing the test ...\n");

  // Data will be dumped to trace file in gtkwave format to look at waveforms later:
  tb->opentrace("booth_waveforms.vcd");

  // Note this message will only be output if we are in DEBUG mode:
  if (DEBUG) printf("Giving the system 1 cycle to initialize with reset...\n");

  // Hit that reset button for one clock cycle:
  tb->reset();
  clock_count++;

  // Change the inputs if you wish, check the outputs if you wish, and
  // tick the clock until done:

  // first enable register updates:
//  tb->m_topsim->startSignal = 1;

  // verify the unsigned adder operation using 10000 random numbers for inputs:
  if (DEBUG) printf("Running verification with 10000 random inputs...\n");

  for (int k = 0; k < 1001; k++){
    M = 32767 - (rand() % 65535);
    Q = 32767 - (rand() % 65535);
    tb->m_topsim->MInput= M;
    tb->m_topsim->QInput = Q;
    tb->m_topsim->startSignal = 1;
    tb->tick();
    clock_count++;
    tb->tick();
    clock_count++;
    tb->m_topsim->startSignal = 0;
    tb->tick();
    clock_count++;
    for(int l = 0; l< 16; l++){
        tb->tick();
        clock_count++;
    }
    Mprev = M;
    Qprev = Q;
    Sprev = Mprev * Qprev;

    // check for any functional bugs; but skip first iteration to allow data to propagate:
    if (tb->m_topsim->SOUT != Sprev) {
      error_count++;
      printf("Error!!!!!!!!!!");
    }
    if (DEBUG){
    tb->reset();
      printf("Clock: %08lx :: PrevM: %04i:: PrevQ: %04i:: Output: %08i\n",
              clock_count,Mprev,Qprev,Sprev);
    }
  }//for end

    M = 0;
    Q = 0;
    tb->m_topsim->MInput= M;
    tb->m_topsim->QInput = Q;
    tb->m_topsim->startSignal = 1;
    tb->tick();
    clock_count++;
    tb->tick();
    clock_count++;
    tb->m_topsim->startSignal = 0;
    tb->tick();
    clock_count++;
    for(int l = 0; l< 16; l++){
        tb->tick();
        clock_count++;
    }
    Mprev = M;
    Qprev = Q;
    Sprev = Mprev * Qprev;

    // check for any functional bugs; but skip first iteration to allow data to propagate:
    if (tb->m_topsim->SOUT != Sprev) {
      error_count++;
      printf("Error!!!!!!!!!!");
    }
    if (DEBUG){
    tb->reset();
      printf("Clock: %08lx :: PrevM: %04i:: PrevQ: %04i:: Output: %08i\n",
              clock_count,Mprev,Qprev,Sprev);
    }

    M = 1;
    Q = 1;
    tb->m_topsim->MInput= M;
    tb->m_topsim->QInput = Q;
    tb->m_topsim->startSignal = 1;
    tb->tick();
    clock_count++;
    tb->tick();
    clock_count++;
    tb->m_topsim->startSignal = 0;
    tb->tick();
    clock_count++;
    for(int l = 0; l< 16; l++){
        tb->tick();
        clock_count++;
    }
    Mprev = M;
    Qprev = Q;
    Sprev = Mprev * Qprev;

    // check for any functional bugs; but skip first iteration to allow data to propagate:
    if (tb->m_topsim->SOUT != Sprev) {
      error_count++;
      printf("Error!!!!!!!!!!");
    }
    if (DEBUG){
    tb->reset();
      printf("Clock: %08lx :: PrevM: %04i:: PrevQ: %04i:: Output: %08i\n",
              clock_count,Mprev,Qprev,Sprev);
    }

  test_pass = (error_count > 0) ? 0 : 1;
  printf("Execution completed successfully (simulation waveforms in .vcd file) ... !\n");
  printf("Elapsed Clock Cycles: %ld\n",clock_count);
  printf("Functional verification Status: %s\n",test_pass?"PASS":"FAIL");
  if (error_count > 0){
    printf("Error count is: %ld\n",error_count);
  }
  exit(EXIT_SUCCESS);

}
