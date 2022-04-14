// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__datapath__DOT__datamem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__datapath__DOT__datamem__v0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__datapath__DOT__datamem__v1;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__datapath__DOT__datamem__v2;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__datapath__DOT__datamem__v3;
    CData/*6:0*/ __Vdly__top__DOT__datapath__DOT__PC;
    VlWide<4>/*127:0*/ __Vtemp_h16b52f31__0;
    // Body
    __Vdly__top__DOT__datapath__DOT__PC = vlSelf->top__DOT__datapath__DOT__PC;
    __Vdlyvset__top__DOT__datapath__DOT__datamem__v0 = 0U;
    __Vdly__top__DOT__datapath__DOT__PC = ((IData)(vlSelf->reset)
                                            ? 0U : 
                                           (0x7fU & 
                                            ((IData)(vlSelf->top__DOT__PCSrc)
                                              ? (IData)(
                                                        (vlSelf->top__DOT__datapath__DOT__IfId 
                                                         >> 0xfU))
                                              : ((IData)(4U) 
                                                 + (IData)(vlSelf->top__DOT__datapath__DOT__PC)))));
    vlSelf->top__DOT__datapath__DOT__MemWb[2U] = ((0x1fU 
                                                   & vlSelf->top__DOT__datapath__DOT__MemWb[2U]) 
                                                  | (0x7fe0U 
                                                     & ((0x7f00U 
                                                         & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                            >> 3U)) 
                                                        | ((0x80U 
                                                            & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                                               >> 1U)) 
                                                           | (0x60U 
                                                              & vlSelf->top__DOT__datapath__DOT__ExMem[3U])))));
    vlSelf->top__DOT__datapath__DOT__MemWb[0U] = (((IData)(
                                                           (((QData)((IData)(vlSelf->top__DOT__datapath__DOT__datamem_data)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu2out)))) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & vlSelf->top__DOT__datapath__DOT__ExMem[0U]));
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
    if (VL_UNLIKELY((0x200U & vlSelf->top__DOT__datapath__DOT__ExMem[3U]))) {
        __Vtemp_h16b52f31__0[0U] = 0x2e646174U;
        __Vtemp_h16b52f31__0[1U] = 0x6d6f7279U;
        __Vtemp_h16b52f31__0[2U] = 0x615f6d65U;
        __Vtemp_h16b52f31__0[3U] = 0x646174U;
        VL_WRITEMEM_N(true, 8, 128, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h16b52f31__0)
                      ,  &(vlSelf->top__DOT__datapath__DOT__datamem)
                      , 0, ~0ULL);
        __Vdlyvval__top__DOT__datapath__DOT__datamem__v0 
            = (0xffU & ((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                         << 3U) | (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                   >> 0x1dU)));
        __Vdlyvset__top__DOT__datapath__DOT__datamem__v0 = 1U;
        __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v0 
            = (0x7fU & (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                        >> 5U));
        __Vdlyvval__top__DOT__datapath__DOT__datamem__v1 
            = (0xffU & (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                        >> 0x15U));
        __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v1 
            = (0x7fU & ((IData)(1U) + ((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                        << 0x1bU) | 
                                       (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                        >> 5U))));
        __Vdlyvval__top__DOT__datapath__DOT__datamem__v2 
            = (0xffU & (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                        >> 0xdU));
        __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v2 
            = (0x7fU & ((IData)(2U) + ((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                        << 0x1bU) | 
                                       (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                        >> 5U))));
        __Vdlyvval__top__DOT__datapath__DOT__datamem__v3 
            = (0xffU & (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                        >> 5U));
        __Vdlyvdim0__top__DOT__datapath__DOT__datamem__v3 
            = (0x7fU & ((IData)(3U) + ((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                        << 0x1bU) | 
                                       (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                        >> 5U))));
    }
    if (__Vdlyvset__top__DOT__datapath__DOT__datamem__v0) {
        vlSelf->top__DOT__datapath__DOT__datamem[__Vdlyvdim0__top__DOT__datapath__DOT__datamem__v0] 
            = __Vdlyvval__top__DOT__datapath__DOT__datamem__v0;
        vlSelf->top__DOT__datapath__DOT__datamem[__Vdlyvdim0__top__DOT__datapath__DOT__datamem__v1] 
            = __Vdlyvval__top__DOT__datapath__DOT__datamem__v1;
        vlSelf->top__DOT__datapath__DOT__datamem[__Vdlyvdim0__top__DOT__datapath__DOT__datamem__v2] 
            = __Vdlyvval__top__DOT__datapath__DOT__datamem__v2;
        vlSelf->top__DOT__datapath__DOT__datamem[__Vdlyvdim0__top__DOT__datapath__DOT__datamem__v3] 
            = __Vdlyvval__top__DOT__datapath__DOT__datamem__v3;
    }
    vlSelf->top__DOT__datapath__DOT__ExMem[3U] = ((0xffU 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[3U]) 
                                                  | (0x3ff00U 
                                                     & ((0x3f800U 
                                                         & (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                            >> 3U)) 
                                                        | (0x700U 
                                                           & (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                              >> 0xdU)))));
    vlSelf->top__DOT__datapath__DOT__ExMem[2U] = ((0x1fU 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[2U]) 
                                                  | ((IData)(
                                                             (((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                                                >> 0x1aU)))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                                                >> 0x18U)))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu1out))))) 
                                                     << 5U));
    vlSelf->top__DOT__datapath__DOT__ExMem[3U] = ((0x3ff00U 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[3U]) 
                                                  | (0x3ffffU 
                                                     & (((IData)(
                                                                 (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                                                >> 0x1aU)))) 
                                                                   << 0x22U) 
                                                                  | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                                                >> 0x18U)))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu1out))))) 
                                                         >> 0x1bU) 
                                                        | ((IData)(
                                                                   ((((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                                                >> 0x1aU)))) 
                                                                      << 0x22U) 
                                                                     | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                                                >> 0x18U)))) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(vlSelf->top__DOT__datapath__DOT__Alu1out)))) 
                                                                    >> 0x20U)) 
                                                           << 5U))));
    vlSelf->top__DOT__datapath__DOT__ExMem[0U] = (((IData)(
                                                           (((QData)((IData)(
                                                                             vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                                                             << 0x32U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                                                << 0x12U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                                                  >> 0xeU)))) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                        >> 9U)));
    vlSelf->top__DOT__datapath__DOT__ExMem[1U] = (((IData)(
                                                           (((QData)((IData)(
                                                                             vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                                                             << 0x32U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                                                << 0x12U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                                                  >> 0xeU)))) 
                                                   >> 0x1bU) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                                                     >> 0xeU))) 
                                                              >> 0x20U)) 
                                                     << 5U));
    vlSelf->top__DOT__datapath__DOT__ExMem[2U] = ((0xffffffe0U 
                                                   & vlSelf->top__DOT__datapath__DOT__ExMem[2U]) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[3U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[2U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->top__DOT__datapath__DOT__IdEx[1U])) 
                                                                     >> 0xeU))) 
                                                              >> 0x20U)) 
                                                     >> 0x1bU));
    if ((0x80U & vlSelf->top__DOT__datapath__DOT__ExMem[3U])) {
        if ((0x80U & vlSelf->top__DOT__datapath__DOT__ExMem[3U])) {
            vlSelf->top__DOT__datapath__DOT__Alu2out 
                = (((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                     << 0x1bU) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                  >> 5U)) + ((vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                              << 0x1bU) 
                                             | (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                >> 5U)));
        }
    } else {
        vlSelf->top__DOT__datapath__DOT__Alu2out = 
            ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
              << 0x1bU) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                           >> 5U));
    }
    vlSelf->top__DOT__datapath__DOT__datamem_data = 
        ((((0x400U & vlSelf->top__DOT__datapath__DOT__ExMem[3U])
            ? vlSelf->top__DOT__datapath__DOT__datamem
           [(0x7fU & (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                      >> 5U))] : 0U) << 0x18U) | ((
                                                   ((0x400U 
                                                     & vlSelf->top__DOT__datapath__DOT__ExMem[3U])
                                                     ? 
                                                    vlSelf->top__DOT__datapath__DOT__datamem
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        ((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                          << 0x1bU) 
                                                         | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                            >> 5U))))]
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | ((((0x400U 
                                                        & vlSelf->top__DOT__datapath__DOT__ExMem[3U])
                                                        ? 
                                                       vlSelf->top__DOT__datapath__DOT__datamem
                                                       [
                                                       (0x7fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           ((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                             << 0x1bU) 
                                                            | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                               >> 5U))))]
                                                        : 0U) 
                                                      << 8U) 
                                                     | ((0x400U 
                                                         & vlSelf->top__DOT__datapath__DOT__ExMem[3U])
                                                         ? 
                                                        vlSelf->top__DOT__datapath__DOT__datamem
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(3U) 
                                                            + 
                                                            ((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                              << 0x1bU) 
                                                             | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                                >> 5U))))]
                                                         : 0U))));
    vlSelf->top__DOT__datapath__DOT__IdEx[4U] = ((0x3ffffffU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[4U]) 
                                                 | (0xfc000000U 
                                                    & (((IData)(vlSelf->top__DOT__ALUSrc) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSelf->top__DOT__ALUOp) 
                                                           << 0x1bU) 
                                                          | ((IData)(vlSelf->top__DOT__ALUOp2) 
                                                             << 0x1aU)))));
    vlSelf->top__DOT__datapath__DOT__IdEx[5U] = (1U 
                                                 & ((0x3ffffffU 
                                                     & ((IData)(vlSelf->top__DOT__ALUSrc) 
                                                        >> 1U)) 
                                                    | ((0x3ffffffU 
                                                        & ((IData)(vlSelf->top__DOT__ALUOp) 
                                                           >> 5U)) 
                                                       | ((IData)(vlSelf->top__DOT__ALUOp2) 
                                                          >> 6U))));
    vlSelf->top__DOT__datapath__DOT__IdEx[4U] = ((0xfc1fffffU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[4U]) 
                                                 | (0xffe00000U 
                                                    & (((IData)(vlSelf->top__DOT__MemToReg) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->top__DOT__MemRead) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->top__DOT__MemWrite) 
                                                              << 0x16U) 
                                                             | ((IData)(vlSelf->top__DOT__RegWrite) 
                                                                << 0x15U))))));
    vlSelf->top__DOT__datapath__DOT__IdEx[1U] = ((0x3fffU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[1U]) 
                                                 | (vlSelf->top__DOT__datapath__DOT__RF
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                >> 0x13U)))] 
                                                    << 0xeU));
    vlSelf->top__DOT__datapath__DOT__IdEx[2U] = ((vlSelf->top__DOT__datapath__DOT__RF
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__datapath__DOT__IfId 
                                                              >> 0x13U)))] 
                                                  >> 0x12U) 
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
                                                    << 0xeU));
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
                                                  >> 0x12U) 
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
                                                    << 0xeU));
    vlSelf->top__DOT__datapath__DOT__IdEx[4U] = ((0xffe00000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[4U]) 
                                                 | (((IData)(
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
                                                     >> 0x12U) 
                                                    | (0x1fc000U 
                                                       & ((IData)(vlSelf->top__DOT__datapath__DOT__IfId) 
                                                          << 0xeU))));
    vlSelf->top__DOT__datapath__DOT__IdEx[0U] = ((0xffffc000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[0U]) 
                                                 | ((0x3e00U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                 >> 0x22U)) 
                                                        << 9U)) 
                                                    | (0x1ffU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                  >> 0xfU)))));
    vlSelf->top__DOT__datapath__DOT__IdEx[0U] = ((0x3fffU 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[0U]) 
                                                 | (0xffffc000U 
                                                    & (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                               >> 0x1cU))))) 
                                                        << 0x1cU) 
                                                       | (0xfffc000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                      >> 0xfU)) 
                                                             << 0xeU)))));
    vlSelf->top__DOT__datapath__DOT__IdEx[1U] = ((0xffffc000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[1U]) 
                                                 | (0x3fffU 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                              >> 0x1cU))))) 
                                                       >> 4U)));
    vlSelf->top__DOT__datapath__DOT__alu1in_b = ((0U 
                                                  == 
                                                  (3U 
                                                   & ((vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                       << 1U) 
                                                      | (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                         >> 0x1fU))))
                                                  ? 
                                                 ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                   << 0x12U) 
                                                  | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                     >> 0xeU))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                        << 1U) 
                                                       | (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                          >> 0x1fU))))
                                                   ? 
                                                  ((vlSelf->top__DOT__datapath__DOT__IdEx[1U] 
                                                    << 0x12U) 
                                                   | (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                      >> 0xeU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                         << 1U) 
                                                        | (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                           >> 0x1fU))))
                                                    ? 
                                                   (0xfffffe00U 
                                                    | (0x1ffU 
                                                       & vlSelf->top__DOT__datapath__DOT__IdEx[0U]))
                                                    : 
                                                   ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                     << 0x12U) 
                                                    | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                       >> 0xeU)))));
    vlSelf->top__DOT__datapath__DOT__IfId = (((QData)((IData)(vlSelf->top__DOT__datapath__DOT__instmem_data)) 
                                              << 7U) 
                                             | (QData)((IData)(
                                                               (0x7fU 
                                                                & ((IData)(4U) 
                                                                   + (IData)(vlSelf->top__DOT__datapath__DOT__PC))))));
    vlSelf->top__DOT__datapath__DOT__Alu1out = ((0x40000000U 
                                                 & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                 ? 
                                                ((0x20000000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                  ? 
                                                 (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                    << 0x12U) 
                                                   | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                      >> 0xeU)) 
                                                  + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                  : 
                                                 ((0x10000000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                   ? 
                                                  (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                     << 0x12U) 
                                                    | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                       >> 0xeU)) 
                                                   + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                   : 
                                                  ((0x8000000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                    ? 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                        >> 0xeU)) 
                                                    + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     ? 
                                                    (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                       << 0x12U) 
                                                      | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                         >> 0xeU)) 
                                                     >> vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     : 0U))))
                                                 : 
                                                ((0x20000000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                  ? 
                                                 ((0x10000000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                   ? 
                                                  ((0x8000000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     ? 
                                                    (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                       << 0x12U) 
                                                      | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                         >> 0xeU)) 
                                                     >> vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     : 0U)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     ? 
                                                    (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                       << 0x12U) 
                                                      | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                         >> 0xeU)) 
                                                     << vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     : 0U))
                                                   : 
                                                  ((0x8000000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                    ? 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                        >> 0xeU)) 
                                                    & vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                        >> 0xeU)) 
                                                    | vlSelf->top__DOT__datapath__DOT__alu1in_b)))
                                                  : 
                                                 ((0x10000000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                   ? 
                                                  ((0x8000000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                    ? 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                        >> 0xeU)) 
                                                    ^ vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                        >> 0xeU)) 
                                                    * vlSelf->top__DOT__datapath__DOT__alu1in_b))
                                                   : 
                                                  ((0x8000000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                                    ? 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                        >> 0xeU)) 
                                                    - vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                        >> 0xeU)) 
                                                    + vlSelf->top__DOT__datapath__DOT__alu1in_b)))));
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
    vlSelf->top__DOT__PCSrc = 0U;
    if ((8U != (IData)(vlSelf->Op))) {
        if ((0x18U != (IData)(vlSelf->Op))) {
            if ((3U != (IData)(vlSelf->Op))) {
                if ((0x19U != (IData)(vlSelf->Op))) {
                    if ((0x31U != (IData)(vlSelf->Op))) {
                        if ((4U == (IData)(vlSelf->Op))) {
                            vlSelf->top__DOT__PCSrc = 1U;
                        } else if ((7U != (IData)(vlSelf->Op))) {
                            vlSelf->top__DOT__PCSrc = 0U;
                        }
                        vlSelf->top__DOT__ALUOp2 = 0U;
                        if ((4U != (IData)(vlSelf->Op))) {
                            if ((7U == (IData)(vlSelf->Op))) {
                                vlSelf->top__DOT__ALUOp2 = 1U;
                            }
                        }
                    } else {
                        vlSelf->top__DOT__ALUOp2 = 0U;
                    }
                } else {
                    vlSelf->top__DOT__ALUOp2 = 0U;
                }
            } else {
                vlSelf->top__DOT__ALUOp2 = 0U;
            }
        } else {
            vlSelf->top__DOT__ALUOp2 = 0U;
        }
        vlSelf->top__DOT__ALUOp = 0U;
        if ((0x18U == (IData)(vlSelf->Op))) {
            vlSelf->top__DOT__ALUOp = 2U;
        } else if ((3U == (IData)(vlSelf->Op))) {
            vlSelf->top__DOT__ALUOp = 0U;
        } else if ((0x19U != (IData)(vlSelf->Op))) {
            if ((0x31U != (IData)(vlSelf->Op))) {
                if ((4U != (IData)(vlSelf->Op))) {
                    vlSelf->top__DOT__ALUOp = ((7U 
                                                == (IData)(vlSelf->Op))
                                                ? 2U
                                                : 0U);
                }
            }
        }
        vlSelf->top__DOT__ALUSrc = 0U;
        if ((0x18U != (IData)(vlSelf->Op))) {
            if ((3U == (IData)(vlSelf->Op))) {
                vlSelf->top__DOT__ALUSrc = 1U;
            } else if ((0x19U == (IData)(vlSelf->Op))) {
                vlSelf->top__DOT__ALUSrc = 1U;
            } else if ((0x31U == (IData)(vlSelf->Op))) {
                vlSelf->top__DOT__ALUSrc = 1U;
            } else if ((4U != (IData)(vlSelf->Op))) {
                if ((7U != (IData)(vlSelf->Op))) {
                    vlSelf->top__DOT__ALUSrc = 0U;
                }
            }
            vlSelf->top__DOT__MemWrite = 0U;
            if ((3U != (IData)(vlSelf->Op))) {
                if ((0x19U == (IData)(vlSelf->Op))) {
                    vlSelf->top__DOT__MemWrite = 1U;
                } else if ((0x31U != (IData)(vlSelf->Op))) {
                    if ((4U != (IData)(vlSelf->Op))) {
                        if ((7U != (IData)(vlSelf->Op))) {
                            vlSelf->top__DOT__MemWrite = 0U;
                        }
                    }
                }
                vlSelf->top__DOT__MemRead = 0U;
                if ((0x19U != (IData)(vlSelf->Op))) {
                    if ((0x31U == (IData)(vlSelf->Op))) {
                        vlSelf->top__DOT__MemRead = 1U;
                    } else if ((4U != (IData)(vlSelf->Op))) {
                        if ((7U != (IData)(vlSelf->Op))) {
                            vlSelf->top__DOT__MemRead = 0U;
                        }
                    }
                }
            } else {
                vlSelf->top__DOT__MemRead = 0U;
            }
        } else {
            vlSelf->top__DOT__MemWrite = 0U;
            vlSelf->top__DOT__MemRead = 0U;
        }
    } else {
        vlSelf->top__DOT__ALUOp2 = 0U;
        vlSelf->top__DOT__ALUOp = 0U;
        vlSelf->top__DOT__ALUSrc = 0U;
        vlSelf->top__DOT__MemWrite = 0U;
        vlSelf->top__DOT__MemRead = 0U;
    }
    vlSelf->top__DOT__MemToReg = 0U;
    if ((8U == (IData)(vlSelf->Op))) {
        vlSelf->top__DOT__MemToReg = 1U;
        vlSelf->top__DOT__RegWrite = 0U;
        vlSelf->top__DOT__RegWrite = 1U;
    } else if ((0x18U == (IData)(vlSelf->Op))) {
        vlSelf->top__DOT__MemToReg = 1U;
        vlSelf->top__DOT__RegWrite = 0U;
        vlSelf->top__DOT__RegWrite = 1U;
    } else if ((3U == (IData)(vlSelf->Op))) {
        vlSelf->top__DOT__MemToReg = 1U;
        vlSelf->top__DOT__RegWrite = 0U;
        vlSelf->top__DOT__RegWrite = 1U;
    } else if ((0x19U != (IData)(vlSelf->Op))) {
        vlSelf->top__DOT__MemToReg = ((0x31U == (IData)(vlSelf->Op))
                                       ? 0U : ((4U 
                                                == (IData)(vlSelf->Op))
                                                ? 2U
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelf->Op))
                                                    ? 1U
                                                    : 0U)));
        vlSelf->top__DOT__RegWrite = 0U;
        vlSelf->top__DOT__RegWrite = ((0x31U == (IData)(vlSelf->Op)) 
                                      | ((4U == (IData)(vlSelf->Op)) 
                                         | (7U == (IData)(vlSelf->Op))));
    } else {
        vlSelf->top__DOT__RegWrite = 0U;
    }
    vlSelf->top__DOT__RbSelect = 0U;
    if ((8U != (IData)(vlSelf->Op))) {
        if ((0x18U != (IData)(vlSelf->Op))) {
            if ((3U != (IData)(vlSelf->Op))) {
                if ((0x19U == (IData)(vlSelf->Op))) {
                    vlSelf->top__DOT__RbSelect = 1U;
                } else if ((0x31U == (IData)(vlSelf->Op))) {
                    vlSelf->top__DOT__RbSelect = 1U;
                }
            }
        }
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
            = ((0U == (3U & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                             >> 5U))) ? ((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                          << 0x1bU) 
                                         | (vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                            >> 5U))
                : ((1U == (3U & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                 >> 5U))) ? ((vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                              << 0x1bU) 
                                             | (vlSelf->top__DOT__datapath__DOT__MemWb[0U] 
                                                >> 5U))
                    : ((2U == (3U & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                     >> 5U))) ? (0x7fU 
                                                 & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                                    >> 8U))
                        : ((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                            << 0x1bU) | (vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                         >> 5U)))));
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
