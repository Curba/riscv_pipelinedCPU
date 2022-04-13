// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+64,"clock", false,-1);
    tracep->declBit(c+65,"reset", false,-1);
    tracep->declBus(c+66,"Op", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+64,"clock", false,-1);
    tracep->declBit(c+65,"reset", false,-1);
    tracep->declBus(c+66,"Op", false,-1, 7,0);
    tracep->declBit(c+1,"MemRead", false,-1);
    tracep->declBit(c+2,"MemWrite", false,-1);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBus(c+4,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBus(c+6,"ALUOp", false,-1, 3,0);
    tracep->declBus(c+7,"ALUSrc", false,-1, 1,0);
    tracep->pushNamePrefix("ctr ");
    tracep->declBus(c+66,"Op", false,-1, 7,0);
    tracep->declBus(c+7,"AluSrc", false,-1, 1,0);
    tracep->declBus(c+6,"AluOp", false,-1, 3,0);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBit(c+1,"MemRead", false,-1);
    tracep->declBit(c+2,"MemWrite", false,-1);
    tracep->declBus(c+4,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datapath ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"reset", false,-1);
    tracep->declBit(c+1,"MemRead", false,-1);
    tracep->declBit(c+2,"MemWrite", false,-1);
    tracep->declBus(c+4,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBus(c+6,"ALUOp", false,-1, 3,0);
    tracep->declBus(c+7,"ALUSrc", false,-1, 1,0);
    tracep->declBus(c+66,"Op", false,-1, 7,0);
    tracep->declBus(c+8,"PC", false,-1, 6,0);
    tracep->declBus(c+67,"PCSTART", false,-1, 6,0);
    tracep->declBus(c+8,"instmem_address", false,-1, 6,0);
    tracep->declBus(c+9,"instmem_data", false,-1, 31,0);
    tracep->declBus(c+10,"datamem_address", false,-1, 6,0);
    tracep->declBus(c+11,"datamem_data", false,-1, 31,0);
    tracep->declQuad(c+12,"IfId", false,-1, 38,0);
    tracep->declBus(c+14,"JumpAddress", false,-1, 18,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+15+i*1,"RF", true,(i+0), 31,0);
    }
    tracep->declBus(c+47,"da", false,-1, 31,0);
    tracep->declBus(c+48,"db", false,-1, 31,0);
    tracep->declBus(c+49,"RF_WriteData", false,-1, 31,0);
    tracep->declBus(c+50,"RF_WriteAddr", false,-1, 31,0);
    tracep->declArray(c+51,"IdEx", false,-1, 127,0);
    tracep->declBus(c+55,"alu1in_a", false,-1, 31,0);
    tracep->declBus(c+56,"alu1in_b", false,-1, 31,0);
    tracep->declBus(c+57,"Alu1out", false,-1, 31,0);
    tracep->declArray(c+58,"ExMem", false,-1, 80,0);
    tracep->declArray(c+61,"MemWb", false,-1, 78,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->top__DOT__MemRead));
    tracep->fullBit(oldp+2,(vlSelf->top__DOT__MemWrite));
    tracep->fullBit(oldp+3,(vlSelf->top__DOT__PCSrc));
    tracep->fullCData(oldp+4,(vlSelf->top__DOT__MemToReg),2);
    tracep->fullBit(oldp+5,(vlSelf->top__DOT__RegWrite));
    tracep->fullCData(oldp+6,(vlSelf->top__DOT__ALUOp),4);
    tracep->fullCData(oldp+7,(vlSelf->top__DOT__ALUSrc),2);
    tracep->fullCData(oldp+8,(vlSelf->top__DOT__datapath__DOT__PC),7);
    tracep->fullIData(oldp+9,(vlSelf->top__DOT__datapath__DOT__instmem_data),32);
    tracep->fullCData(oldp+10,((0x7fU & (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                         >> 5U))),7);
    tracep->fullIData(oldp+11,(vlSelf->top__DOT__datapath__DOT__datamem_data),32);
    tracep->fullQData(oldp+12,(vlSelf->top__DOT__datapath__DOT__IfId),39);
    tracep->fullIData(oldp+14,((0x7ffffU & (IData)(
                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                    >> 0xfU)))),19);
    tracep->fullIData(oldp+15,(vlSelf->top__DOT__datapath__DOT__RF[0]),32);
    tracep->fullIData(oldp+16,(vlSelf->top__DOT__datapath__DOT__RF[1]),32);
    tracep->fullIData(oldp+17,(vlSelf->top__DOT__datapath__DOT__RF[2]),32);
    tracep->fullIData(oldp+18,(vlSelf->top__DOT__datapath__DOT__RF[3]),32);
    tracep->fullIData(oldp+19,(vlSelf->top__DOT__datapath__DOT__RF[4]),32);
    tracep->fullIData(oldp+20,(vlSelf->top__DOT__datapath__DOT__RF[5]),32);
    tracep->fullIData(oldp+21,(vlSelf->top__DOT__datapath__DOT__RF[6]),32);
    tracep->fullIData(oldp+22,(vlSelf->top__DOT__datapath__DOT__RF[7]),32);
    tracep->fullIData(oldp+23,(vlSelf->top__DOT__datapath__DOT__RF[8]),32);
    tracep->fullIData(oldp+24,(vlSelf->top__DOT__datapath__DOT__RF[9]),32);
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__datapath__DOT__RF[10]),32);
    tracep->fullIData(oldp+26,(vlSelf->top__DOT__datapath__DOT__RF[11]),32);
    tracep->fullIData(oldp+27,(vlSelf->top__DOT__datapath__DOT__RF[12]),32);
    tracep->fullIData(oldp+28,(vlSelf->top__DOT__datapath__DOT__RF[13]),32);
    tracep->fullIData(oldp+29,(vlSelf->top__DOT__datapath__DOT__RF[14]),32);
    tracep->fullIData(oldp+30,(vlSelf->top__DOT__datapath__DOT__RF[15]),32);
    tracep->fullIData(oldp+31,(vlSelf->top__DOT__datapath__DOT__RF[16]),32);
    tracep->fullIData(oldp+32,(vlSelf->top__DOT__datapath__DOT__RF[17]),32);
    tracep->fullIData(oldp+33,(vlSelf->top__DOT__datapath__DOT__RF[18]),32);
    tracep->fullIData(oldp+34,(vlSelf->top__DOT__datapath__DOT__RF[19]),32);
    tracep->fullIData(oldp+35,(vlSelf->top__DOT__datapath__DOT__RF[20]),32);
    tracep->fullIData(oldp+36,(vlSelf->top__DOT__datapath__DOT__RF[21]),32);
    tracep->fullIData(oldp+37,(vlSelf->top__DOT__datapath__DOT__RF[22]),32);
    tracep->fullIData(oldp+38,(vlSelf->top__DOT__datapath__DOT__RF[23]),32);
    tracep->fullIData(oldp+39,(vlSelf->top__DOT__datapath__DOT__RF[24]),32);
    tracep->fullIData(oldp+40,(vlSelf->top__DOT__datapath__DOT__RF[25]),32);
    tracep->fullIData(oldp+41,(vlSelf->top__DOT__datapath__DOT__RF[26]),32);
    tracep->fullIData(oldp+42,(vlSelf->top__DOT__datapath__DOT__RF[27]),32);
    tracep->fullIData(oldp+43,(vlSelf->top__DOT__datapath__DOT__RF[28]),32);
    tracep->fullIData(oldp+44,(vlSelf->top__DOT__datapath__DOT__RF[29]),32);
    tracep->fullIData(oldp+45,(vlSelf->top__DOT__datapath__DOT__RF[30]),32);
    tracep->fullIData(oldp+46,(vlSelf->top__DOT__datapath__DOT__RF[31]),32);
    tracep->fullIData(oldp+47,(vlSelf->top__DOT__datapath__DOT__RF
                               [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                  >> 0x1dU)))]),32);
    tracep->fullIData(oldp+48,(vlSelf->top__DOT__datapath__DOT__RF
                               [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                  >> 0x18U)))]),32);
    tracep->fullIData(oldp+49,(((0U == (IData)(vlSelf->top__DOT__MemToReg))
                                 ? ((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                     << 0x1bU) | (vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                                  >> 5U))
                                 : ((1U == (IData)(vlSelf->top__DOT__MemToReg))
                                     ? ((vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                         << 0x1bU) 
                                        | (vlSelf->top__DOT__datapath__DOT__MemWb[0U] 
                                           >> 5U)) : 
                                    ((2U == (IData)(vlSelf->top__DOT__MemToReg))
                                      ? (0x7fU & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                                  >> 8U))
                                      : ((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                          << 0x1bU) 
                                         | (vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                            >> 5U)))))),32);
    tracep->fullIData(oldp+50,((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])),32);
    tracep->fullWData(oldp+51,(vlSelf->top__DOT__datapath__DOT__IdEx),128);
    tracep->fullIData(oldp+55,(((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                 << 0x12U) | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                              >> 0xeU))),32);
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__datapath__DOT__alu1in_b),32);
    tracep->fullIData(oldp+57,(vlSelf->top__DOT__datapath__DOT__Alu1out),32);
    tracep->fullWData(oldp+58,(vlSelf->top__DOT__datapath__DOT__ExMem),81);
    tracep->fullWData(oldp+61,(vlSelf->top__DOT__datapath__DOT__MemWb),79);
    tracep->fullBit(oldp+64,(vlSelf->clock));
    tracep->fullBit(oldp+65,(vlSelf->reset));
    tracep->fullCData(oldp+66,(vlSelf->Op),8);
    tracep->fullCData(oldp+67,(0U),7);
}
