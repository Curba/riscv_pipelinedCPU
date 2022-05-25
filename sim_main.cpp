// Booth Mulitplier Top level verilator simulation file:
// EEE 446 Spring 2021
// Ali Muhtaroglu, Middle East Technical University - Northern Cyprus Campus

#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "testbench.h"
#include "Vtop.h"
#include "Vtop___024root.h"

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
#define RbSelect        top__DOT_RbSelect
#define datamem         top__DOT__datapath__DOT__datamem
#define IdEx              top__DOT__datapath__DOT__IdEx
#define RF              top__DOT__datapath__DOT__RF
#define instmem         top__DOT__datapath__DOT__instmem
#define Alu1out         top__DOT__datapath__DOT__Alu1out
#define PC              top__DOT__datapath__DOT__PC


// In case you would like he simulator to do operations conditional to DEBUG mode:
#define DEBUG       0

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

  int PC = 0;
  int error_count = 0;

  tb->reset();
  clock_count++;
  // Hit that reset button for one clock cycle:
  if(DEBUG){
    tb->tick();
    clock_count++;
    tb->tick();
    clock_count++;

    //addi r1, r0, 2
    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 3){
        printf("addi r1, r0, 2  \n");}
    tb->tick();
    clock_count++;


    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 41){
        printf("lh r4, 0(r0) \n");}
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 33){
        printf("lb r5, 0(r0) \n");}
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 57){
        printf("beq r1, r0, lbl1 \n");}
    tb->tick();
    clock_count++;

        tb->tick();
        clock_count++;
        tb->tick();
        clock_count++;
        tb->tick();
        clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op ==11){
        printf("subi r1, r1, 1 ");
        printf("// Finished branch: Not Taken (+)");
    }
    tb->tick();
    clock_count++;

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[1] == 2){
        printf("// Finished addi : RF = 2 (+)\n");
    }else{
        printf("addi failed \n");
        error_count++;
    }

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 40){
        printf("and r6, r4, r5 ");}

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[4] == 43981){
        printf("// Finished lh : RF[4] = 43981 (+)\n");
    }else{
        printf("lh failed \n");
        error_count++;
    }
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 3){
        printf("addi r6, r6, 1 ");}

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[5] == 243){
        printf("// Finished lb : RF[5] = 243 (+)\n");
    }else{
        printf("lb failed \n");
        error_count++;
    }
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 48){
        printf("or  r7, r6, r5 ");}

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[1] == 1){
        printf("// Finished subi : RF[1] = 1 (+)\n");
    }else{
        printf("subi failed \n");
        error_count++;
    }
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 80){
        printf("srl r8, r7, 2 ");}

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[6] == 193){
        printf("// Finished and : RF[6] = C1 (+)\n");
    }else{
        printf("and failed  RF[6] = %02x (-)\n", tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[6]);
        error_count++;
    }
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 88){
        printf("sra r9, r8, 1 ");}

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[6] == 194){
        printf("// Finished addi : RF[6] = C2 (+)\n");
    }else{
        printf("addi failed  RF[6] = %02x (-)\n", tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[6]);
        error_count++;
    }
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 19){
        printf("muli r10, r9, 4095 ");}

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[7] == 243){
        printf("// Finished or : RF[7] = F3 (+)\n");
    }else{
        printf("or failed  RF[6] = %02x (-)\n", tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[7]);
        error_count++;
    }
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 17){
        printf("sh  r10, 20(r0) ");}

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[8] == 60){
        printf("// Finished srl : RF[8] = 3C (+)\n");
    }else{
        printf("srl failed  RF[8] = %02x (-)\n", tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[8]);
        error_count++;
    }
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 9){
        printf("sb  r9, 28(r0) ");}

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[9] ==30){
        printf("// Finished sra : RF[9] = 1E (+)\n");
    }else{
        printf("sra failed  RF[9] = %02x (-)\n", tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[8]);
        error_count++;
    }
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 4){
        printf("jal lbl2 ");}

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[10] == 122850){
        printf("// Finished muli : RF[10] = 1DFE2 (+) ");
    }else{
        printf("muli failed  RF[10] = %02x (-) ", tb->m_topsim->rootp->top__DOT__datapath__DOT__RF[8]);
        error_count++;
    }

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__datamem_write_data == 122850){
        printf("// Finished sh : mem[20] = 1DFE2 (+)\n");
    }else{
        printf("sh failed mem[20] = %02x (-)\n", tb->m_topsim->rootp->top__DOT__datapath__DOT__datamem_write_data);
    }
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 0){
        printf("jumped to lb12 ");}

    if(tb->m_topsim->rootp->top__DOT__datapath__DOT__datamem_write_data == 30){
        printf("// Finished sh : mem[28] = 1E (+)\n");
    }else{
        printf("sh failed mem[28] = %02x (-)\n", tb->m_topsim->rootp->top__DOT__datapath__DOT__datamem_write_data);
        error_count++;
    }
    tb->tick();
    clock_count++;

    printf(" PC: %d ", tb->m_topsim->rootp->top__DOT__datapath__DOT__PC);
    if(tb->m_topsim->rootp->Op == 57){
        printf("lbl12: beq r1, r0, lbl1 ");}
    tb->tick();
    clock_count++;

  }else{
      for(int x = 0; x < 50; x++){
    tb->tick();
    clock_count++;
      }
  }

  printf(" \n Execution completed successfully (simulation waveforms in .vcd file) ... !\n");
  printf(" Elapsed Clock Cycles: %ld\n",clock_count);
  printf(" Failed #: %d\n",error_count);
  exit(EXIT_SUCCESS);

}
