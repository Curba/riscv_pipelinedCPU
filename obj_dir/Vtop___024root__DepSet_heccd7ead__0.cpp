// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*3:0*/, 256> Vtop__ConstPool__TABLE_h982b258a_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vtop__ConstPool__TABLE_hd0b6dbb9_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_h593624de_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_he9f7fa8c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hdc11e6d5_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_he34ca08d_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h048376a4_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h40f1881e_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_h77b4894b_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vtop__ConstPool__TABLE_h6d2fcffb_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h46169594_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hbaa8b761_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    VlWide<7>/*201:0*/ __Vdly__top__DOT__datapath__DOT__IdEx;
    VlWide<5>/*148:0*/ __Vdly__top__DOT__datapath__DOT__ExMem;
    VlWide<3>/*83:0*/ __Vdly__top__DOT__datapath__DOT__MemWb;
    SData/*11:0*/ __Vdly__top__DOT__datapath__DOT__PC;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag__v0;
    CData/*3:0*/ __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag__v0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid__v0;
    CData/*0:0*/ __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid__v0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v1;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v2;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v2;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v3;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v3;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v4;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v4;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v5;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v6;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v7;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag__v0;
    CData/*2:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag__v0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid__v0;
    CData/*0:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid__v0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty__v0;
    CData/*0:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty__v0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v1;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v2;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v2;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v3;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v3;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v4;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v4;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v5;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v6;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v7;
    CData/*1:0*/ __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem__v0;
    QData/*34:0*/ __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line;
    QData/*38:0*/ __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v1;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v2;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v3;
    CData/*1:0*/ __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem__v0;
    QData/*34:0*/ __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v1;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v2;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v3;
    // Body
    __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line;
    __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty__v0 = 0U;
    __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count;
    __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count;
    __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line;
    vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count;
    vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count;
    __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid__v0 = 0U;
    __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag__v0 = 0U;
    __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line;
    __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v0 = 0U;
    __Vdly__top__DOT__datapath__DOT__MemWb[0U] = vlSelf->top__DOT__datapath__DOT__MemWb[0U];
    __Vdly__top__DOT__datapath__DOT__MemWb[1U] = vlSelf->top__DOT__datapath__DOT__MemWb[1U];
    __Vdly__top__DOT__datapath__DOT__MemWb[2U] = vlSelf->top__DOT__datapath__DOT__MemWb[2U];
    __Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid__v0 = 0U;
    __Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag__v0 = 0U;
    __Vdly__top__DOT__datapath__DOT__IdEx[0U] = vlSelf->top__DOT__datapath__DOT__IdEx[0U];
    __Vdly__top__DOT__datapath__DOT__IdEx[1U] = vlSelf->top__DOT__datapath__DOT__IdEx[1U];
    __Vdly__top__DOT__datapath__DOT__IdEx[2U] = vlSelf->top__DOT__datapath__DOT__IdEx[2U];
    __Vdly__top__DOT__datapath__DOT__IdEx[3U] = vlSelf->top__DOT__datapath__DOT__IdEx[3U];
    __Vdly__top__DOT__datapath__DOT__IdEx[4U] = vlSelf->top__DOT__datapath__DOT__IdEx[4U];
    __Vdly__top__DOT__datapath__DOT__IdEx[5U] = vlSelf->top__DOT__datapath__DOT__IdEx[5U];
    __Vdly__top__DOT__datapath__DOT__IdEx[6U] = vlSelf->top__DOT__datapath__DOT__IdEx[6U];
    __Vdly__top__DOT__datapath__DOT__ExMem[0U] = vlSelf->top__DOT__datapath__DOT__ExMem[0U];
    __Vdly__top__DOT__datapath__DOT__ExMem[1U] = vlSelf->top__DOT__datapath__DOT__ExMem[1U];
    __Vdly__top__DOT__datapath__DOT__ExMem[2U] = vlSelf->top__DOT__datapath__DOT__ExMem[2U];
    __Vdly__top__DOT__datapath__DOT__ExMem[3U] = vlSelf->top__DOT__datapath__DOT__ExMem[3U];
    __Vdly__top__DOT__datapath__DOT__ExMem[4U] = vlSelf->top__DOT__datapath__DOT__ExMem[4U];
    __Vdly__top__DOT__datapath__DOT__PC = vlSelf->top__DOT__datapath__DOT__PC;
    __Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v0 = 0U;
    __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem__v0 = 0U;
    __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem__v0 = 0U;
    vlSelf->top__DOT__dcache_writeData = (((0U != (0x1fU 
                                                   & vlSelf->top__DOT__datapath__DOT__MemWb[0U])) 
                                           & ((0x1fU 
                                               & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                     >> 0x17U))))
                                           ? ((vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                               << 0x1bU) 
                                              | (vlSelf->top__DOT__datapath__DOT__MemWb[0U] 
                                                 >> 5U))
                                           : ((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                               << 4U) 
                                              | (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                                 >> 0x1cU)));
    __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v0 = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__synchronized_reset 
        = vlSelf->reset;
    __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
        = ((1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__re))))
            ? 0ULL : ((0x7fffffffeULL & (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                                         << 1U)) | (QData)((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__re))));
    if (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we) {
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty__v0 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write;
        __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty__v0 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
    }
    __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count 
        = ((1U & ((IData)(vlSelf->reset) | ((~ (IData)(
                                                       (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                                                        >> 5U))) 
                                            & (~ (IData)(
                                                         (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                          >> 6U))))))
            ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count))));
    __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count 
        = ((1U & ((IData)(vlSelf->reset) | ((~ (IData)(
                                                       (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                                                        >> 5U))) 
                                            & (~ (IData)(
                                                         (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                          >> 6U))))))
            ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count))));
    __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
        = ((1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__re))))
            ? 0ULL : ((0x7fffffffeULL & (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                                         << 1U)) | (QData)((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__re))));
    if ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                       >> 6U)))) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_to_mem 
            = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem
            [vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count];
    }
    if ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                       >> 6U)))) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_to_mem 
            = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem
            [vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count];
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem = 0U;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate = 1U;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate = 1U;
    } else {
        if ((((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_read_enable) 
              & (~ (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we))) 
             | (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_write_enable))) {
            vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem 
                = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address;
        }
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate;
    }
    if ((1U & ((IData)(vlSelf->reset) | ((~ (IData)(
                                                    (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                                                     >> 5U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                       >> 6U))))))) {
        vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count))) {
        vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count)));
    }
    if ((1U & ((IData)(vlSelf->reset) | ((~ (IData)(
                                                    (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                                                     >> 5U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                       >> 6U))))))) {
        vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count))) {
        vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count)));
    }
    if (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we) {
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid__v0 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write;
        __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid__v0 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag__v0 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write;
        __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag__v0 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
    }
    __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
        = ((1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__we))))
            ? 0ULL : ((0x7ffffffffeULL & (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                          << 1U)) | (QData)((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__we))));
    if ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                       >> 6U)))) {
        __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v0 
            = (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin 
               >> 0x18U);
        __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v0 
            = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset;
        __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v1 
            = (0xffU & (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin 
                        >> 0x10U));
        __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v1 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset)));
        __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v2 
            = (0xffU & (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin 
                        >> 8U));
        __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v2 
            = (0xfffU & ((IData)(2U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset)));
        __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v3 
            = (0xffU & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin);
        __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v3 
            = (0xfffU & ((IData)(3U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset)));
    }
    if ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                       >> 6U)))) {
        __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v0 
            = (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin 
               >> 0x18U);
        __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v0 
            = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset;
        __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v1 
            = (0xffU & (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin 
                        >> 0x10U));
        __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v1 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset)));
        __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v2 
            = (0xffU & (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin 
                        >> 8U));
        __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v2 
            = (0xfffU & ((IData)(2U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset)));
        __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v3 
            = (0xffU & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin);
        __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v3 
            = (0xfffU & ((IData)(3U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset)));
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
        = ((1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we))))
            ? 0ULL : ((0x7ffffffffeULL & (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                          << 1U)) | (QData)((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we))));
    if (vlSelf->top__DOT__datapath__DOT__stall_flag) {
        __Vdly__top__DOT__datapath__DOT__MemWb[0U] 
            = ((0xffffffe0U & __Vdly__top__DOT__datapath__DOT__MemWb[0U]) 
               | (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]));
        __Vdly__top__DOT__datapath__DOT__MemWb[2U] 
            = ((0xfff7fU & __Vdly__top__DOT__datapath__DOT__MemWb[2U]) 
               | (0x80U & vlSelf->top__DOT__datapath__DOT__MemWb[2U]));
    } else {
        __Vdly__top__DOT__datapath__DOT__MemWb[2U] 
            = ((0x1fU & __Vdly__top__DOT__datapath__DOT__MemWb[2U]) 
               | (0xfffe0U & ((0xfff00U & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                           >> 1U)) 
                              | ((0x80U & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                           >> 0x18U)) 
                                 | (0x60U & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                             >> 0x17U))))));
        __Vdly__top__DOT__datapath__DOT__MemWb[0U] 
            = (((IData)((((QData)((IData)(vlSelf->top__DOT__datapath__DOT__datamem_data)) 
                          << 0x20U) | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu2out)))) 
                << 5U) | (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                   >> 0x17U)));
        __Vdly__top__DOT__datapath__DOT__MemWb[1U] 
            = (((IData)((((QData)((IData)(vlSelf->top__DOT__datapath__DOT__datamem_data)) 
                          << 0x20U) | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu2out)))) 
                >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelf->top__DOT__datapath__DOT__datamem_data)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu2out))) 
                                      >> 0x20U)) << 5U));
        __Vdly__top__DOT__datapath__DOT__MemWb[2U] 
            = ((0xfffe0U & __Vdly__top__DOT__datapath__DOT__MemWb[2U]) 
               | (0xfffffU & ((IData)(((((QData)((IData)(vlSelf->top__DOT__datapath__DOT__datamem_data)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu2out))) 
                                       >> 0x20U)) >> 0x1bU)));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem = 0U;
    } else if (((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy) 
                & (~ (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__we)))) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem 
            = vlSelf->top__DOT__datapath__DOT__PC;
    }
    if (vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we) {
        __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid__v0 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write;
        __Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid__v0 
            = (7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                     >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag__v0 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write;
        __Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag__v0 
            = (7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                     >> 5U));
    }
    if (vlSelf->top__DOT__datapath__DOT__stall_flag) {
        __Vdly__top__DOT__datapath__DOT__IdEx[5U] = 
            (0xf80000ffU & __Vdly__top__DOT__datapath__DOT__IdEx[5U]);
        __Vdly__top__DOT__datapath__DOT__IdEx[0U] = 
            (0xfffcffffU & __Vdly__top__DOT__datapath__DOT__IdEx[0U]);
        __Vdly__top__DOT__datapath__DOT__IdEx[0U] = 
            (0xfffffffcU & __Vdly__top__DOT__datapath__DOT__IdEx[0U]);
        __Vdly__top__DOT__datapath__DOT__IdEx[6U] = 
            ((0x1fU & __Vdly__top__DOT__datapath__DOT__IdEx[6U]) 
             | (0x3e0U & vlSelf->top__DOT__datapath__DOT__IdEx[6U]));
        __Vdly__top__DOT__datapath__DOT__ExMem[3U] 
            = ((0x7fffffffU & __Vdly__top__DOT__datapath__DOT__ExMem[3U]) 
               | (0x80000000U & vlSelf->top__DOT__datapath__DOT__ExMem[3U]));
        __Vdly__top__DOT__datapath__DOT__ExMem[0U] 
            = ((0xf07fffffU & __Vdly__top__DOT__datapath__DOT__ExMem[0U]) 
               | (0xf800000U & vlSelf->top__DOT__datapath__DOT__ExMem[0U]));
        __Vdly__top__DOT__datapath__DOT__ExMem[0U] 
            = ((0xfffe7fffU & __Vdly__top__DOT__datapath__DOT__ExMem[0U]) 
               | (0x18000U & vlSelf->top__DOT__datapath__DOT__ExMem[0U]));
    } else {
        __Vdly__top__DOT__datapath__DOT__IdEx[5U] = 
            ((0xf807ffffU & __Vdly__top__DOT__datapath__DOT__IdEx[5U]) 
             | (0xfff80000U & (((IData)(vlSelf->top__DOT__ALUSrc) 
                                << 0x19U) | (((IData)(vlSelf->top__DOT__ALUOp) 
                                              << 0x15U) 
                                             | (((IData)(vlSelf->top__DOT__ALUOp2) 
                                                 << 0x14U) 
                                                | ((IData)(vlSelf->top__DOT__MemSignExtend) 
                                                   << 0x13U))))));
        __Vdly__top__DOT__datapath__DOT__IdEx[5U] = 
            ((0xfff800ffU & __Vdly__top__DOT__datapath__DOT__IdEx[5U]) 
             | (0xffffff00U & (((IData)(vlSelf->top__DOT__MemToReg) 
                                << 0x11U) | (((IData)(vlSelf->top__DOT__MemRead) 
                                              << 0xdU) 
                                             | (((IData)(vlSelf->top__DOT__MemWrite) 
                                                 << 9U) 
                                                | ((IData)(vlSelf->top__DOT__RegWrite) 
                                                   << 8U))))));
        __Vdly__top__DOT__datapath__DOT__IdEx[4U] = 
            ((0xfffffffU & __Vdly__top__DOT__datapath__DOT__IdEx[4U]) 
             | ((IData)(vlSelf->top__DOT__datapath__DOT__IfId) 
                << 0x1cU));
        __Vdly__top__DOT__datapath__DOT__IdEx[5U] = 
            ((0xffffff00U & __Vdly__top__DOT__datapath__DOT__IdEx[5U]) 
             | (0xffU & ((IData)(vlSelf->top__DOT__datapath__DOT__IfId) 
                         >> 4U)));
        __Vdly__top__DOT__datapath__DOT__IdEx[0U] = 
            ((0xfffc0003U & __Vdly__top__DOT__datapath__DOT__IdEx[0U]) 
             | (0xfffffffcU & (((IData)(vlSelf->top__DOT__branch_flag) 
                                << 0x10U) | (0xfffcU 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__datapath__DOT__IfId 
                                                         >> 0x14U)) 
                                                << 2U)))));
        __Vdly__top__DOT__datapath__DOT__IdEx[1U] = 
            ((0xfffffffU & __Vdly__top__DOT__datapath__DOT__IdEx[1U]) 
             | (vlSelf->top__DOT__datapath__DOT__RF
                [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                   >> 0x18U)))] << 0x1cU));
        __Vdly__top__DOT__datapath__DOT__IdEx[2U] = 
            ((vlSelf->top__DOT__datapath__DOT__RF[(0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__datapath__DOT__IfId 
                                                              >> 0x18U)))] 
              >> 4U) | ((IData)((((QData)((IData)(vlSelf->top__DOT__datapath__DOT__RF
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__datapath__DOT__IfId 
                                                              >> 0x22U)))])) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((IData)(vlSelf->top__DOT__RbSelect)
                                                                ? 
                                                               vlSelf->top__DOT__datapath__DOT__RF
                                                               [
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                           >> 0x27U)))]
                                                                : 
                                                               vlSelf->top__DOT__datapath__DOT__RF
                                                               [
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                           >> 0x1dU)))]))))) 
                        << 0x1cU));
        __Vdly__top__DOT__datapath__DOT__IdEx[3U] = 
            (((IData)((((QData)((IData)(vlSelf->top__DOT__datapath__DOT__RF
                                        [(0x1fU & (IData)(
                                                          (vlSelf->top__DOT__datapath__DOT__IfId 
                                                           >> 0x22U)))])) 
                        << 0x20U) | (QData)((IData)(
                                                    ((IData)(vlSelf->top__DOT__RbSelect)
                                                      ? 
                                                     vlSelf->top__DOT__datapath__DOT__RF
                                                     [
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                 >> 0x27U)))]
                                                      : 
                                                     vlSelf->top__DOT__datapath__DOT__RF
                                                     [
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                 >> 0x1dU)))]))))) 
              >> 4U) | ((IData)(((((QData)((IData)(
                                                   vlSelf->top__DOT__datapath__DOT__RF
                                                   [
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__datapath__DOT__IfId 
                                                               >> 0x22U)))])) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(vlSelf->top__DOT__RbSelect)
                                                                 ? 
                                                                vlSelf->top__DOT__datapath__DOT__RF
                                                                [
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                            >> 0x27U)))]
                                                                 : 
                                                                vlSelf->top__DOT__datapath__DOT__RF
                                                                [
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                            >> 0x1dU)))])))) 
                                 >> 0x20U)) << 0x1cU));
        __Vdly__top__DOT__datapath__DOT__IdEx[4U] = 
            ((0xf0000000U & __Vdly__top__DOT__datapath__DOT__IdEx[4U]) 
             | ((IData)(((((QData)((IData)(vlSelf->top__DOT__datapath__DOT__RF
                                           [(0x1fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__datapath__DOT__IfId 
                                                        >> 0x22U)))])) 
                           << 0x20U) | (QData)((IData)(
                                                       ((IData)(vlSelf->top__DOT__RbSelect)
                                                         ? 
                                                        vlSelf->top__DOT__datapath__DOT__RF
                                                        [
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                    >> 0x27U)))]
                                                         : 
                                                        vlSelf->top__DOT__datapath__DOT__RF
                                                        [
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                    >> 0x1dU)))])))) 
                         >> 0x20U)) >> 4U));
        __Vdly__top__DOT__datapath__DOT__IdEx[0U] = 
            ((0xf003ffffU & __Vdly__top__DOT__datapath__DOT__IdEx[0U]) 
             | (0xfffc0000U & ((0xf800000U & ((IData)(
                                                      (vlSelf->top__DOT__datapath__DOT__IfId 
                                                       >> 0x27U)) 
                                              << 0x17U)) 
                               | (0x7c0000U & ((IData)(
                                                       (vlSelf->top__DOT__datapath__DOT__IfId 
                                                        >> 0x18U)) 
                                               << 0x12U)))));
        __Vdly__top__DOT__datapath__DOT__IdEx[0U] = 
            ((0xfffffffU & __Vdly__top__DOT__datapath__DOT__IdEx[0U]) 
             | ((IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                         >> 0x14U)) << 0x1cU));
        __Vdly__top__DOT__datapath__DOT__IdEx[1U] = 
            ((0xf0000000U & __Vdly__top__DOT__datapath__DOT__IdEx[1U]) 
             | (0xfffffffU & ((0xffffc00U & ((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                    >> 0x21U))))) 
                                             << 0xaU)) 
                              | (0x3ffU & ((IData)(
                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                    >> 0x14U)) 
                                           >> 4U)))));
        __Vdly__top__DOT__datapath__DOT__IdEx[6U] = 
            ((0x1fU & __Vdly__top__DOT__datapath__DOT__IdEx[6U]) 
             | (0x3e0U & ((IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                   >> 0x22U)) << 5U)));
        __Vdly__top__DOT__datapath__DOT__IdEx[5U] = 
            ((0x7ffffffU & __Vdly__top__DOT__datapath__DOT__IdEx[5U]) 
             | ((IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                         >> 0x18U)) << 0x1bU));
        __Vdly__top__DOT__datapath__DOT__IdEx[6U] = 
            ((0x3e0U & __Vdly__top__DOT__datapath__DOT__IdEx[6U]) 
             | (0x1fU & ((IData)(vlSelf->top__DOT__RbSelect)
                          ? (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                     >> 0x27U)) : (IData)(
                                                          (vlSelf->top__DOT__datapath__DOT__IfId 
                                                           >> 0x1dU)))));
        __Vdly__top__DOT__datapath__DOT__IdEx[0U] = 
            ((0xfffffffcU & __Vdly__top__DOT__datapath__DOT__IdEx[0U]) 
             | (((IData)(vlSelf->top__DOT__RbSelect) 
                 << 1U) | (IData)(vlSelf->top__DOT__double_jump_flag)));
        __Vdly__top__DOT__datapath__DOT__ExMem[4U] 
            = ((0x1ffU & __Vdly__top__DOT__datapath__DOT__ExMem[4U]) 
               | (0x1ffe00U & ((vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                << 0xdU) | (0x1e00U 
                                            & (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                               >> 0x13U)))));
        __Vdly__top__DOT__datapath__DOT__ExMem[3U] 
            = ((0x7fffffffU & __Vdly__top__DOT__datapath__DOT__ExMem[3U]) 
               | (0x80000000U & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                 << 0x17U)));
        __Vdly__top__DOT__datapath__DOT__ExMem[4U] 
            = ((0x1ffe00U & __Vdly__top__DOT__datapath__DOT__ExMem[4U]) 
               | (0x1fffffU & ((0x1feU & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                          >> 8U)) | 
                               (1U & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                      >> 0x13U)))));
        __Vdly__top__DOT__datapath__DOT__ExMem[2U] 
            = ((0xfffffffU & __Vdly__top__DOT__datapath__DOT__ExMem[2U]) 
               | ((IData)((((QData)((IData)((1U & (
                                                   vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                   >> 0x14U)))) 
                            << 0x22U) | (((QData)((IData)(
                                                          (3U 
                                                           & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                              >> 0x11U)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu1out))))) 
                  << 0x1cU));
        __Vdly__top__DOT__datapath__DOT__ExMem[3U] 
            = ((0x80000000U & __Vdly__top__DOT__datapath__DOT__ExMem[3U]) 
               | (((IData)((((QData)((IData)((1U & 
                                              (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                               >> 0x14U)))) 
                             << 0x22U) | (((QData)((IData)(
                                                           (3U 
                                                            & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                               >> 0x11U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu1out))))) 
                   >> 4U) | ((IData)(((((QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                            >> 0x14U)))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                             >> 0x11U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu1out)))) 
                                      >> 0x20U)) << 0x1cU)));
        __Vdly__top__DOT__datapath__DOT__ExMem[0U] 
            = ((0x3ffffU & __Vdly__top__DOT__datapath__DOT__ExMem[0U]) 
               | (((IData)((((QData)((IData)(vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                             << 0x24U) | (((QData)((IData)(
                                                           vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                           << 4U) | 
                                          ((QData)((IData)(
                                                           vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                           >> 0x1cU)))) 
                   << 0x1cU) | ((0xf800000U & vlSelf->top__DOT__datapath__DOT__IdEx[0U]) 
                                | (0x7c0000U & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                >> 9U)))));
        __Vdly__top__DOT__datapath__DOT__ExMem[1U] 
            = ((0x3ffffU & ((IData)((((QData)((IData)(
                                                      vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                                      >> 0x1cU)))) 
                            >> 4U)) | ((0xffc0000U 
                                        & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                                          >> 0x1cU)))) 
                                           >> 4U)) 
                                       | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                                          >> 0x1cU))) 
                                                   >> 0x20U)) 
                                          << 0x1cU)));
        __Vdly__top__DOT__datapath__DOT__ExMem[2U] 
            = ((0xf0000000U & __Vdly__top__DOT__datapath__DOT__ExMem[2U]) 
               | ((0x3ffffU & ((IData)(((((QData)((IData)(
                                                          vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                               >> 0x1cU))) 
                                        >> 0x20U)) 
                               >> 4U)) | (0xffc0000U 
                                          & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                                                        << 0x24U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                                           << 4U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                                             >> 0x1cU))) 
                                                      >> 0x20U)) 
                                             >> 4U))));
        __Vdly__top__DOT__datapath__DOT__ExMem[0U] 
            = ((0xfffc0000U & __Vdly__top__DOT__datapath__DOT__ExMem[0U]) 
               | (((IData)(vlSelf->top__DOT__datapath__DOT__zero_flag) 
                   << 0x11U) | ((0x1fffeU & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                             >> 1U)) 
                                | (1U & vlSelf->top__DOT__datapath__DOT__IdEx[0U]))));
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__datapath__DOT__PC = 0U;
    } else if (vlSelf->top__DOT__datapath__DOT__PCenable) {
        __Vdly__top__DOT__datapath__DOT__PC = (0xfffU 
                                               & ((IData)(vlSelf->top__DOT__datapath__DOT__branch_src)
                                                   ? 
                                                  ((vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                      >> 1U))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__PCSrc)
                                                    ? (IData)(
                                                              (vlSelf->top__DOT__datapath__DOT__IfId 
                                                               >> 0x14U))
                                                    : 
                                                   ((((1U 
                                                       == 
                                                       ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                         << 4U) 
                                                        | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                           >> 0x1cU))) 
                                                      & vlSelf->top__DOT__datapath__DOT__ExMem[0U])
                                                      ? 1U
                                                      : 0U)
                                                     ? 
                                                    ((IData)(0xcU) 
                                                     + (IData)(vlSelf->top__DOT__datapath__DOT__PC))
                                                     : 
                                                    ((IData)(4U) 
                                                     + (IData)(vlSelf->top__DOT__datapath__DOT__PC))))));
    }
    if (vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_we) {
        __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v0 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write
            [7U];
        __Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v0 
            = (7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                     >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v1 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write
            [6U];
        __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v1 
            = (7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                     >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v2 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write
            [5U];
        __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v2 
            = (7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                     >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v3 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write
            [4U];
        __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v3 
            = (7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                     >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v4 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write
            [3U];
        __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v4 
            = (7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                     >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v5 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write
            [2U];
        __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v5 
            = (7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                     >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v6 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write
            [1U];
        __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v6 
            = (7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                     >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v7 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write
            [0U];
        __Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v7 
            = (7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                     >> 5U));
    }
    if (((IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                  >> 5U)) & ((2U == (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count)) 
                             | (0U == (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count))))) {
        __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem__v0 
            = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin;
        __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem__v0 
            = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count;
    }
    if (((IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                  >> 5U)) & ((2U == (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count)) 
                             | (0U == (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count))))) {
        __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem__v0 
            = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin;
        __Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem__v0 
            = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count;
    }
    if (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we) {
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v0 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write
            [7U];
        __Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v0 = 1U;
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v0 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v1 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write
            [6U];
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v1 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v2 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write
            [5U];
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v2 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v3 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write
            [4U];
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v3 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v4 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write
            [3U];
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v4 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v5 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write
            [2U];
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v5 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v6 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write
            [1U];
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v6 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
        __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v7 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write
            [0U];
        __Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v7 
            = (0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                       >> 5U));
    }
    if (__Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty__v0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty__v0;
    }
    if (__Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid__v0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid__v0;
    }
    if (__Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag__v0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag__v0;
    }
    if (__Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem[__Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v0;
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem[__Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v1;
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem[__Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v2] 
            = __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v2;
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem[__Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v3] 
            = __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem__v3;
    }
    if (__Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem[__Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v0;
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem[__Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v1;
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem[__Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v2] 
            = __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v2;
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem[__Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v3] 
            = __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem__v3;
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
        = __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line;
    vlSelf->top__DOT__datapath__DOT__MemWb[0U] = __Vdly__top__DOT__datapath__DOT__MemWb[0U];
    vlSelf->top__DOT__datapath__DOT__MemWb[1U] = __Vdly__top__DOT__datapath__DOT__MemWb[1U];
    vlSelf->top__DOT__datapath__DOT__MemWb[2U] = __Vdly__top__DOT__datapath__DOT__MemWb[2U];
    if (__Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid__v0) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[__Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid__v0;
    }
    if (__Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag__v0) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[__Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag__v0;
    }
    vlSelf->top__DOT__datapath__DOT__IdEx[0U] = __Vdly__top__DOT__datapath__DOT__IdEx[0U];
    vlSelf->top__DOT__datapath__DOT__IdEx[1U] = __Vdly__top__DOT__datapath__DOT__IdEx[1U];
    vlSelf->top__DOT__datapath__DOT__IdEx[2U] = __Vdly__top__DOT__datapath__DOT__IdEx[2U];
    vlSelf->top__DOT__datapath__DOT__IdEx[3U] = __Vdly__top__DOT__datapath__DOT__IdEx[3U];
    vlSelf->top__DOT__datapath__DOT__IdEx[4U] = __Vdly__top__DOT__datapath__DOT__IdEx[4U];
    vlSelf->top__DOT__datapath__DOT__IdEx[5U] = __Vdly__top__DOT__datapath__DOT__IdEx[5U];
    vlSelf->top__DOT__datapath__DOT__IdEx[6U] = __Vdly__top__DOT__datapath__DOT__IdEx[6U];
    vlSelf->top__DOT__datapath__DOT__ExMem[0U] = __Vdly__top__DOT__datapath__DOT__ExMem[0U];
    vlSelf->top__DOT__datapath__DOT__ExMem[1U] = __Vdly__top__DOT__datapath__DOT__ExMem[1U];
    vlSelf->top__DOT__datapath__DOT__ExMem[2U] = __Vdly__top__DOT__datapath__DOT__ExMem[2U];
    vlSelf->top__DOT__datapath__DOT__ExMem[3U] = __Vdly__top__DOT__datapath__DOT__ExMem[3U];
    vlSelf->top__DOT__datapath__DOT__ExMem[4U] = __Vdly__top__DOT__datapath__DOT__ExMem[4U];
    if (__Vdlyvset__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v0) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[__Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v0][7U] 
            = __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v0;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[__Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v1][6U] 
            = __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v1;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[__Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v2][5U] 
            = __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v2;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[__Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v3][4U] 
            = __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v3;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[__Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v4][3U] 
            = __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v4;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[__Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v5][2U] 
            = __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v5;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[__Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v6][1U] 
            = __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v6;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[__Vdlyvdim0__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v7][0U] 
            = __Vdlyvval__top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram__v7;
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count 
        = __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
        = __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line;
    if (__Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem__v0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[__Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem__v0;
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count 
        = __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
        = __Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line;
    if (__Vdlyvset__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem__v0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[__Vdlyvdim0__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem__v0] 
            = __Vdlyvval__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem__v0;
    }
    if (__Vdlyvset__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v0][7U] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v0;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v1][6U] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v1;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v2][5U] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v2;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v3][4U] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v3;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v4][3U] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v4;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v5][2U] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v5;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v6][1U] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v6;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[__Vdlyvdim0__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v7][0U] 
            = __Vdlyvval__top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram__v7;
    }
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en0 
        = (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                           >> 6U))) ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                      >> 6U)))
                                        ? 0U : 0xffU)
             : 0xffU) << 0x18U);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en1 
        = (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                           >> 6U))) ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                      >> 6U)))
                                        ? 0U : 0xffU)
             : 0xffU) << 0x10U);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en2 
        = (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                           >> 6U))) ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                      >> 6U)))
                                        ? 0U : 0xffU)
             : 0xffU) << 8U);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en3 
        = ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                          >> 6U))) ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                     >> 6U)))
                                       ? 0U : 0xffU)
            : 0xffU);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en0 
        = (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                           >> 6U))) ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                      >> 6U)))
                                        ? 0U : 0xffU)
             : 0xffU) << 0x18U);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en1 
        = (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                           >> 6U))) ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                      >> 6U)))
                                        ? 0U : 0xffU)
             : 0xffU) << 0x10U);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en2 
        = (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                           >> 6U))) ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                      >> 6U)))
                                        ? 0U : 0xffU)
             : 0xffU) << 8U);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en3 
        = ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                          >> 6U))) ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                     >> 6U)))
                                       ? 0U : 0xffU)
            : 0xffU);
    vlSelf->top__DOT__datapath__DOT__RF_WriteData = 
        ((0U == (3U & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                       >> 5U))) ? ((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                    << 0x1bU) | (vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                                 >> 5U))
          : ((1U == (3U & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                           >> 5U))) ? ((vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                        << 0x1bU) | 
                                       (vlSelf->top__DOT__datapath__DOT__MemWb[0U] 
                                        >> 5U)) : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                                        >> 5U)))
                                                    ? 
                                                   (0xfffU 
                                                    & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                                       >> 8U))
                                                    : 
                                                   ((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                                     << 0x1bU) 
                                                    | (vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                                       >> 5U)))));
    vlSelf->top__DOT__datapath__DOT__datamem_address 
        = (0xfffU & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                      << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                >> 0x1cU)));
    vlSelf->top__DOT__datapath__DOT__branch_src = (
                                                   (1U 
                                                    & (((IData)(
                                                                (0x10000U 
                                                                 == 
                                                                 (0x38000U 
                                                                  & vlSelf->top__DOT__datapath__DOT__ExMem[0U])))
                                                         ? 1U
                                                         : 0U) 
                                                       | ((IData)(
                                                                  (0x28000U 
                                                                   == 
                                                                   (0x38000U 
                                                                    & vlSelf->top__DOT__datapath__DOT__ExMem[0U])))
                                                           ? 1U
                                                           : 0U)))
                                                    ? 1U
                                                    : 0U);
    if (vlSelf->top__DOT__datapath__DOT__IfIdEN) {
        vlSelf->top__DOT__datapath__DOT__IfId = (((QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__datapath__DOT__flush)
                                                                    ? 0U
                                                                    : 
                                                                   vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read
                                                                   [
                                                                   (7U 
                                                                    & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                                                                       >> 2U))]))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & ((IData)(4U) 
                                                                       + (IData)(vlSelf->top__DOT__datapath__DOT__PC))))));
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[0U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem
        [0U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[1U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem
        [1U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[2U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem
        [2U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[3U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem
        [3U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[4U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem
        [4U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[5U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem
        [5U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[6U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem
        [6U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[7U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem
        [7U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[0U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem
        [0U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[1U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem
        [1U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[2U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem
        [2U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[3U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem
        [3U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[4U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem
        [4U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[5U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem
        [5U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[6U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem
        [6U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[7U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem
        [7U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[7U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))][7U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[6U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))][6U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[5U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))][5U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[4U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))][4U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[3U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))][3U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[2U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))][2U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[1U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))][1U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[0U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & ((IData)(vlSelf->top__DOT__dcache_address) 
                  >> 5U))][0U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write = 0U;
    if ((1U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
        if (((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                               >> 5U))) ? 1U : 0U) 
              & ((7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                        >> 9U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
             & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))) {
            if (vlSelf->top__DOT__dcache_rw) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write 
                    = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write = 0U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write = 1U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 0U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 1U;
            } else {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write = 0U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 0U;
            }
        } else if (((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                    >> 5U))) ? 1U : 0U)) {
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write 
                = (7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                         >> 9U));
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write = 0U;
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write 
                = vlSelf->top__DOT__dcache_rw;
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 0U;
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 1U;
        } else {
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write = 0U;
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 0U;
        }
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address 
            = vlSelf->top__DOT__dcache_address;
        if ((1U & (~ ((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                        >> 5U))) ? 1U
                         : 0U) & ((7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                                         >> 9U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
                      & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))))) {
            if (((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                 >> 5U))) ? 1U : 0U)) {
                if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read)) 
                              | (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read)))))) {
                    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address 
                        = (((IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read) 
                            << 9U) | (0x1ffU & (IData)(vlSelf->top__DOT__dcache_address)));
                }
            }
        }
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we = 0U;
        if (((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                               >> 5U))) ? 1U : 0U) 
              & ((7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                        >> 9U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
             & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))) {
            if (vlSelf->top__DOT__dcache_rw) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we = 1U;
            }
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready = 0U;
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready = 1U;
        } else {
            if (((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                 >> 5U))) ? 1U : 0U)) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we = 1U;
            }
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready = 0U;
        }
    } else {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write = 0U;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 0U;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address 
            = vlSelf->top__DOT__dcache_address;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we = 0U;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready = 0U;
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__data__en0 
        = (((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en0 
             | vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en1) 
            | vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en2) 
           | vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en3);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__data__en0 
        = (((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en0 
             | vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en1) 
            | vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en2) 
           | vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en3);
    if ((0x40000000U & vlSelf->top__DOT__datapath__DOT__ExMem[3U])) {
        if ((0x40000000U & vlSelf->top__DOT__datapath__DOT__ExMem[3U])) {
            vlSelf->top__DOT__datapath__DOT__Alu2out 
                = (((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                     << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                               >> 0x1cU)) + (((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                                 >> 7U) 
                                                & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                                               & ((0x1fU 
                                                   & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                      >> 0x17U)) 
                                                  != 
                                                  (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                   >> 0x1bU))) 
                                              & ((0x1fU 
                                                  & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                     >> 0x12U))))
                                              ? vlSelf->top__DOT__datapath__DOT__RF_WriteData
                                              : ((vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                                  << 4U) 
                                                 | (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                    >> 0x1cU))));
        }
    } else {
        vlSelf->top__DOT__datapath__DOT__Alu2out = 
            ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
              << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                        >> 0x1cU));
    }
    vlSelf->top__DOT__datapath__DOT__ForwardingB = 
        ((((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
            >> 0x1fU) & (0U != (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                         >> 0x17U)))) 
          & ((((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                         >> 0x17U)) != (0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U])) 
              & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                           >> 0x17U)) == (0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U]))) 
             | ((IData)(((0U == (0x18000U & vlSelf->top__DOT__datapath__DOT__ExMem[0U])) 
                         & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                      >> 0x17U)) == 
                            (0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U])))) 
                & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                             >> 0x17U)) == (0x1fU & 
                                            (vlSelf->top__DOT__datapath__DOT__IdEx[6U] 
                                             >> 5U))))))
          ? 2U : (((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                      >> 7U) & (0U != (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                    & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                 >> 0x17U)) != (0x1fU 
                                                & vlSelf->top__DOT__datapath__DOT__IdEx[6U]))) 
                   & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                      == (0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U])))
                   ? 1U : 0U));
    vlSelf->top__DOT__datapath__DOT__alu1in_b = ((0U 
                                                  == (IData)(vlSelf->top__DOT__datapath__DOT__ForwardingB))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                       >> 0x19U)))
                                                   ? 
                                                  ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                      >> 0x1cU))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                        >> 0x19U)))
                                                    ? 
                                                   ((vlSelf->top__DOT__datapath__DOT__IdEx[1U] 
                                                     << 4U) 
                                                    | (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                       >> 0x1cU))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                         >> 0x19U)))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                        >> 0x12U))
                                                     : 
                                                    ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                      << 4U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                        >> 0x1cU)))))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__datapath__DOT__ForwardingB))
                                                   ? vlSelf->top__DOT__datapath__DOT__RF_WriteData
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__datapath__DOT__ForwardingB))
                                                    ? 
                                                   ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                     << 4U) 
                                                    | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                       >> 0x1cU))
                                                    : 
                                                   ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                     << 4U) 
                                                    | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                       >> 0x1cU)))));
    vlSelf->top__DOT__datapath__DOT__ForwardingA = 
        ((((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
            >> 0x1fU) & (0U != (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                         >> 0x17U)))) 
          & ((((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                         >> 0x17U)) != (0x1fU & (vlSelf->top__DOT__datapath__DOT__IdEx[6U] 
                                                 >> 5U))) 
              & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                           >> 0x17U)) == (0x1fU & (
                                                   vlSelf->top__DOT__datapath__DOT__IdEx[6U] 
                                                   >> 5U)))) 
             | (IData)(((0U == (0x18000U & vlSelf->top__DOT__datapath__DOT__ExMem[0U])) 
                        & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                     >> 0x17U)) == 
                           (0x1fU & (vlSelf->top__DOT__datapath__DOT__IdEx[6U] 
                                     >> 5U))))))) ? 2U
          : (((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                 >> 7U) & (0U != (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
               & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                            >> 0x17U)) != (0x1fU & 
                                           (vlSelf->top__DOT__datapath__DOT__IdEx[6U] 
                                            >> 5U)))) 
              & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                 == (0x1fU & (vlSelf->top__DOT__datapath__DOT__IdEx[6U] 
                              >> 5U)))) ? 1U : 0U));
    vlSelf->top__DOT__datapath__DOT__alu1in_a = ((0U 
                                                  == (IData)(vlSelf->top__DOT__datapath__DOT__ForwardingA))
                                                  ? 
                                                 ((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                   << 4U) 
                                                  | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                     >> 0x1cU))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__datapath__DOT__ForwardingA))
                                                   ? vlSelf->top__DOT__datapath__DOT__RF_WriteData
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__datapath__DOT__ForwardingA))
                                                    ? 
                                                   ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                     << 4U) 
                                                    | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                       >> 0x1cU))
                                                    : 
                                                   ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                     << 4U) 
                                                    | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                       >> 0x1cU)))));
    vlSelf->top__DOT__datapath__DOT__PC = __Vdly__top__DOT__datapath__DOT__PC;
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[7U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem
        [7U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[6U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem
        [6U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[5U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem
        [5U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[4U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem
        [4U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[3U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem
        [3U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[2U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem
        [2U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[1U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem
        [1U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[0U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem
        [0U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[7U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem
        [7U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[6U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem
        [6U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[5U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem
        [5U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[4U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem
        [4U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[3U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem
        [3U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[2U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem
        [2U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[1U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem
        [1U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[0U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem
        [0U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[7U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read
        [7U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[6U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read
        [6U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[5U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read
        [5U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[4U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read
        [4U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[3U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read
        [3U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[2U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read
        [2U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[1U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read
        [1U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[0U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read
        [0U];
    vlSelf->top__DOT__datapath__DOT__Alu1out = ((0x1000000U 
                                                 & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                 ? 
                                                ((0x800000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                  ? 
                                                 (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                  + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                   ? 
                                                  (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                   + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                   : 
                                                  ((0x200000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                    ? 
                                                   ((vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                     <= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     ? 
                                                    (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                     >> vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     : 0U))))
                                                 : 
                                                ((0x800000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                  ? 
                                                 ((0x400000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     ? 
                                                    (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                     >> vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     : 0U)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     ? 
                                                    (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                     << vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     : 0U))
                                                   : 
                                                  ((0x200000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                    ? 
                                                   (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                    & vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                    | vlSelf->top__DOT__datapath__DOT__alu1in_b)))
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                    ? 
                                                   (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                    ^ vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                    * vlSelf->top__DOT__datapath__DOT__alu1in_b))
                                                   : 
                                                  ((0x200000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                    ? 
                                                   (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                    - vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                    + vlSelf->top__DOT__datapath__DOT__alu1in_b)))));
    vlSelf->top__DOT__datapath__DOT__zero_flag = ((0U 
                                                   == vlSelf->top__DOT__datapath__DOT__Alu1out)
                                                   ? 1U
                                                   : 0U);
    vlSelf->Op = (0xffU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                   >> 0xcU)));
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[7U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))][7U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[6U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))][6U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[5U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))][5U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[4U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))][4U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[3U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))][3U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[2U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))][2U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[1U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))][1U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[0U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))][0U];
    vlSelf->top__DOT__memory__DOT__icache_instructionBlock[7U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data
        [7U];
    vlSelf->top__DOT__memory__DOT__icache_instructionBlock[6U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data
        [6U];
    vlSelf->top__DOT__memory__DOT__icache_instructionBlock[5U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data
        [5U];
    vlSelf->top__DOT__memory__DOT__icache_instructionBlock[4U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data
        [4U];
    vlSelf->top__DOT__memory__DOT__icache_instructionBlock[3U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data
        [3U];
    vlSelf->top__DOT__memory__DOT__icache_instructionBlock[2U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data
        [2U];
    vlSelf->top__DOT__memory__DOT__icache_instructionBlock[1U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data
        [1U];
    vlSelf->top__DOT__memory__DOT__icache_instructionBlock[0U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data
        [0U];
    vlSelf->top__DOT__memory__DOT__dcache_readBlock[7U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data
        [7U];
    vlSelf->top__DOT__memory__DOT__dcache_readBlock[6U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data
        [6U];
    vlSelf->top__DOT__memory__DOT__dcache_readBlock[5U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data
        [5U];
    vlSelf->top__DOT__memory__DOT__dcache_readBlock[4U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data
        [4U];
    vlSelf->top__DOT__memory__DOT__dcache_readBlock[3U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data
        [3U];
    vlSelf->top__DOT__memory__DOT__dcache_readBlock[2U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data
        [2U];
    vlSelf->top__DOT__memory__DOT__dcache_readBlock[1U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data
        [1U];
    vlSelf->top__DOT__memory__DOT__dcache_readBlock[0U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data
        [0U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [(7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                >> 2U))];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp 
        = ((0xffffff00U & vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp) 
           | (0xffU & ((2U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                        ? vlSelf->top__DOT__dcache_writeData
                        : vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
                       [(7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                               >> 2U))])));
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp 
        = ((0xffff00ffU & vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp) 
           | (0xff00U & (((4U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                           ? (vlSelf->top__DOT__dcache_writeData 
                              >> 8U) : (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
                                        [(7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                                                >> 2U))] 
                                        >> 8U)) << 8U)));
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp 
        = ((0xff00ffffU & vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp) 
           | (0xff0000U & (((8U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                             ? (vlSelf->top__DOT__dcache_writeData 
                                >> 0x10U) : (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
                                             [(7U & 
                                               ((IData)(vlSelf->top__DOT__dcache_address) 
                                                >> 2U))] 
                                             >> 0x10U)) 
                           << 0x10U)));
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp 
        = ((0xffffffU & vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp) 
           | (((0x10U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                ? (vlSelf->top__DOT__dcache_writeData 
                   >> 0x18U) : (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
                                [(7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                                        >> 2U))] >> 0x18U)) 
              << 0x18U));
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[7U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [7U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[6U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [6U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[5U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [5U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[4U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [4U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[3U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [3U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[2U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [2U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[1U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [1U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[0U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [0U];
    __Vtableidx1 = vlSelf->Op;
    vlSelf->top__DOT__MemRead = Vtop__ConstPool__TABLE_h982b258a_0
        [__Vtableidx1];
    vlSelf->top__DOT__MemWrite = Vtop__ConstPool__TABLE_hd0b6dbb9_0
        [__Vtableidx1];
    vlSelf->top__DOT__MemToReg = Vtop__ConstPool__TABLE_h593624de_0
        [__Vtableidx1];
    vlSelf->top__DOT__MemSignExtend = Vtop__ConstPool__TABLE_he9f7fa8c_0
        [__Vtableidx1];
    vlSelf->top__DOT__jump_flag = Vtop__ConstPool__TABLE_hdc11e6d5_0
        [__Vtableidx1];
    vlSelf->top__DOT__branch_flag = Vtop__ConstPool__TABLE_he34ca08d_0
        [__Vtableidx1];
    vlSelf->top__DOT__RegWrite = Vtop__ConstPool__TABLE_h048376a4_0
        [__Vtableidx1];
    vlSelf->top__DOT__RbSelect = Vtop__ConstPool__TABLE_h40f1881e_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrc = Vtop__ConstPool__TABLE_h77b4894b_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUOp = Vtop__ConstPool__TABLE_h6d2fcffb_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUOp2 = Vtop__ConstPool__TABLE_h46169594_0
        [__Vtableidx1];
    vlSelf->top__DOT__PCSrc = Vtop__ConstPool__TABLE_hdc11e6d5_0
        [__Vtableidx1];
    vlSelf->top__DOT__double_jump_flag = Vtop__ConstPool__TABLE_hbaa8b761_0
        [__Vtableidx1];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we = 0U;
    if ((1U == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
        if ((1U & (~ (((0xfU & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                                >> 8U)) == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read)) 
                      & (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read))))) {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we = 1U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write = 0U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write = 1U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write = 0U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write 
                = (0xfU & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                           >> 8U));
        } else {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write = 0U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write = 0U;
        }
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready = 0U;
        if ((((0xfU & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                       >> 8U)) == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read)) 
             & (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read))) {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready = 1U;
        }
    } else {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write = 0U;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write = 0U;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready = 0U;
    }
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[7U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read
        [7U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[6U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read
        [6U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[5U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read
        [5U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[4U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read
        [4U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[3U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read
        [3U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[2U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read
        [2U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[1U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read
        [1U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[0U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read
        [0U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[7U] 
        = vlSelf->top__DOT__memory__DOT__icache_instructionBlock
        [7U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[6U] 
        = vlSelf->top__DOT__memory__DOT__icache_instructionBlock
        [6U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[5U] 
        = vlSelf->top__DOT__memory__DOT__icache_instructionBlock
        [5U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[4U] 
        = vlSelf->top__DOT__memory__DOT__icache_instructionBlock
        [4U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[3U] 
        = vlSelf->top__DOT__memory__DOT__icache_instructionBlock
        [3U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[2U] 
        = vlSelf->top__DOT__memory__DOT__icache_instructionBlock
        [2U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[1U] 
        = vlSelf->top__DOT__memory__DOT__icache_instructionBlock
        [1U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[0U] 
        = vlSelf->top__DOT__memory__DOT__icache_instructionBlock
        [0U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[7U] 
        = vlSelf->top__DOT__memory__DOT__dcache_readBlock
        [7U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[6U] 
        = vlSelf->top__DOT__memory__DOT__dcache_readBlock
        [6U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[5U] 
        = vlSelf->top__DOT__memory__DOT__dcache_readBlock
        [5U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[4U] 
        = vlSelf->top__DOT__memory__DOT__dcache_readBlock
        [4U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[3U] 
        = vlSelf->top__DOT__memory__DOT__dcache_readBlock
        [3U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[2U] 
        = vlSelf->top__DOT__memory__DOT__dcache_readBlock
        [2U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[1U] 
        = vlSelf->top__DOT__memory__DOT__dcache_readBlock
        [1U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[0U] 
        = vlSelf->top__DOT__memory__DOT__dcache_readBlock
        [0U];
    vlSelf->top__DOT__datapath__DOT__datamem_data = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu;
    if (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready) {
        vlSelf->top__DOT__datapath__DOT__datamem_data 
            = ((0xffffff00U & vlSelf->top__DOT__datapath__DOT__datamem_data) 
               | ((0x20U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                   ? (0xffU & vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu)
                   : 0U));
        vlSelf->top__DOT__datapath__DOT__datamem_data 
            = ((0xffff00ffU & vlSelf->top__DOT__datapath__DOT__datamem_data) 
               | (0xff00U & (((IData)((1U == (0x41U 
                                              & vlSelf->top__DOT__datapath__DOT__ExMem[4U])))
                               ? (- (IData)((1U & (vlSelf->top__DOT__datapath__DOT__datamem_data 
                                                   >> 7U))))
                               : ((0x40U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                                   ? (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu 
                                      >> 8U) : 0U)) 
                             << 8U)));
        vlSelf->top__DOT__datapath__DOT__datamem_data 
            = ((0xff00ffffU & vlSelf->top__DOT__datapath__DOT__datamem_data) 
               | (0xff0000U & (((IData)((1U == (0xc1U 
                                                & vlSelf->top__DOT__datapath__DOT__ExMem[4U])))
                                 ? (- (IData)((1U & 
                                               (vlSelf->top__DOT__datapath__DOT__datamem_data 
                                                >> 7U))))
                                 : ((IData)((1U == 
                                             (0x81U 
                                              & vlSelf->top__DOT__datapath__DOT__ExMem[4U])))
                                     ? (- (IData)((1U 
                                                   & (vlSelf->top__DOT__datapath__DOT__datamem_data 
                                                      >> 0xfU))))
                                     : ((0x80U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                                         ? (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu 
                                            >> 0x10U)
                                         : 0U))) << 0x10U)));
        vlSelf->top__DOT__datapath__DOT__datamem_data 
            = ((0xffffffU & vlSelf->top__DOT__datapath__DOT__datamem_data) 
               | (((IData)((1U == (0x141U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])))
                    ? (- (IData)((1U & (vlSelf->top__DOT__datapath__DOT__datamem_data 
                                        >> 7U)))) : 
                   ((IData)((1U == (0x101U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])))
                     ? (- (IData)((1U & (vlSelf->top__DOT__datapath__DOT__datamem_data 
                                         >> 0xfU))))
                     : ((0x100U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                         ? (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu 
                            >> 0x18U) : 0U))) << 0x18U));
    } else {
        vlSelf->top__DOT__datapath__DOT__datamem_data = 0U;
    }
    vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[7U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data
        [7U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[6U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data
        [6U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[5U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data
        [5U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[4U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data
        [4U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[3U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data
        [3U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[2U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data
        [2U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[1U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data
        [1U];
    vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[0U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data
        [0U];
    vlSelf->top__DOT__datapath__DOT__flush = ((((IData)(vlSelf->top__DOT__jump_flag) 
                                                | (0U 
                                                   != (IData)(vlSelf->top__DOT__branch_flag))) 
                                               | (0U 
                                                  != 
                                                  (0x30000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[0U]))) 
                                              | (0U 
                                                 != 
                                                 (0x18000U 
                                                  & vlSelf->top__DOT__datapath__DOT__ExMem[0U])));
    vlSelf->top__DOT__memory__DOT__dcache_wbBlock[7U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out
        [7U];
    vlSelf->top__DOT__memory__DOT__dcache_wbBlock[6U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out
        [6U];
    vlSelf->top__DOT__memory__DOT__dcache_wbBlock[5U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out
        [5U];
    vlSelf->top__DOT__memory__DOT__dcache_wbBlock[4U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out
        [4U];
    vlSelf->top__DOT__memory__DOT__dcache_wbBlock[3U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out
        [3U];
    vlSelf->top__DOT__memory__DOT__dcache_wbBlock[2U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out
        [2U];
    vlSelf->top__DOT__memory__DOT__dcache_wbBlock[1U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out
        [1U];
    vlSelf->top__DOT__memory__DOT__dcache_wbBlock[0U] 
        = vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out
        [0U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[7U] 
        = vlSelf->top__DOT__memory__DOT__dcache_wbBlock
        [7U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[6U] 
        = vlSelf->top__DOT__memory__DOT__dcache_wbBlock
        [6U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[5U] 
        = vlSelf->top__DOT__memory__DOT__dcache_wbBlock
        [5U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[4U] 
        = vlSelf->top__DOT__memory__DOT__dcache_wbBlock
        [4U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[3U] 
        = vlSelf->top__DOT__memory__DOT__dcache_wbBlock
        [3U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[2U] 
        = vlSelf->top__DOT__memory__DOT__dcache_wbBlock
        [2U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[1U] 
        = vlSelf->top__DOT__memory__DOT__dcache_wbBlock
        [1U];
    vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[0U] 
        = vlSelf->top__DOT__memory__DOT__dcache_wbBlock
        [0U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[7U] 
        = vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data
        [7U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[6U] 
        = vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data
        [6U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[5U] 
        = vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data
        [5U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[4U] 
        = vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data
        [4U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[3U] 
        = vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data
        [3U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[2U] 
        = vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data
        [2U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[1U] 
        = vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data
        [1U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[0U] 
        = vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data
        [0U];
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy;
    vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy 
        = ((IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid) 
           | ((~ ((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy) 
                                            & (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge)))) 
              & ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy) 
                 & (~ (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge)))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy 
        = ((IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid) 
           | ((~ ((IData)(vlSelf->reset) | ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy) 
                                            & (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge)))) 
              & ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy) 
                 & (~ (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge)))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Body
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge))) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__re = 0U;
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we = 0U;
    } else {
        if ((((~ (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we)) 
              & (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_read_enable)) 
             & (0U == (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count)))) {
            vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__re = 1U;
        }
        if (((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_write_enable) 
             & (0U == (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count)))) {
            vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__datapath__DOT__RF__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__datapath__DOT__RF__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__datapath__DOT__RF__v0;
    // Body
    __Vdlyvset__top__DOT__datapath__DOT__RF__v0 = 0U;
    if ((0x80U & vlSelf->top__DOT__datapath__DOT__MemWb[2U])) {
        __Vdlyvval__top__DOT__datapath__DOT__RF__v0 
            = vlSelf->top__DOT__datapath__DOT__RF_WriteData;
        __Vdlyvset__top__DOT__datapath__DOT__RF__v0 = 1U;
        __Vdlyvdim0__top__DOT__datapath__DOT__RF__v0 
            = (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]);
    }
    if (__Vdlyvset__top__DOT__datapath__DOT__RF__v0) {
        vlSelf->top__DOT__datapath__DOT__RF[__Vdlyvdim0__top__DOT__datapath__DOT__RF__v0] 
            = __Vdlyvval__top__DOT__datapath__DOT__RF__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Body
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge))) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__re = 0U;
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__we = 0U;
    } else if ((((~ (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__we)) 
                 & (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy)) 
                & (0U == (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count)))) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__re = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_we = 0U;
    if ((1U != (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
        if ((2U == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
            if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge) {
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_we = 1U;
            }
        }
    }
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate;
    if ((1U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
        if (((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                               >> 5U))) ? 1U : 0U) 
              & ((7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                        >> 9U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
             & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))) {
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate = 1U;
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 0U;
            if (vlSelf->top__DOT__dcache_rw) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 1U;
            }
        } else {
            if (((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                 >> 5U))) ? 1U : 0U)) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate 
                    = ((1U & ((~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read)) 
                              | (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read))))
                        ? 2U : 4U);
            }
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 0U;
        }
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw = 0U;
        if ((1U & (~ ((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                        >> 5U))) ? 1U
                         : 0U) & ((7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                                         >> 9U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
                      & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))))) {
            if (((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                 >> 5U))) ? 1U : 0U)) {
                if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read)) 
                              | (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read)))))) {
                    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw = 1U;
                }
            }
        }
    } else {
        if ((2U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
            if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate = 1U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 0U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 1U;
            } else {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 0U;
            }
        } else {
            if ((4U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
                if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge) {
                    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate = 2U;
                }
            } else {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate 
                    = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate;
            }
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 0U;
        }
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw = 0U;
        if ((2U != (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
            if ((4U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
                if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge) {
                    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw = 0U;
                }
            }
        }
    }
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate;
    if ((1U == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate 
            = ((((0xfU & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                          >> 8U)) == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read)) 
                & (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read))
                ? 1U : 2U);
    } else if ((2U == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
        if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge) {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate = 1U;
        }
    } else {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate;
    }
    if ((1U != (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
        if ((2U == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
            if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge) {
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[7U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in
                    [7U];
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[6U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in
                    [6U];
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[5U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in
                    [5U];
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[4U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in
                    [4U];
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[3U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in
                    [3U];
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[2U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in
                    [2U];
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[1U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in
                    [1U];
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[0U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in
                    [0U];
            }
        }
    }
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[7U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [7U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[6U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [6U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[5U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [5U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[4U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [4U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[3U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [3U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[2U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [2U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[1U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [1U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[0U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [0U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[(7U 
                                                                              & ((IData)(vlSelf->top__DOT__dcache_address) 
                                                                                >> 2U))] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp;
    if ((1U != (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
        if ((2U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
            if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[7U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in
                    [7U];
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[6U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in
                    [6U];
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[5U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in
                    [5U];
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[4U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in
                    [4U];
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[3U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in
                    [3U];
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[2U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in
                    [2U];
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[1U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in
                    [1U];
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[0U] 
                    = vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in
                    [0U];
            }
        }
    }
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid = 0U;
    if ((1U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
        if ((1U & (~ ((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                        >> 5U))) ? 1U
                         : 0U) & ((7U & ((IData)(vlSelf->top__DOT__dcache_address) 
                                         >> 9U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
                      & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))))) {
            if (((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                 >> 5U))) ? 1U : 0U)) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid = 1U;
            }
        }
    } else if ((2U != (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
        if ((4U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
            if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid = 1U;
            }
        }
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_read_enable 
        = ((~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw)) 
           & (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_write_enable 
        = ((IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw) 
           & (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy));
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[7U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write
        [7U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[6U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write
        [6U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[5U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write
        [5U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[4U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write
        [4U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[3U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write
        [3U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[2U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write
        [2U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[1U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write
        [1U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[0U] 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write
        [0U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[7U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write
        [7U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[6U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write
        [6U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[5U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write
        [5U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[4U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write
        [4U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[3U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write
        [3U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[2U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write
        [2U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[1U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write
        [1U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[0U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write
        [0U];
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__synchronized_reset;
    if ((1U == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
        if ((1U & (~ (((0xfU & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                                >> 8U)) == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read)) 
                      & (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read))))) {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid = 1U;
        }
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge 
        = (IData)(((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                    >> 0x22U) | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                 >> 0x26U)));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count 
        = vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count 
        = vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge 
        = (IData)(((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                    >> 0x22U) | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                 >> 0x26U)));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset 
        = (0xfffU & ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem) 
                     + ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count) 
                        << 2U)));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset 
        = (0xfffU & ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem) 
                     + ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count) 
                        << 2U)));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out0 
        = ((0xffffffU & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out0) 
           | (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                              >> 6U))) ? 0U : vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem
               [vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset]) 
              << 0x18U));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out1 
        = ((0xff00ffffU & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out1) 
           | (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                              >> 6U))) ? 0U : vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem
               [(0xfffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset)))]) 
              << 0x10U));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out2 
        = ((0xffff00ffU & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out2) 
           | (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                              >> 6U))) ? 0U : vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem
               [(0xfffU & ((IData)(2U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset)))]) 
              << 8U));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out3 
        = ((0xffffff00U & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out3) 
           | ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                             >> 6U))) ? 0U : vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem
              [(0xfffU & ((IData)(3U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset)))]));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out0 
        = ((0xffffffU & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out0) 
           | (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                              >> 6U))) ? 0U : vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem
               [vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset]) 
              << 0x18U));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out1 
        = ((0xff00ffffU & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out1) 
           | (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                              >> 6U))) ? 0U : vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem
               [(0xfffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset)))]) 
              << 0x10U));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out2 
        = ((0xffff00ffU & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out2) 
           | (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                              >> 6U))) ? 0U : vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem
               [(0xfffU & ((IData)(2U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset)))]) 
              << 8U));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out3 
        = ((0xffffff00U & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out3) 
           | ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                             >> 6U))) ? 0U : vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem
              [(0xfffU & ((IData)(3U) + (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset)))]));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin 
        = (((((((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out0 
                 & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en0) 
                | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out1 
                   & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en1)) 
               | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out2 
                  & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en2)) 
              | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out3 
                 & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en3)) 
             & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__data__en0) 
            & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__data__en0) 
           | (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                              >> 6U))) ? vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_to_mem
                : 0U) & ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                        >> 6U))) ? 0xffffffffU
                          : ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                            >> 6U)))
                              ? 0xffffffffU : 0U))));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin 
        = (((((((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out0 
                 & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en0) 
                | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out1 
                   & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en1)) 
               | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out2 
                  & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en2)) 
              | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out3 
                 & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en3)) 
             & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__data__en0) 
            & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__data__en0) 
           | (((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                              >> 6U))) ? vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_to_mem
                : 0U) & ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                        >> 6U))) ? 0xffffffffU
                          : ((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                            >> 6U)))
                              ? 0xffffffffU : 0U))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__8\n"); );
    // Body
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy 
        = vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy;
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__transfer_in_progress = ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy) 
                                              | (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy));
    vlSelf->top__DOT__datapath__DOT__IfIdEN = (1U & 
                                               (~ (
                                                   ((((0U 
                                                       != 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                           >> 0xdU))) 
                                                      & (((0x1fU 
                                                           & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                              >> 0x17U)) 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                      >> 0x22U)))) 
                                                         | ((0x1fU 
                                                             & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                                >> 0x17U)) 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->top__DOT__RbSelect)
                                                                 ? (IData)(
                                                                           (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                            >> 0x27U))
                                                                 : (IData)(
                                                                           (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                            >> 0x1dU))))))) 
                                                     | (((0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                                              >> 5U)))
                                                          ? 1U
                                                          : 0U) 
                                                        & (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready)))) 
                                                    | (~ (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready))) 
                                                   | (IData)(vlSelf->top__DOT__transfer_in_progress))));
    vlSelf->top__DOT__datapath__DOT__stall_flag = (1U 
                                                   & (((((0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                              >> 0xdU))) 
                                                         & (((0x1fU 
                                                              & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                                 >> 0x17U)) 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                         >> 0x22U)))) 
                                                            | ((0x1fU 
                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                                   >> 0x17U)) 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->top__DOT__RbSelect)
                                                                    ? (IData)(
                                                                              (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                               >> 0x27U))
                                                                    : (IData)(
                                                                              (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                               >> 0x1dU))))))) 
                                                        | (((0U 
                                                             != 
                                                             (0xfU 
                                                              & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                                                 >> 5U)))
                                                             ? 1U
                                                             : 0U) 
                                                           & (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready)))) 
                                                       | (~ (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready))) 
                                                      | (IData)(vlSelf->top__DOT__transfer_in_progress)));
    vlSelf->top__DOT__datapath__DOT__PCenable = (1U 
                                                 & (~ 
                                                    (((((0U 
                                                         != 
                                                         (0xfU 
                                                          & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                             >> 0xdU))) 
                                                        & (((0x1fU 
                                                             & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                                >> 0x17U)) 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                        >> 0x22U)))) 
                                                           | ((0x1fU 
                                                               & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                                  >> 0x17U)) 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->top__DOT__RbSelect)
                                                                   ? (IData)(
                                                                             (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                              >> 0x27U))
                                                                   : (IData)(
                                                                             (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                              >> 0x1dU))))))) 
                                                       | (((0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                                                >> 5U)))
                                                            ? 1U
                                                            : 0U) 
                                                          & (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready)))) 
                                                      | (~ (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready))) 
                                                     | (IData)(vlSelf->top__DOT__transfer_in_progress))));
    if (((((IData)(vlSelf->top__DOT__jump_flag) | (0U 
                                                   != (IData)(vlSelf->top__DOT__branch_flag))) 
          | (0U != (0x30000U & vlSelf->top__DOT__datapath__DOT__IdEx[0U]))) 
         | (0U != (0x18000U & vlSelf->top__DOT__datapath__DOT__ExMem[0U])))) {
        vlSelf->top__DOT__datapath__DOT__PCenable = 
            (((IData)(vlSelf->top__DOT__jump_flag) 
              | (IData)(vlSelf->top__DOT__datapath__DOT__branch_src))
              ? 1U : 0U);
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid))))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid))))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    if (((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
          | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge))))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    if (((~ (IData)(vlSelf->clock)) & (IData)(vlSelf->__Vclklast__TOP__clock))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
          | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge))))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid))))) {
        Vtop___024root___sequent__TOP__8(vlSelf);
    }
    if (((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
          | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid) 
             & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid))))) {
        Vtop___024root___multiclk__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge 
        = vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid 
        = vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid 
        = vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge 
        = vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge;
    vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge;
    vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid;
    vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid;
    vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid ^ vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid)
         | (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid ^ vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid)
         | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge ^ vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge)
         | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge ^ vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid ^ vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid))) VL_DBG_MSGF("        CHANGE: icache_controller.sv:60: top.memory.icache_controller.mem_request_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid ^ vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid))) VL_DBG_MSGF("        CHANGE: dcache_controller.sv:68: top.memory.dcache_controller.mem_request_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge ^ vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge))) VL_DBG_MSGF("        CHANGE: dram_interface.sv:38: top.memory.dram_controller.dram_interface_icache.acknowledge\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge ^ vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge))) VL_DBG_MSGF("        CHANGE: dram_interface.sv:38: top.memory.dram_controller.dram_interface_dcache.acknowledge\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid;
    vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid;
    vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge;
    vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
