// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h2c16a5fa__0;
    VlWide<4>/*127:0*/ __Vtemp_h2c16a5fa__1;
    // Body
    __Vtemp_h2c16a5fa__0[0U] = 0x2e686578U;
    __Vtemp_h2c16a5fa__0[1U] = 0x74657374U;
    __Vtemp_h2c16a5fa__0[2U] = 0x706c655fU;
    __Vtemp_h2c16a5fa__0[3U] = 0x73696dU;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h2c16a5fa__0)
                 ,  &(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem)
                 , 0, ~0ULL);
    __Vtemp_h2c16a5fa__1[0U] = 0x2e686578U;
    __Vtemp_h2c16a5fa__1[1U] = 0x74657374U;
    __Vtemp_h2c16a5fa__1[2U] = 0x706c655fU;
    __Vtemp_h2c16a5fa__1[3U] = 0x73696dU;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h2c16a5fa__1)
                 ,  &(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem)
                 , 0, ~0ULL);
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[7U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[6U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[5U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[4U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[3U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[2U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[1U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[0U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[7U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[6U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[5U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[4U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[3U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[2U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[1U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[0xfU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[0xeU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[0xdU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[0xcU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[0xbU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[0xaU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[9U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[8U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[0xfU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[0xeU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[0xdU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[0xcU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[0xbU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[0xaU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[9U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[8U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[0xfU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[0xeU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[0xdU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[0xcU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[0xbU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[0xaU] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[9U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[8U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[0U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[0U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[0U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[0U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[0U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[0U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[0U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[0U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[0U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[1U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[1U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[1U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[1U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[1U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[1U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[1U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[1U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[2U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[2U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[2U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[2U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[2U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[2U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[2U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[2U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[3U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[3U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[3U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[3U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[3U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[3U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[3U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[3U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[4U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[4U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[4U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[4U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[4U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[4U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[4U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[4U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[5U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[5U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[5U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[5U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[5U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[5U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[5U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[5U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[6U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[6U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[6U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[6U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[6U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[6U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[6U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[6U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[7U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[7U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[7U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[7U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[7U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[7U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[7U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[7U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__unnamedblk1__DOT__i = 8U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[1U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[1U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[1U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[1U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[1U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[1U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[1U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[1U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[2U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[2U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[2U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[2U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[2U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[2U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[2U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[2U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[3U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[3U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[3U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[3U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[3U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[3U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[3U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[3U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[4U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[4U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[4U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[4U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[4U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[4U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[4U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[4U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[5U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[5U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[5U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[5U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[5U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[5U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[5U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[5U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[6U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[6U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[6U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[6U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[6U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[6U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[6U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[6U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[7U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[7U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[7U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[7U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[7U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[7U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[7U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[7U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[8U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[8U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[8U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[8U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[8U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[8U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[8U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[8U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[9U][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[9U][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[9U][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[9U][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[9U][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[9U][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[9U][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[9U][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xaU][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xaU][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xaU][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xaU][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xaU][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xaU][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xaU][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xaU][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xbU][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xbU][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xbU][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xbU][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xbU][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xbU][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xbU][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xbU][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xcU][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xcU][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xcU][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xcU][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xcU][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xcU][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xcU][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xcU][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xdU][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xdU][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xdU][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xdU][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xdU][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xdU][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xdU][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xdU][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xeU][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xeU][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xeU][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xeU][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xeU][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xeU][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xeU][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xeU][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xfU][7U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xfU][6U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xfU][5U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xfU][4U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xfU][3U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xfU][2U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xfU][1U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[0xfU][0U] = 0U;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__unnamedblk1__DOT__i = 0x10U;
}

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

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[7U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data
        [7U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[6U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data
        [6U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[5U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data
        [5U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[4U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data
        [4U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[3U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data
        [3U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[2U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data
        [2U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[1U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data
        [1U];
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[0U] 
        = vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data
        [0U];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_we = 0U;
    if ((1U != (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
        if ((2U == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
            if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge) {
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_we = 1U;
            }
        }
    }
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
    vlSelf->top__DOT__transfer_in_progress = ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy) 
                                              | (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy));
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
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset 
        = (0xfffU & ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem) 
                     + ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count) 
                        << 2U)));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge 
        = (IData)(((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                    >> 0x22U) | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                 >> 0x26U)));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge 
        = (IData)(((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                    >> 0x22U) | (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                 >> 0x26U)));
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
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset 
        = (0xfffU & ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem) 
                     + ((IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count) 
                        << 2U)));
    vlSelf->Op = (0xffU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                   >> 0xcU)));
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))];
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag
        [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                >> 5U))];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))];
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
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[7U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))][7U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[6U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))][6U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[5U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))][5U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[4U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))][4U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[3U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))][3U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[2U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))][2U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[1U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))][1U];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[0U] 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram
        [(0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                  >> 1U))][0U];
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
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid 
        = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__synchronized_reset;
    if ((1U == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
        if ((1U & (~ (((0xfU & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                                >> 8U)) == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read)) 
                      & (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read))))) {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid = 1U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we = 0U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we = 1U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write = 0U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write = 1U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write = 0U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write 
                = (0xfU & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                           >> 8U));
        } else {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we = 0U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write = 0U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write = 0U;
        }
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate;
        if ((((0xfU & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                       >> 8U)) == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read)) 
             & (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read))) {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate = 1U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready = 0U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready = 1U;
        } else {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate = 2U;
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready = 0U;
        }
    } else {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we = 0U;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write = 0U;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write = 0U;
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate 
            = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate;
        if ((2U == (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate))) {
            if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge) {
                vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate = 1U;
            }
        } else {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate 
                = vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate;
        }
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready = 0U;
    }
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid = 0U;
    if ((1U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
        if ((1U & (~ ((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                        >> 5U))) ? 1U
                         : 0U) & ((7U & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                         >> 5U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
                      & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))))) {
            if (((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                 >> 5U))) ? 1U : 0U)) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid = 1U;
            }
        }
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write = 0U;
        if (((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                               >> 5U))) ? 1U : 0U) 
              & ((7U & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                        >> 5U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
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
                = (7U & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                         >> 5U));
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write = 0U;
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write 
                = vlSelf->top__DOT__dcache_rw;
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 0U;
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 1U;
        } else {
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write = 0U;
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 0U;
        }
    } else {
        if ((2U != (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
            if ((4U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
                if (vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge) {
                    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid = 1U;
                }
            }
        }
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write = 0U;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write = 0U;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = 0U;
    }
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address 
        = (0xfffU & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                      << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                >> 0x1cU)));
    if ((1U == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate))) {
        if ((1U & (~ ((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                        >> 5U))) ? 1U
                         : 0U) & ((7U & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                         >> 5U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
                      & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))))) {
            if (((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                 >> 5U))) ? 1U : 0U)) {
                if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read)) 
                              | (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read)))))) {
                    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address 
                        = (((IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read) 
                            << 9U) | (0x1ffU & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                 << 4U) 
                                                | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                   >> 0x1cU))));
                }
            }
        }
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we = 0U;
        if (((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                               >> 5U))) ? 1U : 0U) 
              & ((7U & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                        >> 5U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
             & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))) {
            if (vlSelf->top__DOT__dcache_rw) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we = 1U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate 
                    = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate = 1U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 0U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 1U;
            } else {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate 
                    = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate = 1U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 0U;
            }
        } else {
            if (((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                 >> 5U))) ? 1U : 0U)) {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we = 1U;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate 
                    = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate;
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate 
                    = ((1U & ((~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read)) 
                              | (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read))))
                        ? 2U : 4U);
            } else {
                vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate 
                    = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate;
            }
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = 0U;
        }
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw = 0U;
        if ((1U & (~ ((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                        >> 5U))) ? 1U
                         : 0U) & ((7U & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                         >> 5U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
                      & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))))) {
            if (((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                 >> 5U))) ? 1U : 0U)) {
                if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read)) 
                              | (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read)))))) {
                    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw = 1U;
                }
            }
        }
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready = 0U;
        if (((((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                               >> 5U))) ? 1U : 0U) 
              & ((7U & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                        >> 5U)) == (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read))) 
             & (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read))) {
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready = 1U;
        }
    } else {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we = 0U;
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate 
            = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate;
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
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready = 0U;
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
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_write_enable 
        = ((IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw) 
           & (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy));
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_read_enable 
        = ((~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw)) 
           & (IData)(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy));
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
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu 
        = vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
        [(7U & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                 << 2U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                           >> 0x1eU)))];
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp 
        = ((0xffffff00U & vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp) 
           | (0xffU & ((2U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                        ? vlSelf->top__DOT__dcache_writeData
                        : vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
                       [(7U & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                << 2U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                          >> 0x1eU)))])));
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp 
        = ((0xffff00ffU & vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp) 
           | (0xff00U & (((4U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                           ? (vlSelf->top__DOT__dcache_writeData 
                              >> 8U) : (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
                                        [(7U & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                   >> 0x1eU)))] 
                                        >> 8U)) << 8U)));
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp 
        = ((0xff00ffffU & vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp) 
           | (0xff0000U & (((8U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                             ? (vlSelf->top__DOT__dcache_writeData 
                                >> 0x10U) : (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
                                             [(7U & 
                                               ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                   >> 0x1eU)))] 
                                             >> 0x10U)) 
                           << 0x10U)));
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp 
        = ((0xffffffU & vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp) 
           | (((0x10U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                ? (vlSelf->top__DOT__dcache_writeData 
                   >> 0x18U) : (vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
                                [(7U & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                         << 2U) | (
                                                   vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                   >> 0x1eU)))] 
                                >> 0x18U)) << 0x18U));
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
                                                                              & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                                                << 2U) 
                                                                                | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                                                >> 0x1eU)))] 
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->Op = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__MemRead = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__MemWrite = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__PCSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemToReg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUOp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ALUSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ALUOp2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RbSelect = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemSignExtend = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_flag = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__jump_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__double_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dcache_rw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dcache_writeData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__transfer_in_progress = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__datapath__DOT__PC = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__datapath__DOT__datamem = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__datapath__DOT__datamem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__ForwardingA = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__datapath__DOT__ForwardingB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__datapath__DOT__stall_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__datapath__DOT__PCenable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__datapath__DOT__IfIdEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__datapath__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__datapath__DOT__IfId = VL_RAND_RESET_Q(44);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__datapath__DOT__RF[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__datapath__DOT__RF_WriteData = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(202, vlSelf->top__DOT__datapath__DOT__IdEx);
    vlSelf->top__DOT__datapath__DOT__alu1in_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__alu1in_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__Alu1out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__zero_flag = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(149, vlSelf->top__DOT__datapath__DOT__ExMem);
    vlSelf->top__DOT__datapath__DOT__Alu2out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__branch_src = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(84, vlSelf->top__DOT__datapath__DOT__MemWb);
    vlSelf->top__DOT__memory__DOT__mem_ready_icache = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__icache_instructionBlock[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dcache_readBlock[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dcache_wbBlock[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__synchronized_reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__icache_sram[__Vi0][__Vi1] = 0;
        }
    }
    vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__dcache_sram[__Vi0][__Vi1] = 0;
        }
    }
    vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_read_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_to_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__re = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line = VL_RAND_RESET_Q(35);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line = VL_RAND_RESET_Q(39);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__data__en0 = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out0 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en0 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out1 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en1 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out2 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en2 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__out3 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__dram_array__DOT__data__out__en3 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_to_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__re = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line = VL_RAND_RESET_Q(35);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line = VL_RAND_RESET_Q(39);
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__data__en0 = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out0 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en0 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out1 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en1 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out2 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en2 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__out3 = 0;
    vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__dram_array__DOT__data__out__en3 = 0;
    vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
