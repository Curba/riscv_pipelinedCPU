// Adder to level verilator simulation file:
// EEE 446 Spring 2021
// Ali Muhtaroglu, Middle East Technical University - Northern Cyprus Campus

#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "testbench.h"
#include "Vtop.h"

// Top level interface signals defined here:
#define	Opcode_Out	   Opcode_Out



// Internal signals defined her
// Note systemverilog design hirarchy can be traced by appending __DOT__ at every level:
#define ALUOp          top__DOT__ALUOp
#define Op           top__DOT__Op
#define MemRead           top__DOT__MemRead
#define MemWrite           top__DOT__MemWrite
#define MemToReg           top__DOT__MemToReg
#define ALUSrc           top__DOT__ALUSrc
#define RegWrite           top__DOT__RegWrite
#define RegDst           top__DOT__RegDst
#define Branch           top__DOT__Branch
#define PCSrc           top__DOT__PCSrc
#define MAC           top__DOT__MAC
#define Jump           top__DOT__Jump
#define datamem           top__DOT__u1__DOT__datamem
#define RF           top__DOT__u1__DOT__RF
#define instmem           top__DOT__u1__DOT__instmem




// In case you would like he simulator to do operations conditional to DEBUG mode:
#define DEBUG       1
#define WIDTH       16

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
      printf("%08lx-Pipeline: ", m_tickcount);
      printf("%s: %5x",
	     "Opcode_Out",m_topsim->Opcode_Out);
      printf("\n");
    }
  }
};

int main(int argc, char** argv, char** env){

  // input and output numbers to help with testing:

  signed short Q;
  signed short M;
  signed short X;
  signed short result;
  signed short datamem;
  signed short RF_1;
  signed short RF_2;
  signed short RF_3;
  signed short RF_4;



  // some parameters we may want to keep track of:
  long clock_count = 0;
  long error_count = 0;
  bool test_pass = false;

  // Initialize Verilators variables
  Verilated::commandArgs(argc, argv);
  // Create an instance of our module under test
  TOPLEVEL_TB *tb = new TOPLEVEL_TB;


  Q = tb->m_topsim->instmem[6] & 0xFF;
  Q = (Q << 8) + (tb->m_topsim->instmem[7] & 0xFF);

  M = tb->m_topsim->datamem[6] & 0xFF;
  M = (M << 8) + (tb->m_topsim->datamem[7] & 0xFF);

  X = tb->m_topsim->datamem[8] & 0xFF;
  X = (X << 8) + (tb->m_topsim->datamem[9] & 0xFF);
  X = (X << 8) + (tb->m_topsim->datamem[10] & 0xFF);
  X = (X << 8) + (tb->m_topsim->datamem[11] & 0xFF);


  result = Q*M+X;



  // Message to standard output that test is starting:
  printf("Executing the test ...\n");

  // Data will be dumped to trace file in gtkwave format to look at waveforms later:
  tb->opentrace("Pipeline_waveforms.vcd");

  // Note this message will only be output if we are in DEBUG mode:
  if (DEBUG) printf("Giving the system 1 cycle to initialize with reset...\n");

  // Hit that reset button for one clock cycle:
  tb->reset();
  clock_count++;

  // Change the inputs if you wish, check the outputs if you wish, and
  // tick the clock until done:
  for (int k = 0; k < 28 ; k++){

    tb->tick();
    clock_count++;
     if (clock_count == 16){


       RF_1 = tb->m_topsim->RF[1];
       RF_2 = tb->m_topsim->RF[2];
       RF_3 = tb->m_topsim->RF[3];
       RF_4 = tb->m_topsim->RF[4];

       datamem = tb->m_topsim->datamem[12] & 0xFF;
       datamem = (datamem << 8) + (tb->m_topsim->datamem[13] & 0xFF);
       datamem = (datamem << 8) + (tb->m_topsim->datamem[14] & 0xFF);
       datamem = (datamem << 8) + (tb->m_topsim->datamem[15] & 0xFF);
       //test = test + tb->m_topsim->datamem[15];

       if ((datamem != result or RF_1 != Q or RF_2 != M or RF_3 != X or RF_4 != result)){
      error_count++;
      }

      }
  }

    if (DEBUG){
      printf("Clock: %08lx  :: result: %8x  :: datamem: %8x :: RF[1]: %4x :: RF[2]: %4x :: RF[3]: %8x :: RF[4]: %8x  \n",clock_count,result,datamem,RF_1,RF_2,RF_3,RF_4);
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
