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

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__datapath__DOT__alu1in_b = ((0U 
                                                  == 
                                                  (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                   >> 0x1eU))
                                                  ? 
                                                 ((vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                   << 0x12U) 
                                                  | (vlSelf->top__DOT__datapath__DOT__IdEx[1U] 
                                                     >> 0xeU))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                    >> 0x1eU))
                                                   ? 
                                                  ((vlSelf->top__DOT__datapath__DOT__IdEx[1U] 
                                                    << 0x12U) 
                                                   | (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                      >> 0xeU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                     >> 0x1eU))
                                                    ? 
                                                   (0xfffffe00U 
                                                    | (0x1ffU 
                                                       & vlSelf->top__DOT__datapath__DOT__IdEx[0U]))
                                                    : 
                                                   ((vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                     << 0x12U) 
                                                    | (vlSelf->top__DOT__datapath__DOT__IdEx[1U] 
                                                       >> 0xeU)))));
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
        ((((0x200U & vlSelf->top__DOT__datapath__DOT__ExMem[2U])
            ? vlSelf->top__DOT__datapath__DOT__datamem
           [(0x7fU & (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                      >> 5U))] : 0U) << 0x18U) | ((
                                                   ((0x200U 
                                                     & vlSelf->top__DOT__datapath__DOT__ExMem[2U])
                                                     ? 
                                                    vlSelf->top__DOT__datapath__DOT__datamem
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        ((vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                                          << 0x1bU) 
                                                         | (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                                            >> 5U))))]
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | ((((0x200U 
                                                        & vlSelf->top__DOT__datapath__DOT__ExMem[2U])
                                                        ? 
                                                       vlSelf->top__DOT__datapath__DOT__datamem
                                                       [
                                                       (0x7fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           ((vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                                             << 0x1bU) 
                                                            | (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                                               >> 5U))))]
                                                        : 0U) 
                                                      << 8U) 
                                                     | ((0x200U 
                                                         & vlSelf->top__DOT__datapath__DOT__ExMem[2U])
                                                         ? 
                                                        vlSelf->top__DOT__datapath__DOT__datamem
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(3U) 
                                                            + 
                                                            ((vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                                              << 0x1bU) 
                                                             | (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                                                >> 5U))))]
                                                         : 0U))));
    vlSelf->top__DOT__datapath__DOT__Alu1out = ((0x20000000U 
                                                 & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                 ? 
                                                ((0x10000000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                  ? 
                                                 (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                    << 0x12U) 
                                                   | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                      >> 0xeU)) 
                                                  + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                   ? 
                                                  (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                     << 0x12U) 
                                                    | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                       >> 0xeU)) 
                                                   + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                    ? 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                        >> 0xeU)) 
                                                    + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     ? 
                                                    (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                       << 0x12U) 
                                                      | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                         >> 0xeU)) 
                                                     >> vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     : 0U))))
                                                 : 
                                                ((0x10000000U 
                                                  & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                  ? 
                                                 ((0x8000000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                   ? 
                                                  ((0x4000000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     ? 
                                                    (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                       << 0x12U) 
                                                      | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                         >> 0xeU)) 
                                                     >> vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     : 0U)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     ? 
                                                    (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                       << 0x12U) 
                                                      | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                         >> 0xeU)) 
                                                     << vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                     : 0U))
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                    ? 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                        >> 0xeU)) 
                                                    & vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                        >> 0xeU)) 
                                                    | vlSelf->top__DOT__datapath__DOT__alu1in_b)))
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                   ? 
                                                  ((0x4000000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                    ? 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                        >> 0xeU)) 
                                                    ^ vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                        >> 0xeU)) 
                                                    * vlSelf->top__DOT__datapath__DOT__alu1in_b))
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelf->top__DOT__datapath__DOT__IdEx[3U])
                                                    ? 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                        >> 0xeU)) 
                                                    - vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                    : 
                                                   (((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                      << 0x12U) 
                                                     | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                        >> 0xeU)) 
                                                    + vlSelf->top__DOT__datapath__DOT__alu1in_b)))));
    vlSelf->top__DOT__PCSrc = 0U;
    if ((8U != (IData)(vlSelf->Op))) {
        if ((0x18U != (IData)(vlSelf->Op))) {
            if ((3U != (IData)(vlSelf->Op))) {
                if ((0x19U != (IData)(vlSelf->Op))) {
                    if ((0x31U != (IData)(vlSelf->Op))) {
                        vlSelf->top__DOT__PCSrc = (4U 
                                                   == (IData)(vlSelf->Op));
                    }
                }
            }
        }
        vlSelf->top__DOT__ALUOp = 0U;
        if ((0x18U == (IData)(vlSelf->Op))) {
            vlSelf->top__DOT__ALUOp = 2U;
        } else if ((3U == (IData)(vlSelf->Op))) {
            vlSelf->top__DOT__ALUOp = 0U;
        } else if ((0x19U != (IData)(vlSelf->Op))) {
            if ((0x31U != (IData)(vlSelf->Op))) {
                if ((4U != (IData)(vlSelf->Op))) {
                    vlSelf->top__DOT__ALUOp = 0U;
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
                vlSelf->top__DOT__ALUSrc = 0U;
            }
            vlSelf->top__DOT__MemWrite = 0U;
            if ((3U != (IData)(vlSelf->Op))) {
                if ((0x19U == (IData)(vlSelf->Op))) {
                    vlSelf->top__DOT__MemWrite = 1U;
                } else if ((0x31U != (IData)(vlSelf->Op))) {
                    if ((4U != (IData)(vlSelf->Op))) {
                        vlSelf->top__DOT__MemWrite = 0U;
                    }
                }
                vlSelf->top__DOT__MemRead = 0U;
                if ((0x19U != (IData)(vlSelf->Op))) {
                    if ((0x31U == (IData)(vlSelf->Op))) {
                        vlSelf->top__DOT__MemRead = 1U;
                    } else if ((4U != (IData)(vlSelf->Op))) {
                        vlSelf->top__DOT__MemRead = 0U;
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
                                                : 0U));
        vlSelf->top__DOT__RegWrite = 0U;
        vlSelf->top__DOT__RegWrite = ((0x31U == (IData)(vlSelf->Op)) 
                                      | (4U == (IData)(vlSelf->Op)));
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
    vlSelf->top__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PCSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemToReg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUOp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ALUSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__RbSelect = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__datapath__DOT__PC = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->top__DOT__datapath__DOT__instmem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__datapath__DOT__instmem_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->top__DOT__datapath__DOT__datamem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__datapath__DOT__datamem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__IfId = VL_RAND_RESET_Q(39);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__datapath__DOT__RF[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(128, vlSelf->top__DOT__datapath__DOT__IdEx);
    vlSelf->top__DOT__datapath__DOT__alu1in_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__datapath__DOT__Alu1out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(81, vlSelf->top__DOT__datapath__DOT__ExMem);
    VL_RAND_RESET_W(79, vlSelf->top__DOT__datapath__DOT__MemWb);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
