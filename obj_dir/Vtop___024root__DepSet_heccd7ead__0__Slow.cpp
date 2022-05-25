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
    VlWide<6>/*191:0*/ __Vtemp_h0fb16bc1__0;
    VlWide<4>/*127:0*/ __Vtemp_h16b52f31__0;
    // Body
    __Vtemp_h0fb16bc1__0[0U] = 0x2e646174U;
    __Vtemp_h0fb16bc1__0[1U] = 0x6d6f7279U;
    __Vtemp_h0fb16bc1__0[2U] = 0x6e5f6d65U;
    __Vtemp_h0fb16bc1__0[3U] = 0x6374696fU;
    __Vtemp_h0fb16bc1__0[4U] = 0x73747275U;
    __Vtemp_h0fb16bc1__0[5U] = 0x696eU;
    VL_READMEM_N(true, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h0fb16bc1__0)
                 ,  &(vlSelf->top__DOT__datapath__DOT__instmem)
                 , 0, ~0ULL);
    __Vtemp_h16b52f31__0[0U] = 0x2e646174U;
    __Vtemp_h16b52f31__0[1U] = 0x6d6f7279U;
    __Vtemp_h16b52f31__0[2U] = 0x615f6d65U;
    __Vtemp_h16b52f31__0[3U] = 0x646174U;
    VL_READMEM_N(true, 8, 128, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h16b52f31__0)
                 ,  &(vlSelf->top__DOT__datapath__DOT__datamem)
                 , 0, ~0ULL);
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
                                                   (0x7fU 
                                                    & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                                       >> 8U))
                                                    : 
                                                   ((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                                     << 0x1bU) 
                                                    | (vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                                       >> 5U)))));
    vlSelf->top__DOT__datapath__DOT__datamem_write_data 
        = (((0U != (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])) 
            & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
               == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                            >> 0x17U)))) ? ((vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                             << 0x1bU) 
                                            | (vlSelf->top__DOT__datapath__DOT__MemWb[0U] 
                                               >> 5U))
            : ((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
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
    vlSelf->Op = (0xffU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                   >> 7U)));
    vlSelf->top__DOT__datapath__DOT__instmem_data = 
        (((vlSelf->top__DOT__datapath__DOT__instmem
           [vlSelf->top__DOT__datapath__DOT__PC] << 0x18U) 
          | (vlSelf->top__DOT__datapath__DOT__instmem
             [(0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__datapath__DOT__PC)))] 
             << 0x10U)) | ((vlSelf->top__DOT__datapath__DOT__instmem
                            [(0x7fU & ((IData)(2U) 
                                       + (IData)(vlSelf->top__DOT__datapath__DOT__PC)))] 
                            << 8U) | vlSelf->top__DOT__datapath__DOT__instmem
                           [(0x7fU & ((IData)(3U) + (IData)(vlSelf->top__DOT__datapath__DOT__PC)))]));
    vlSelf->top__DOT__datapath__DOT__datamem_data = 
        ((0xffffff00U & vlSelf->top__DOT__datapath__DOT__datamem_data) 
         | ((0x20U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
             ? vlSelf->top__DOT__datapath__DOT__datamem
            [(0x7fU & ((IData)(3U) + ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                       << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                 >> 0x1cU))))]
             : 0U));
    vlSelf->top__DOT__datapath__DOT__datamem_data = 
        ((0xffff00ffU & vlSelf->top__DOT__datapath__DOT__datamem_data) 
         | (0xff00U & (((IData)((1U == (0x41U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])))
                         ? (- (IData)((1U & (vlSelf->top__DOT__datapath__DOT__datamem_data 
                                             >> 7U))))
                         : ((0x40U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                             ? vlSelf->top__DOT__datapath__DOT__datamem
                            [(0x7fU & ((IData)(2U) 
                                       + ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                           << 4U) | 
                                          (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                           >> 0x1cU))))]
                             : 0U)) << 8U)));
    vlSelf->top__DOT__datapath__DOT__datamem_data = 
        ((0xff00ffffU & vlSelf->top__DOT__datapath__DOT__datamem_data) 
         | (0xff0000U & (((IData)((1U == (0xc1U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])))
                           ? (- (IData)((1U & (vlSelf->top__DOT__datapath__DOT__datamem_data 
                                               >> 7U))))
                           : ((IData)((1U == (0x81U 
                                              & vlSelf->top__DOT__datapath__DOT__ExMem[4U])))
                               ? (- (IData)((1U & (vlSelf->top__DOT__datapath__DOT__datamem_data 
                                                   >> 0xfU))))
                               : ((0x80U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                                   ? vlSelf->top__DOT__datapath__DOT__datamem
                                  [(0x7fU & ((IData)(1U) 
                                             + ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                 << 4U) 
                                                | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                   >> 0x1cU))))]
                                   : 0U))) << 0x10U)));
    vlSelf->top__DOT__datapath__DOT__datamem_data = 
        ((0xffffffU & vlSelf->top__DOT__datapath__DOT__datamem_data) 
         | (((IData)((1U == (0x141U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])))
              ? (- (IData)((1U & (vlSelf->top__DOT__datapath__DOT__datamem_data 
                                  >> 7U)))) : ((IData)(
                                                       (1U 
                                                        == 
                                                        (0x101U 
                                                         & vlSelf->top__DOT__datapath__DOT__ExMem[4U])))
                                                ? (- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__datapath__DOT__datamem_data 
                                                                 >> 0xfU))))
                                                : (
                                                   (0x100U 
                                                    & vlSelf->top__DOT__datapath__DOT__ExMem[4U])
                                                    ? 
                                                   vlSelf->top__DOT__datapath__DOT__datamem
                                                   [
                                                   (0x7fU 
                                                    & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                        << 4U) 
                                                       | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                          >> 0x1cU)))]
                                                    : 0U))) 
            << 0x18U));
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
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                      >> 0x16U)))) 
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
                         >> 0x17U)) != (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                        >> 0x1bU)) 
              & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                           >> 0x17U)) == (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                          >> 0x1bU))) 
             | ((IData)(((0U == (0x18000U & vlSelf->top__DOT__datapath__DOT__ExMem[0U])) 
                         & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                      >> 0x17U)) == 
                            (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                             >> 0x1bU)))) & ((0x1fU 
                                              & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                 >> 0x17U)) 
                                             == (0x1fU 
                                                 & vlSelf->top__DOT__datapath__DOT__IdEx[6U])))))
          ? 2U : (((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                      >> 7U) & (0U != (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                    & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                 >> 0x17U)) != (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                >> 0x1bU))) 
                   & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                      == (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                          >> 0x1bU))) ? 1U : 0U));
    vlSelf->top__DOT__datapath__DOT__alu1in_b = ((0U 
                                                  == (IData)(vlSelf->top__DOT__datapath__DOT__ForwardingB))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                       >> 0x14U)))
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
                                                        >> 0x14U)))
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
                                                         >> 0x14U)))
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
                         >> 0x17U)) != (0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U])) 
              & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                           >> 0x17U)) == (0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U]))) 
             | (IData)(((0U == (0x18000U & vlSelf->top__DOT__datapath__DOT__ExMem[0U])) 
                        & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                     >> 0x17U)) == 
                           (0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U]))))))
          ? 2U : (((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                      >> 7U) & (0U != (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                    & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                 >> 0x17U)) != (0x1fU 
                                                & vlSelf->top__DOT__datapath__DOT__IdEx[6U]))) 
                   & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                      == (0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U])))
                   ? 1U : 0U));
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
    vlSelf->top__DOT__datapath__DOT__Alu1out = ((0x80000U 
                                                 & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                 ? 
                                                ((0x40000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                  ? 
                                                 (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                  + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                   ? 
                                                  (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                   + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                   : 
                                                  ((0x10000U 
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
                                                ((0x40000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                   ? 
                                                  ((0x10000U 
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
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                    ? 
                                                   (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                    & vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                    | vlSelf->top__DOT__datapath__DOT__alu1in_b)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[5U])
                                                    ? 
                                                   (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                    ^ vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                    * vlSelf->top__DOT__datapath__DOT__alu1in_b))
                                                   : 
                                                  ((0x10000U 
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
    vlSelf->top__DOT__datapath__DOT__IfIdEN = (1U & 
                                               (~ (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                        >> 8U))) 
                                                   & (((0x1fU 
                                                        & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                           >> 0x17U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                   >> 0x1dU)))) 
                                                      | ((0x1fU 
                                                          & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                             >> 0x17U)) 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->top__DOT__RbSelect)
                                                              ? (IData)(
                                                                        (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                         >> 0x22U))
                                                              : (IData)(
                                                                        (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                         >> 0x18U)))))))));
    vlSelf->top__DOT__datapath__DOT__stall_flag = (
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                        >> 8U))) 
                                                   & (((0x1fU 
                                                        & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                           >> 0x17U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                   >> 0x1dU)))) 
                                                      | ((0x1fU 
                                                          & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                             >> 0x17U)) 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->top__DOT__RbSelect)
                                                              ? (IData)(
                                                                        (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                         >> 0x22U))
                                                              : (IData)(
                                                                        (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                         >> 0x18U)))))));
    vlSelf->top__DOT__datapath__DOT__PCenable = (1U 
                                                 & ((~ 
                                                     ((((IData)(vlSelf->top__DOT__jump_flag) 
                                                        | (0U 
                                                           != (IData)(vlSelf->top__DOT__branch_flag))) 
                                                       | (0U 
                                                          != 
                                                          (0x30000U 
                                                           & vlSelf->top__DOT__datapath__DOT__IdEx[0U]))) 
                                                      | (0U 
                                                         != 
                                                         (0x18000U 
                                                          & vlSelf->top__DOT__datapath__DOT__ExMem[0U])))) 
                                                    | (((IData)(vlSelf->top__DOT__jump_flag) 
                                                        | (IData)(vlSelf->top__DOT__datapath__DOT__branch_src))
                                                        ? 1U
                                                        : 0U)));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
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
    vlSelf->top__DOT__datapath__DOT__PC = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->top__DOT__datapath__DOT__instmem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__datapath__DOT__instmem_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->top__DOT__datapath__DOT__datamem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__datapath__DOT__datamem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__datamem_write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__ForwardingA = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__datapath__DOT__ForwardingB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__datapath__DOT__stall_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__datapath__DOT__PCenable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__datapath__DOT__IfIdEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__datapath__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__datapath__DOT__IfId = VL_RAND_RESET_Q(39);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__datapath__DOT__RF[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__datapath__DOT__RF_WriteData = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(197, vlSelf->top__DOT__datapath__DOT__IdEx);
    vlSelf->top__DOT__datapath__DOT__alu1in_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__alu1in_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__Alu1out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__zero_flag = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(144, vlSelf->top__DOT__datapath__DOT__ExMem);
    vlSelf->top__DOT__datapath__DOT__Alu2out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__branch_src = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(79, vlSelf->top__DOT__datapath__DOT__MemWb);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
