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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid;
        CData/*0:0*/ top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid;
        CData/*0:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge;
        CData/*0:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge;
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
        CData/*0:0*/ top__DOT__dcache_rw;
        CData/*0:0*/ top__DOT__transfer_in_progress;
        CData/*1:0*/ top__DOT__datapath__DOT__ForwardingA;
        CData/*1:0*/ top__DOT__datapath__DOT__ForwardingB;
        CData/*0:0*/ top__DOT__datapath__DOT__stall_flag;
        CData/*0:0*/ top__DOT__datapath__DOT__PCenable;
        CData/*0:0*/ top__DOT__datapath__DOT__IfIdEN;
        CData/*0:0*/ top__DOT__datapath__DOT__flush;
        CData/*0:0*/ top__DOT__datapath__DOT__zero_flag;
        CData/*0:0*/ top__DOT__datapath__DOT__branch_src;
        CData/*0:0*/ top__DOT__memory__DOT__mem_ready_icache;
        CData/*1:0*/ top__DOT__memory__DOT__icache_controller__DOT__nstate;
        CData/*1:0*/ top__DOT__memory__DOT__icache_controller__DOT__cstate;
        CData/*0:0*/ top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read;
        CData/*3:0*/ top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read;
        CData/*0:0*/ top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write;
        CData/*3:0*/ top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write;
        CData/*0:0*/ top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we;
        CData/*0:0*/ top__DOT__memory__DOT__icache_controller__DOT__icache_sram_we;
        CData/*0:0*/ top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready;
        CData/*0:0*/ top__DOT__memory__DOT__icache_controller__DOT__synchronized_reset;
        CData/*2:0*/ top__DOT__memory__DOT__dcache_controller__DOT__nstate;
        CData/*2:0*/ top__DOT__memory__DOT__dcache_controller__DOT__cstate;
        CData/*0:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read;
        CData/*0:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read;
        CData/*2:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read;
        CData/*0:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write;
        CData/*0:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write;
        CData/*2:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write;
        CData/*0:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we;
        CData/*0:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we;
        CData/*0:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready;
        CData/*0:0*/ top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw;
        CData/*0:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy;
        CData/*0:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy;
        CData/*0:0*/ top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_write_enable;
        CData/*0:0*/ top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_read_enable;
        CData/*0:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__we;
        CData/*0:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__re;
        CData/*2:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count;
        CData/*1:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count;
        CData/*0:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we;
        CData/*0:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__re;
        CData/*2:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count;
    };
    struct {
        CData/*1:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count;
        CData/*2:0*/ __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count;
        CData/*2:0*/ __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count;
        CData/*0:0*/ __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy;
        CData/*0:0*/ __VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge;
        CData/*0:0*/ __VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid;
        CData/*0:0*/ __VinpClk__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid;
        CData/*0:0*/ __VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge;
        CData/*0:0*/ __Vclklast__TOP__clock;
        CData/*0:0*/ __Vclklast__TOP__reset;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge;
        CData/*0:0*/ __Vchglast__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid;
        CData/*0:0*/ __Vchglast__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid;
        CData/*0:0*/ __Vchglast__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge;
        CData/*0:0*/ __Vchglast__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge;
        SData/*11:0*/ top__DOT__dcache_address;
        SData/*11:0*/ top__DOT__datapath__DOT__PC;
        SData/*11:0*/ top__DOT__datapath__DOT__datamem;
        SData/*11:0*/ top__DOT__datapath__DOT__datamem_address;
        SData/*11:0*/ top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address;
        SData/*11:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem;
        SData/*11:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset;
        SData/*11:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem;
        SData/*11:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset;
        IData/*31:0*/ top__DOT__dcache_writeData;
        IData/*31:0*/ top__DOT__datapath__DOT__datamem_data;
        IData/*31:0*/ top__DOT__datapath__DOT__RF_WriteData;
        IData/*31:0*/ top__DOT__datapath__DOT__alu1in_a;
        IData/*31:0*/ top__DOT__datapath__DOT__alu1in_b;
        IData/*31:0*/ top__DOT__datapath__DOT__Alu1out;
        IData/*31:0*/ top__DOT__datapath__DOT__Alu2out;
        IData/*31:0*/ top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu;
        IData/*31:0*/ top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp;
        IData/*31:0*/ top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_to_mem;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__data__en0;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out0;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en0;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out1;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en1;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out2;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en2;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out3;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en3;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_to_mem;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__data__en0;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out0;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en0;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out1;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en1;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out2;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en2;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out3;
        IData/*31:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en3;
        QData/*43:0*/ top__DOT__datapath__DOT__IfId;
        VlWide<7>/*201:0*/ top__DOT__datapath__DOT__IdEx;
        VlWide<5>/*148:0*/ top__DOT__datapath__DOT__ExMem;
        VlWide<3>/*83:0*/ top__DOT__datapath__DOT__MemWb;
    };
    struct {
        QData/*34:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line;
        QData/*38:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line;
        QData/*34:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line;
        QData/*38:0*/ top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__datapath__DOT__RF;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__icache_instructionBlock;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dcache_readBlock;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dcache_wbBlock;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__icache_controller__DOT__mem_request_data;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write;
        VlUnpacked<CData/*0:0*/, 8> top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid;
        VlUnpacked<CData/*3:0*/, 8> top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 8> top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write;
        VlUnpacked<CData/*0:0*/, 16> top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid;
        VlUnpacked<CData/*0:0*/, 16> top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty;
        VlUnpacked<CData/*2:0*/, 16> top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 16> top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem;
        VlUnpacked<CData/*7:0*/, 4096> top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem;
        VlUnpacked<CData/*7:0*/, 4096> top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };

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
