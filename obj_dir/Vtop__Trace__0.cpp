// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->top__DOT__MemRead));
        tracep->chgBit(oldp+1,(vlSelf->top__DOT__MemWrite));
        tracep->chgBit(oldp+2,(vlSelf->top__DOT__PCSrc));
        tracep->chgCData(oldp+3,(vlSelf->top__DOT__MemToReg),2);
        tracep->chgBit(oldp+4,(vlSelf->top__DOT__RegWrite));
        tracep->chgCData(oldp+5,(vlSelf->top__DOT__ALUOp),4);
        tracep->chgCData(oldp+6,(vlSelf->top__DOT__ALUSrc),2);
        tracep->chgCData(oldp+7,(vlSelf->top__DOT__datapath__DOT__PC),7);
        tracep->chgIData(oldp+8,(vlSelf->top__DOT__datapath__DOT__instmem_data),32);
        tracep->chgCData(oldp+9,((0x7fU & (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                           >> 5U))),7);
        tracep->chgIData(oldp+10,(vlSelf->top__DOT__datapath__DOT__datamem_data),32);
        tracep->chgQData(oldp+11,(vlSelf->top__DOT__datapath__DOT__IfId),39);
        tracep->chgIData(oldp+13,((0x7ffffU & (IData)(
                                                      (vlSelf->top__DOT__datapath__DOT__IfId 
                                                       >> 0xfU)))),19);
        tracep->chgIData(oldp+14,(vlSelf->top__DOT__datapath__DOT__RF[0]),32);
        tracep->chgIData(oldp+15,(vlSelf->top__DOT__datapath__DOT__RF[1]),32);
        tracep->chgIData(oldp+16,(vlSelf->top__DOT__datapath__DOT__RF[2]),32);
        tracep->chgIData(oldp+17,(vlSelf->top__DOT__datapath__DOT__RF[3]),32);
        tracep->chgIData(oldp+18,(vlSelf->top__DOT__datapath__DOT__RF[4]),32);
        tracep->chgIData(oldp+19,(vlSelf->top__DOT__datapath__DOT__RF[5]),32);
        tracep->chgIData(oldp+20,(vlSelf->top__DOT__datapath__DOT__RF[6]),32);
        tracep->chgIData(oldp+21,(vlSelf->top__DOT__datapath__DOT__RF[7]),32);
        tracep->chgIData(oldp+22,(vlSelf->top__DOT__datapath__DOT__RF[8]),32);
        tracep->chgIData(oldp+23,(vlSelf->top__DOT__datapath__DOT__RF[9]),32);
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__datapath__DOT__RF[10]),32);
        tracep->chgIData(oldp+25,(vlSelf->top__DOT__datapath__DOT__RF[11]),32);
        tracep->chgIData(oldp+26,(vlSelf->top__DOT__datapath__DOT__RF[12]),32);
        tracep->chgIData(oldp+27,(vlSelf->top__DOT__datapath__DOT__RF[13]),32);
        tracep->chgIData(oldp+28,(vlSelf->top__DOT__datapath__DOT__RF[14]),32);
        tracep->chgIData(oldp+29,(vlSelf->top__DOT__datapath__DOT__RF[15]),32);
        tracep->chgIData(oldp+30,(vlSelf->top__DOT__datapath__DOT__RF[16]),32);
        tracep->chgIData(oldp+31,(vlSelf->top__DOT__datapath__DOT__RF[17]),32);
        tracep->chgIData(oldp+32,(vlSelf->top__DOT__datapath__DOT__RF[18]),32);
        tracep->chgIData(oldp+33,(vlSelf->top__DOT__datapath__DOT__RF[19]),32);
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__datapath__DOT__RF[20]),32);
        tracep->chgIData(oldp+35,(vlSelf->top__DOT__datapath__DOT__RF[21]),32);
        tracep->chgIData(oldp+36,(vlSelf->top__DOT__datapath__DOT__RF[22]),32);
        tracep->chgIData(oldp+37,(vlSelf->top__DOT__datapath__DOT__RF[23]),32);
        tracep->chgIData(oldp+38,(vlSelf->top__DOT__datapath__DOT__RF[24]),32);
        tracep->chgIData(oldp+39,(vlSelf->top__DOT__datapath__DOT__RF[25]),32);
        tracep->chgIData(oldp+40,(vlSelf->top__DOT__datapath__DOT__RF[26]),32);
        tracep->chgIData(oldp+41,(vlSelf->top__DOT__datapath__DOT__RF[27]),32);
        tracep->chgIData(oldp+42,(vlSelf->top__DOT__datapath__DOT__RF[28]),32);
        tracep->chgIData(oldp+43,(vlSelf->top__DOT__datapath__DOT__RF[29]),32);
        tracep->chgIData(oldp+44,(vlSelf->top__DOT__datapath__DOT__RF[30]),32);
        tracep->chgIData(oldp+45,(vlSelf->top__DOT__datapath__DOT__RF[31]),32);
        tracep->chgIData(oldp+46,(vlSelf->top__DOT__datapath__DOT__RF
                                  [(0x1fU & (IData)(
                                                    (vlSelf->top__DOT__datapath__DOT__IfId 
                                                     >> 0x1dU)))]),32);
        tracep->chgIData(oldp+47,(vlSelf->top__DOT__datapath__DOT__RF
                                  [(0x1fU & (IData)(
                                                    (vlSelf->top__DOT__datapath__DOT__IfId 
                                                     >> 0x18U)))]),32);
        tracep->chgIData(oldp+48,(((0U == (3U & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                                 >> 5U)))
                                    ? ((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                        << 0x1bU) | 
                                       (vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                        >> 5U)) : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                                        >> 5U)))
                                                    ? 
                                                   ((vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                                     << 0x1bU) 
                                                    | (vlSelf->top__DOT__datapath__DOT__MemWb[0U] 
                                                       >> 5U))
                                                    : 
                                                   ((2U 
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
                                                        >> 5U)))))),32);
        tracep->chgIData(oldp+49,((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])),32);
        tracep->chgWData(oldp+50,(vlSelf->top__DOT__datapath__DOT__IdEx),128);
        tracep->chgIData(oldp+54,(((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                    << 0x12U) | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                 >> 0xeU))),32);
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__datapath__DOT__alu1in_b),32);
        tracep->chgIData(oldp+56,(vlSelf->top__DOT__datapath__DOT__Alu1out),32);
        tracep->chgWData(oldp+57,(vlSelf->top__DOT__datapath__DOT__ExMem),81);
        tracep->chgWData(oldp+60,(vlSelf->top__DOT__datapath__DOT__MemWb),79);
    }
    tracep->chgBit(oldp+63,(vlSelf->clock));
    tracep->chgBit(oldp+64,(vlSelf->reset));
    tracep->chgCData(oldp+65,(vlSelf->Op),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
