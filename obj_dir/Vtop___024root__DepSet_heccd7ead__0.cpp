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

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__datapath__DOT__datamem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__datapath__DOT__datamem__v0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__datapath__DOT__datamem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__datapath__DOT__datamem__v1;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__datapath__DOT__datamem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__datapath__DOT__datamem__v2;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__datapath__DOT__datamem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__datapath__DOT__datamem__v3;
    CData/*6:0*/ __Vdly__top__DOT__datapath__DOT__PC;
    VlWide<4>/*127:0*/ __Vtemp_h16b52f31__0;
    // Body
    __Vdly__top__DOT__datapath__DOT__PC = vlSelf->top__DOT__datapath__DOT__PC;
    __Vdlyvset__top__DOT__datapath__DOT__datamem__v0 = 0U;
    __Vdlyvset__top__DOT__datapath__DOT__datamem__v1 = 0U;
    __Vdlyvset__top__DOT__datapath__DOT__datamem__v2 = 0U;
    __Vdlyvset__top__DOT__datapath__DOT__datamem__v3 = 0U;
    __Vtemp_h16b52f31__0[0U] = 0x2e646174U;
    __Vtemp_h16b52f31__0[1U] = 0x6d6f7279U;
    __Vtemp_h16b52f31__0[2U] = 0x615f6d65U;
    __Vtemp_h16b52f31__0[3U] = 0x646174U;
    VL_WRITEMEM_N(true, 8, 128, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h16b52f31__0)
                  ,  &(vlSelf->top__DOT__datapath__DOT__datamem)
                  , 0, ~0ULL);
    vlSelf->top__DOT__datapath__DOT__MemWb[2U] = ((0x1fU 
                                                   & vlSelf->top__DOT__datapath__DOT__MemWb[2U]) 
                                                  | (0x7fe0U 
                                                     & ((0x7f00U 
                                                         & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                                            >> 1U)) 
                                                        | ((0x80U 
                                                            & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                               >> 0x18U)) 
                                                           | (0x60U 
                                                              & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                                 >> 0x17U))))));
    vlSelf->top__DOT__datapath__DOT__MemWb[0U] = (((IData)(
                                                           (((QData)((IData)(vlSelf->top__DOT__datapath__DOT__datamem_data)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu2out)))) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                        >> 0x17U)));
    vlSelf->top__DOT__datapath__DOT__MemWb[1U] = (((IData)(
                                                           (((QData)((IData)(vlSelf->top__DOT__datapath__DOT__datamem_data)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu2out)))) 
                                                   >> 0x1bU) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(vlSelf->top__DOT__datapath__DOT__datamem_data)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu2out))) 
                                                              >> 0x20U)) 
                                                     << 5U));
    vlSelf->top__DOT__datapath__DOT__MemWb[2U] = ((0x7fe0U 
                                                   & vlSelf->top__DOT__datapath__DOT__MemWb[2U]) 
                                                  | (0x7fffU 
                                                     & ((IData)(
                                                                ((((QData)((IData)(vlSelf->top__DOT__datapath__DOT__datamem_data)) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu2out))) 
                                                                 >> 0x20U)) 
                                                        >> 0x1bU)));
    if (vlSelf->reset) {
        __Vdly__top__DOT__datapath__DOT__PC = 0U;
    } else if (vlSelf->top__DOT__datapath__DOT__PCenable) {
        __Vdly__top__DOT__datapath__DOT__PC = (0x7fU 
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
                                                               >> 0xfU))
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
    if ((0x10U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])) {
        __Vdlyvval__top__DOT__datapath__DOT__datamem__v0 
            = (vlSelf->top__DOT__datapath__DOT__datamem_write_data 
               >> 0x18U);
        __Vdlyvset__top__DOT__datapath__DOT__datamem__v0 = 1U;
        __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v0 
            = (0x7fU & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                         << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                   >> 0x1cU)));
    }
    if ((8U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])) {
        __Vdlyvval__top__DOT__datapath__DOT__datamem__v1 
            = (0xffU & (vlSelf->top__DOT__datapath__DOT__datamem_write_data 
                        >> 0x10U));
        __Vdlyvset__top__DOT__datapath__DOT__datamem__v1 = 1U;
        __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v1 
            = (0x7fU & ((IData)(1U) + ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                        << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                  >> 0x1cU))));
    }
    if ((4U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])) {
        __Vdlyvval__top__DOT__datapath__DOT__datamem__v2 
            = (0xffU & (vlSelf->top__DOT__datapath__DOT__datamem_write_data 
                        >> 8U));
        __Vdlyvset__top__DOT__datapath__DOT__datamem__v2 = 1U;
        __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v2 
            = (0x7fU & ((IData)(2U) + ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                        << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                  >> 0x1cU))));
    }
    if ((2U & vlSelf->top__DOT__datapath__DOT__ExMem[4U])) {
        __Vdlyvval__top__DOT__datapath__DOT__datamem__v3 
            = (0xffU & vlSelf->top__DOT__datapath__DOT__datamem_write_data);
        __Vdlyvset__top__DOT__datapath__DOT__datamem__v3 = 1U;
        __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v3 
            = (0x7fU & ((IData)(3U) + ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                        << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                  >> 0x1cU))));
    }
    if (__Vdlyvset__top__DOT__datapath__DOT__datamem__v0) {
        vlSelf->top__DOT__datapath__DOT__datamem[__Vdlyvdim0__top__DOT__datapath__DOT__datamem__v0] 
            = __Vdlyvval__top__DOT__datapath__DOT__datamem__v0;
    }
    if (__Vdlyvset__top__DOT__datapath__DOT__datamem__v1) {
        vlSelf->top__DOT__datapath__DOT__datamem[__Vdlyvdim0__top__DOT__datapath__DOT__datamem__v1] 
            = __Vdlyvval__top__DOT__datapath__DOT__datamem__v1;
    }
    if (__Vdlyvset__top__DOT__datapath__DOT__datamem__v2) {
        vlSelf->top__DOT__datapath__DOT__datamem[__Vdlyvdim0__top__DOT__datapath__DOT__datamem__v2] 
            = __Vdlyvval__top__DOT__datapath__DOT__datamem__v2;
    }
    if (__Vdlyvset__top__DOT__datapath__DOT__datamem__v3) {
        vlSelf->top__DOT__datapath__DOT__datamem[__Vdlyvdim0__top__DOT__datapath__DOT__datamem__v3] 
            = __Vdlyvval__top__DOT__datapath__DOT__datamem__v3;
    }
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
    vlSelf->top__DOT__datapath__DOT__ExMem[4U] = ((0x1ffU 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[4U]) 
                                                  | (0xfe00U 
                                                     & ((vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                         << 0xdU) 
                                                        | (0x1e00U 
                                                           & (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                              >> 0x13U)))));
    vlSelf->top__DOT__datapath__DOT__ExMem[3U] = ((0x7fffffffU 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[3U]) 
                                                  | (0x80000000U 
                                                     & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                        << 0x1cU)));
    vlSelf->top__DOT__datapath__DOT__ExMem[4U] = ((0xfe00U 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[4U]) 
                                                  | (0xffffU 
                                                     & ((0x1feU 
                                                         & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                            >> 3U)) 
                                                        | (1U 
                                                           & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                              >> 0xeU)))));
    vlSelf->top__DOT__datapath__DOT__ExMem[2U] = ((0xfffffffU 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[2U]) 
                                                  | ((IData)(
                                                             (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                                                >> 0xfU)))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                                                >> 0xcU)))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu1out))))) 
                                                     << 0x1cU));
    vlSelf->top__DOT__datapath__DOT__ExMem[3U] = ((0x80000000U 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[3U]) 
                                                  | (((IData)(
                                                              (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                                                >> 0xfU)))) 
                                                                << 0x22U) 
                                                               | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                                                >> 0xcU)))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu1out))))) 
                                                      >> 4U) 
                                                     | ((IData)(
                                                                ((((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                                                >> 0xfU)))) 
                                                                   << 0x22U) 
                                                                  | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                                                >> 0xcU)))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu1out)))) 
                                                                 >> 0x20U)) 
                                                        << 0x1cU)));
    vlSelf->top__DOT__datapath__DOT__ExMem[0U] = ((0x3ffffU 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[0U]) 
                                                  | (((IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                                                   << 4U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                                                     >> 0x1cU)))) 
                                                      << 0x1cU) 
                                                     | ((0xf800000U 
                                                         & vlSelf->top__DOT__datapath__DOT__IdEx[0U]) 
                                                        | (0x7c0000U 
                                                           & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                              >> 4U)))));
    vlSelf->top__DOT__datapath__DOT__ExMem[1U] = ((0x3ffffU 
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
                                                  | ((0xffc0000U 
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
                                                     | ((IData)(
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
                                                        << 0x1cU)));
    vlSelf->top__DOT__datapath__DOT__ExMem[2U] = ((0xf0000000U 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[2U]) 
                                                  | ((0x3ffffU 
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
                                                         >> 4U)) 
                                                     | (0xffc0000U 
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
    vlSelf->top__DOT__datapath__DOT__ExMem[0U] = ((0xfffc0000U 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[0U]) 
                                                  | (((IData)(vlSelf->top__DOT__datapath__DOT__zero_flag) 
                                                      << 0x11U) 
                                                     | ((0x1fffeU 
                                                         & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & vlSelf->top__DOT__datapath__DOT__IdEx[0U]))));
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
    if (vlSelf->top__DOT__datapath__DOT__stall_flag) {
        vlSelf->top__DOT__datapath__DOT__IdEx[5U] = 
            (0xffc00007U & vlSelf->top__DOT__datapath__DOT__IdEx[5U]);
        vlSelf->top__DOT__datapath__DOT__IdEx[0U] = 
            (0xfffcffffU & vlSelf->top__DOT__datapath__DOT__IdEx[0U]);
        vlSelf->top__DOT__datapath__DOT__IdEx[0U] = 
            (0xfffffffcU & vlSelf->top__DOT__datapath__DOT__IdEx[0U]);
    }
    vlSelf->top__DOT__datapath__DOT__IdEx[5U] = ((0xffc03fffU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[5U]) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->top__DOT__ALUSrc) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->top__DOT__ALUOp) 
                                                           << 0x10U) 
                                                          | (((IData)(vlSelf->top__DOT__ALUOp2) 
                                                              << 0xfU) 
                                                             | ((IData)(vlSelf->top__DOT__MemSignExtend) 
                                                                << 0xeU))))));
    vlSelf->top__DOT__datapath__DOT__IdEx[5U] = ((0xffffc007U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[5U]) 
                                                 | (0xfffffff8U 
                                                    & (((IData)(vlSelf->top__DOT__MemToReg) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT__MemRead) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->top__DOT__MemWrite) 
                                                              << 4U) 
                                                             | ((IData)(vlSelf->top__DOT__RegWrite) 
                                                                << 3U))))));
    vlSelf->top__DOT__datapath__DOT__IdEx[4U] = ((0xfffffffU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[4U]) 
                                                 | ((IData)(vlSelf->top__DOT__datapath__DOT__IfId) 
                                                    << 0x1cU));
    vlSelf->top__DOT__datapath__DOT__IdEx[5U] = ((0xfffffff8U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[5U]) 
                                                 | (7U 
                                                    & ((IData)(vlSelf->top__DOT__datapath__DOT__IfId) 
                                                       >> 4U)));
    vlSelf->top__DOT__datapath__DOT__IdEx[0U] = ((0xfffc0003U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[0U]) 
                                                 | (0xfffffffcU 
                                                    & (((IData)(vlSelf->top__DOT__branch_flag) 
                                                        << 0x10U) 
                                                       | (0xfffcU 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                      >> 0xfU)) 
                                                             << 2U)))));
    vlSelf->top__DOT__datapath__DOT__IdEx[1U] = ((0xfffffffU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[1U]) 
                                                 | (vlSelf->top__DOT__datapath__DOT__RF
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                >> 0x13U)))] 
                                                    << 0x1cU));
    vlSelf->top__DOT__datapath__DOT__IdEx[2U] = ((vlSelf->top__DOT__datapath__DOT__RF
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__datapath__DOT__IfId 
                                                              >> 0x13U)))] 
                                                  >> 4U) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->top__DOT__datapath__DOT__RF
                                                                              [
                                                                              (0x1fU 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x1dU)))])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((IData)(vlSelf->top__DOT__RbSelect)
                                                                                 ? 
                                                                                vlSelf->top__DOT__datapath__DOT__RF
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x22U)))]
                                                                                 : 
                                                                                vlSelf->top__DOT__datapath__DOT__RF
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x18U)))]))))) 
                                                    << 0x1cU));
    vlSelf->top__DOT__datapath__DOT__IdEx[3U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->top__DOT__datapath__DOT__RF
                                                                            [
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x1dU)))])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((IData)(vlSelf->top__DOT__RbSelect)
                                                                               ? 
                                                                              vlSelf->top__DOT__datapath__DOT__RF
                                                                              [
                                                                              (0x1fU 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x22U)))]
                                                                               : 
                                                                              vlSelf->top__DOT__datapath__DOT__RF
                                                                              [
                                                                              (0x1fU 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x18U)))]))))) 
                                                  >> 4U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->top__DOT__datapath__DOT__RF
                                                                               [
                                                                               (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x1dU)))])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                ((IData)(vlSelf->top__DOT__RbSelect)
                                                                                 ? 
                                                                                vlSelf->top__DOT__datapath__DOT__RF
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x22U)))]
                                                                                 : 
                                                                                vlSelf->top__DOT__datapath__DOT__RF
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x18U)))])))) 
                                                             >> 0x20U)) 
                                                    << 0x1cU));
    vlSelf->top__DOT__datapath__DOT__IdEx[4U] = ((0xf0000000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[4U]) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->top__DOT__datapath__DOT__RF
                                                                               [
                                                                               (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x1dU)))])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                ((IData)(vlSelf->top__DOT__RbSelect)
                                                                                 ? 
                                                                                vlSelf->top__DOT__datapath__DOT__RF
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x22U)))]
                                                                                 : 
                                                                                vlSelf->top__DOT__datapath__DOT__RF
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x18U)))])))) 
                                                             >> 0x20U)) 
                                                    >> 4U));
    vlSelf->top__DOT__datapath__DOT__IdEx[0U] = ((0xf003ffffU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[0U]) 
                                                 | (0xfffc0000U 
                                                    & ((0xf800000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                    >> 0x22U)) 
                                                           << 0x17U)) 
                                                       | (0x7c0000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                      >> 0x13U)) 
                                                             << 0x12U)))));
    vlSelf->top__DOT__datapath__DOT__IdEx[0U] = ((0xfffffffU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[0U]) 
                                                 | ((IData)(
                                                            (vlSelf->top__DOT__datapath__DOT__IfId 
                                                             >> 0xfU)) 
                                                    << 0x1cU));
    vlSelf->top__DOT__datapath__DOT__IdEx[1U] = ((0xf0000000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[1U]) 
                                                 | (0xfffffffU 
                                                    & ((0xffffc00U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                                >> 0x1cU))))) 
                                                           << 0xaU)) 
                                                       | (0x3ffU 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                      >> 0xfU)) 
                                                             >> 4U)))));
    vlSelf->top__DOT__datapath__DOT__IdEx[6U] = (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__datapath__DOT__IfId 
                                                            >> 0x1dU)));
    vlSelf->top__DOT__datapath__DOT__IdEx[5U] = ((0x3fffffU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[5U]) 
                                                 | (0xffc00000U 
                                                    & ((((IData)(vlSelf->top__DOT__RbSelect)
                                                          ? (IData)(
                                                                    (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                     >> 0x22U))
                                                          : (IData)(
                                                                    (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                     >> 0x18U))) 
                                                        << 0x1bU) 
                                                       | (0x7c00000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                      >> 0x13U)) 
                                                             << 0x16U)))));
    vlSelf->top__DOT__datapath__DOT__IdEx[0U] = ((0xfffffffcU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[0U]) 
                                                 | (((IData)(vlSelf->top__DOT__RbSelect) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT__double_jump_flag)));
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
    if (vlSelf->top__DOT__datapath__DOT__IfIdEN) {
        vlSelf->top__DOT__datapath__DOT__IfId = (((QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__datapath__DOT__flush)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT__datapath__DOT__instmem_data))) 
                                                  << 7U) 
                                                 | (QData)((IData)(
                                                                   (0x7fU 
                                                                    & ((IData)(4U) 
                                                                       + (IData)(vlSelf->top__DOT__datapath__DOT__PC))))));
    }
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
    vlSelf->top__DOT__datapath__DOT__PC = __Vdly__top__DOT__datapath__DOT__PC;
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
    vlSelf->Op = (0xffU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                   >> 7U)));
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
                                                 & (~ 
                                                    ((0U 
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

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clock)) & (IData)(vlSelf->__Vclklast__TOP__clock))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
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
