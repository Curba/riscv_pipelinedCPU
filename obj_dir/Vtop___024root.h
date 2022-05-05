// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(Op,7,0);
    CData/*3:0*/ top__DOT__MemRead;
    CData/*3:0*/ top__DOT__MemWrite;
    CData/*0:0*/ top__DOT__PCSrc;
    CData/*1:0*/ top__DOT__MemToReg;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*3:0*/ top__DOT__ALUOp;
    CData/*1:0*/ top__DOT__ALUSrc;
    CData/*0:0*/ top__DOT__ALUOp2;
    CData/*0:0*/ top__DOT__RbSelect;
    CData/*0:0*/ top__DOT__MemSignExtend;
    CData/*1:0*/ top__DOT__branch_flag;
    CData/*0:0*/ top__DOT__jump_flag;
    CData/*0:0*/ top__DOT__double_jump_flag;
    CData/*6:0*/ top__DOT__datapath__DOT__PC;
    CData/*1:0*/ top__DOT__datapath__DOT__ForwardingA;
    CData/*1:0*/ top__DOT__datapath__DOT__ForwardingB;
    CData/*0:0*/ top__DOT__datapath__DOT__stall_flag;
    CData/*0:0*/ top__DOT__datapath__DOT__PCenable;
    CData/*0:0*/ top__DOT__datapath__DOT__IfIdEN;
    CData/*0:0*/ top__DOT__datapath__DOT__flush;
    CData/*0:0*/ top__DOT__datapath__DOT__zero_flag;
    CData/*0:0*/ top__DOT__datapath__DOT__branch_src;
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ top__DOT__datapath__DOT__instmem_data;
    IData/*31:0*/ top__DOT__datapath__DOT__datamem_data;
    IData/*31:0*/ top__DOT__datapath__DOT__datamem_write_data;
    IData/*31:0*/ top__DOT__datapath__DOT__RF_WriteData;
    IData/*31:0*/ top__DOT__datapath__DOT__alu1in_a;
    IData/*31:0*/ top__DOT__datapath__DOT__alu1in_b;
    IData/*31:0*/ top__DOT__datapath__DOT__Alu1out;
    IData/*31:0*/ top__DOT__datapath__DOT__Alu2out;
    QData/*38:0*/ top__DOT__datapath__DOT__IfId;
    VlWide<7>/*196:0*/ top__DOT__datapath__DOT__IdEx;
    VlWide<5>/*143:0*/ top__DOT__datapath__DOT__ExMem;
    VlWide<3>/*78:0*/ top__DOT__datapath__DOT__MemWb;
    VlUnpacked<CData/*7:0*/, 128> top__DOT__datapath__DOT__instmem;
    VlUnpacked<CData/*7:0*/, 128> top__DOT__datapath__DOT__datamem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__datapath__DOT__RF;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
