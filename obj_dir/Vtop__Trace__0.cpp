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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__unnamedblk1__DOT__i),32);
        tracep->chgIData(oldp+1,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[0]),32);
        tracep->chgIData(oldp+2,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[1]),32);
        tracep->chgIData(oldp+3,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[2]),32);
        tracep->chgIData(oldp+4,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[3]),32);
        tracep->chgIData(oldp+5,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[4]),32);
        tracep->chgIData(oldp+6,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[5]),32);
        tracep->chgIData(oldp+7,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[6]),32);
        tracep->chgIData(oldp+8,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[7]),32);
        tracep->chgIData(oldp+9,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+10,(vlSelf->top__DOT__MemRead),4);
        tracep->chgCData(oldp+11,(vlSelf->top__DOT__MemWrite),4);
        tracep->chgBit(oldp+12,(vlSelf->top__DOT__PCSrc));
        tracep->chgCData(oldp+13,(vlSelf->top__DOT__MemToReg),2);
        tracep->chgBit(oldp+14,(vlSelf->top__DOT__RegWrite));
        tracep->chgCData(oldp+15,(vlSelf->top__DOT__ALUOp),4);
        tracep->chgCData(oldp+16,(vlSelf->top__DOT__ALUSrc),2);
        tracep->chgBit(oldp+17,(vlSelf->top__DOT__ALUOp2));
        tracep->chgBit(oldp+18,(vlSelf->top__DOT__RbSelect));
        tracep->chgBit(oldp+19,(vlSelf->top__DOT__MemSignExtend));
        tracep->chgCData(oldp+20,(vlSelf->top__DOT__branch_flag),2);
        tracep->chgBit(oldp+21,(vlSelf->top__DOT__jump_flag));
        tracep->chgBit(oldp+22,(vlSelf->top__DOT__double_jump_flag));
        tracep->chgSData(oldp+23,(vlSelf->top__DOT__datapath__DOT__PC),12);
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read
                                  [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                                          >> 2U))]),32);
        tracep->chgBit(oldp+25,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready));
        tracep->chgBit(oldp+26,(((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                                 >> 5U)))
                                  ? 1U : 0U)));
        tracep->chgIData(oldp+27,(vlSelf->top__DOT__dcache_writeData),32);
        tracep->chgCData(oldp+28,((0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                           >> 1U))),4);
        tracep->chgIData(oldp+29,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu),32);
        tracep->chgBit(oldp+30,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready));
        tracep->chgSData(oldp+31,(vlSelf->top__DOT__datapath__DOT__datamem_address),12);
        tracep->chgIData(oldp+32,(vlSelf->top__DOT__datapath__DOT__datamem_data),32);
        tracep->chgIData(oldp+33,((((0U != (0x1fU & 
                                            vlSelf->top__DOT__datapath__DOT__MemWb[0U])) 
                                    & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                            >> 0x17U))))
                                    ? ((vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                        << 0x1bU) | 
                                       (vlSelf->top__DOT__datapath__DOT__MemWb[0U] 
                                        >> 5U)) : (
                                                   (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                                      >> 0x1cU)))),32);
        tracep->chgCData(oldp+34,(vlSelf->top__DOT__datapath__DOT__ForwardingA),2);
        tracep->chgCData(oldp+35,(vlSelf->top__DOT__datapath__DOT__ForwardingB),2);
        tracep->chgBit(oldp+36,(((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                    >> 7U) & (0U != 
                                              (0x1fU 
                                               & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                                  & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                               >> 0x17U)) 
                                     != (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                         >> 0x1bU))) 
                                 & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                    == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                 >> 0x12U))))));
        tracep->chgBit(oldp+37,(((0U != (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])) 
                                 & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                    == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                 >> 0x17U))))));
        tracep->chgBit(oldp+38,(vlSelf->top__DOT__datapath__DOT__flush));
        tracep->chgCData(oldp+39,((3U & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                         >> 0x10U))),2);
        tracep->chgCData(oldp+40,((3U & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                         >> 0xfU))),2);
        tracep->chgQData(oldp+41,(vlSelf->top__DOT__datapath__DOT__IfId),44);
        tracep->chgIData(oldp+43,((0x7ffffU & (IData)(
                                                      (vlSelf->top__DOT__datapath__DOT__IfId 
                                                       >> 0x14U)))),19);
        tracep->chgIData(oldp+44,(vlSelf->top__DOT__datapath__DOT__RF_WriteData),32);
        tracep->chgIData(oldp+45,((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])),32);
        tracep->chgBit(oldp+46,((((1U == ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                           << 4U) | 
                                          (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                           >> 0x1cU))) 
                                  & vlSelf->top__DOT__datapath__DOT__ExMem[0U])
                                  ? 1U : 0U)));
        tracep->chgWData(oldp+47,(vlSelf->top__DOT__datapath__DOT__IdEx),202);
        tracep->chgIData(oldp+54,(vlSelf->top__DOT__datapath__DOT__alu1in_a),32);
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__datapath__DOT__alu1in_b),32);
        tracep->chgIData(oldp+56,(((0U == (3U & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                 >> 0x19U)))
                                    ? ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                        << 4U) | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                  >> 0x1cU))
                                    : ((1U == (3U & 
                                               (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                >> 0x19U)))
                                        ? ((vlSelf->top__DOT__datapath__DOT__IdEx[1U] 
                                            << 4U) 
                                           | (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                              >> 0x1cU))
                                        : ((2U == (3U 
                                                   & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                      >> 0x19U)))
                                            ? (0x1fU 
                                               & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                  >> 0x12U))
                                            : ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                << 4U) 
                                               | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                  >> 0x1cU)))))),32);
        tracep->chgIData(oldp+57,(vlSelf->top__DOT__datapath__DOT__Alu1out),32);
        tracep->chgBit(oldp+58,(vlSelf->top__DOT__datapath__DOT__zero_flag));
        tracep->chgCData(oldp+59,((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                            >> 0x17U))),5);
        tracep->chgCData(oldp+60,((0x1fU & (vlSelf->top__DOT__datapath__DOT__IdEx[6U] 
                                            >> 5U))),5);
        tracep->chgCData(oldp+61,((0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U])),5);
        tracep->chgBit(oldp+62,((1U & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                       >> 7U))));
        tracep->chgCData(oldp+63,((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])),5);
        tracep->chgWData(oldp+64,(vlSelf->top__DOT__datapath__DOT__ExMem),149);
        tracep->chgIData(oldp+69,(((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                    << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                              >> 0x1cU))),32);
        tracep->chgIData(oldp+70,((((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                       >> 7U) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                                     & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                  >> 0x17U)) 
                                        != (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                            >> 0x1bU))) 
                                    & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                            >> 0x12U))))
                                    ? vlSelf->top__DOT__datapath__DOT__RF_WriteData
                                    : ((vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                        << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                  >> 0x1cU)))),32);
        tracep->chgIData(oldp+71,(vlSelf->top__DOT__datapath__DOT__Alu2out),32);
        tracep->chgBit(oldp+72,(vlSelf->top__DOT__datapath__DOT__branch_src));
        tracep->chgBit(oldp+73,(((IData)((0x10000U 
                                          == (0x38000U 
                                              & vlSelf->top__DOT__datapath__DOT__ExMem[0U])))
                                  ? 1U : 0U)));
        tracep->chgBit(oldp+74,(((IData)((0x28000U 
                                          == (0x38000U 
                                              & vlSelf->top__DOT__datapath__DOT__ExMem[0U])))
                                  ? 1U : 0U)));
        tracep->chgWData(oldp+75,(vlSelf->top__DOT__datapath__DOT__MemWb),84);
        tracep->chgIData(oldp+78,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[0]),32);
        tracep->chgIData(oldp+79,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[1]),32);
        tracep->chgIData(oldp+80,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[2]),32);
        tracep->chgIData(oldp+81,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[3]),32);
        tracep->chgIData(oldp+82,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[4]),32);
        tracep->chgIData(oldp+83,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[5]),32);
        tracep->chgIData(oldp+84,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[6]),32);
        tracep->chgIData(oldp+85,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[7]),32);
        tracep->chgSData(oldp+86,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address),12);
        tracep->chgIData(oldp+87,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[0]),32);
        tracep->chgIData(oldp+88,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[1]),32);
        tracep->chgIData(oldp+89,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[2]),32);
        tracep->chgIData(oldp+90,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[3]),32);
        tracep->chgIData(oldp+91,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[4]),32);
        tracep->chgIData(oldp+92,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[5]),32);
        tracep->chgIData(oldp+93,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[6]),32);
        tracep->chgIData(oldp+94,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[7]),32);
        tracep->chgIData(oldp+95,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[0]),32);
        tracep->chgIData(oldp+96,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[1]),32);
        tracep->chgIData(oldp+97,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[2]),32);
        tracep->chgIData(oldp+98,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[3]),32);
        tracep->chgIData(oldp+99,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[4]),32);
        tracep->chgIData(oldp+100,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[5]),32);
        tracep->chgIData(oldp+101,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[6]),32);
        tracep->chgIData(oldp+102,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[7]),32);
        tracep->chgIData(oldp+103,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[0]),32);
        tracep->chgIData(oldp+104,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[1]),32);
        tracep->chgIData(oldp+105,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[2]),32);
        tracep->chgIData(oldp+106,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[3]),32);
        tracep->chgIData(oldp+107,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[4]),32);
        tracep->chgIData(oldp+108,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[5]),32);
        tracep->chgIData(oldp+109,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[6]),32);
        tracep->chgIData(oldp+110,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[7]),32);
        tracep->chgIData(oldp+111,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[0]),32);
        tracep->chgIData(oldp+112,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[1]),32);
        tracep->chgIData(oldp+113,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[2]),32);
        tracep->chgIData(oldp+114,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[3]),32);
        tracep->chgIData(oldp+115,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[4]),32);
        tracep->chgIData(oldp+116,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[5]),32);
        tracep->chgIData(oldp+117,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[6]),32);
        tracep->chgIData(oldp+118,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[7]),32);
        tracep->chgCData(oldp+119,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate),3);
        tracep->chgBit(oldp+120,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read));
        tracep->chgBit(oldp+121,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read));
        tracep->chgCData(oldp+122,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read),3);
        tracep->chgBit(oldp+123,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write));
        tracep->chgBit(oldp+124,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write));
        tracep->chgCData(oldp+125,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write),3);
        tracep->chgBit(oldp+126,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we));
        tracep->chgIData(oldp+127,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[0]),32);
        tracep->chgIData(oldp+128,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[1]),32);
        tracep->chgIData(oldp+129,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[2]),32);
        tracep->chgIData(oldp+130,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[3]),32);
        tracep->chgIData(oldp+131,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[4]),32);
        tracep->chgIData(oldp+132,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[5]),32);
        tracep->chgIData(oldp+133,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[6]),32);
        tracep->chgIData(oldp+134,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[7]),32);
        tracep->chgIData(oldp+135,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[0]),32);
        tracep->chgIData(oldp+136,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[1]),32);
        tracep->chgIData(oldp+137,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[2]),32);
        tracep->chgIData(oldp+138,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[3]),32);
        tracep->chgIData(oldp+139,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[4]),32);
        tracep->chgIData(oldp+140,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[5]),32);
        tracep->chgIData(oldp+141,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[6]),32);
        tracep->chgIData(oldp+142,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[7]),32);
        tracep->chgIData(oldp+143,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp),32);
        tracep->chgIData(oldp+144,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[0]),32);
        tracep->chgIData(oldp+145,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[1]),32);
        tracep->chgIData(oldp+146,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[2]),32);
        tracep->chgIData(oldp+147,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[3]),32);
        tracep->chgIData(oldp+148,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[4]),32);
        tracep->chgIData(oldp+149,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[5]),32);
        tracep->chgIData(oldp+150,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[6]),32);
        tracep->chgIData(oldp+151,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[7]),32);
        tracep->chgBit(oldp+152,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[0]));
        tracep->chgBit(oldp+153,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[1]));
        tracep->chgBit(oldp+154,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[2]));
        tracep->chgBit(oldp+155,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[3]));
        tracep->chgBit(oldp+156,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[4]));
        tracep->chgBit(oldp+157,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[5]));
        tracep->chgBit(oldp+158,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[6]));
        tracep->chgBit(oldp+159,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[7]));
        tracep->chgBit(oldp+160,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[8]));
        tracep->chgBit(oldp+161,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[9]));
        tracep->chgBit(oldp+162,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[10]));
        tracep->chgBit(oldp+163,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[11]));
        tracep->chgBit(oldp+164,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[12]));
        tracep->chgBit(oldp+165,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[13]));
        tracep->chgBit(oldp+166,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[14]));
        tracep->chgBit(oldp+167,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[15]));
        tracep->chgBit(oldp+168,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[0]));
        tracep->chgBit(oldp+169,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[1]));
        tracep->chgBit(oldp+170,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[2]));
        tracep->chgBit(oldp+171,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[3]));
        tracep->chgBit(oldp+172,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[4]));
        tracep->chgBit(oldp+173,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[5]));
        tracep->chgBit(oldp+174,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[6]));
        tracep->chgBit(oldp+175,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[7]));
        tracep->chgBit(oldp+176,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[8]));
        tracep->chgBit(oldp+177,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[9]));
        tracep->chgBit(oldp+178,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[10]));
        tracep->chgBit(oldp+179,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[11]));
        tracep->chgBit(oldp+180,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[12]));
        tracep->chgBit(oldp+181,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[13]));
        tracep->chgBit(oldp+182,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[14]));
        tracep->chgBit(oldp+183,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[15]));
        tracep->chgCData(oldp+184,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[0]),3);
        tracep->chgCData(oldp+185,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[1]),3);
        tracep->chgCData(oldp+186,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[2]),3);
        tracep->chgCData(oldp+187,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[3]),3);
        tracep->chgCData(oldp+188,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[4]),3);
        tracep->chgCData(oldp+189,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[5]),3);
        tracep->chgCData(oldp+190,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[6]),3);
        tracep->chgCData(oldp+191,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[7]),3);
        tracep->chgCData(oldp+192,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[8]),3);
        tracep->chgCData(oldp+193,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[9]),3);
        tracep->chgCData(oldp+194,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[10]),3);
        tracep->chgCData(oldp+195,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[11]),3);
        tracep->chgCData(oldp+196,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[12]),3);
        tracep->chgCData(oldp+197,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[13]),3);
        tracep->chgCData(oldp+198,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[14]),3);
        tracep->chgCData(oldp+199,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[15]),3);
        tracep->chgIData(oldp+200,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[0]),32);
        tracep->chgIData(oldp+201,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[1]),32);
        tracep->chgIData(oldp+202,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[2]),32);
        tracep->chgIData(oldp+203,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[3]),32);
        tracep->chgIData(oldp+204,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[4]),32);
        tracep->chgIData(oldp+205,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[5]),32);
        tracep->chgIData(oldp+206,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[6]),32);
        tracep->chgIData(oldp+207,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[7]),32);
        tracep->chgIData(oldp+208,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[0]),32);
        tracep->chgIData(oldp+209,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[1]),32);
        tracep->chgIData(oldp+210,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[2]),32);
        tracep->chgIData(oldp+211,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[3]),32);
        tracep->chgIData(oldp+212,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[4]),32);
        tracep->chgIData(oldp+213,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[5]),32);
        tracep->chgIData(oldp+214,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[6]),32);
        tracep->chgIData(oldp+215,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[7]),32);
        tracep->chgIData(oldp+216,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[0]),32);
        tracep->chgIData(oldp+217,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[1]),32);
        tracep->chgIData(oldp+218,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[2]),32);
        tracep->chgIData(oldp+219,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[3]),32);
        tracep->chgIData(oldp+220,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[4]),32);
        tracep->chgIData(oldp+221,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[5]),32);
        tracep->chgIData(oldp+222,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[6]),32);
        tracep->chgIData(oldp+223,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[7]),32);
        tracep->chgIData(oldp+224,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[0]),32);
        tracep->chgIData(oldp+225,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[1]),32);
        tracep->chgIData(oldp+226,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[2]),32);
        tracep->chgIData(oldp+227,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[3]),32);
        tracep->chgIData(oldp+228,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[4]),32);
        tracep->chgIData(oldp+229,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[5]),32);
        tracep->chgIData(oldp+230,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[6]),32);
        tracep->chgIData(oldp+231,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[7]),32);
        tracep->chgIData(oldp+232,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[0]),32);
        tracep->chgIData(oldp+233,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[1]),32);
        tracep->chgIData(oldp+234,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[2]),32);
        tracep->chgIData(oldp+235,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[3]),32);
        tracep->chgIData(oldp+236,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[4]),32);
        tracep->chgIData(oldp+237,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[5]),32);
        tracep->chgIData(oldp+238,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[6]),32);
        tracep->chgIData(oldp+239,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[7]),32);
        tracep->chgIData(oldp+240,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[0]),32);
        tracep->chgIData(oldp+241,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[1]),32);
        tracep->chgIData(oldp+242,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[2]),32);
        tracep->chgIData(oldp+243,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[3]),32);
        tracep->chgIData(oldp+244,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[4]),32);
        tracep->chgIData(oldp+245,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[5]),32);
        tracep->chgIData(oldp+246,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[6]),32);
        tracep->chgIData(oldp+247,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[7]),32);
        tracep->chgIData(oldp+248,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_to_mem),32);
        tracep->chgSData(oldp+249,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem),12);
        tracep->chgBit(oldp+250,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                >> 6U)))));
        tracep->chgBit(oldp+251,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                                                >> 5U)))));
        tracep->chgCData(oldp+252,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count),2);
        tracep->chgQData(oldp+253,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line),35);
        tracep->chgQData(oldp+255,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line),39);
        tracep->chgBit(oldp+257,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                                                >> 0x22U)))));
        tracep->chgBit(oldp+258,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                >> 0x26U)))));
        tracep->chgIData(oldp+259,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[0]),32);
        tracep->chgIData(oldp+260,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[1]),32);
        tracep->chgIData(oldp+261,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[2]),32);
        tracep->chgIData(oldp+262,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[3]),32);
        tracep->chgIData(oldp+263,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[4]),32);
        tracep->chgIData(oldp+264,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[5]),32);
        tracep->chgIData(oldp+265,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[6]),32);
        tracep->chgIData(oldp+266,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[7]),32);
        tracep->chgIData(oldp+267,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[0]),32);
        tracep->chgIData(oldp+268,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[1]),32);
        tracep->chgIData(oldp+269,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[2]),32);
        tracep->chgIData(oldp+270,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[3]),32);
        tracep->chgIData(oldp+271,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[4]),32);
        tracep->chgIData(oldp+272,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[5]),32);
        tracep->chgIData(oldp+273,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[6]),32);
        tracep->chgIData(oldp+274,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[7]),32);
        tracep->chgIData(oldp+275,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_to_mem),32);
        tracep->chgSData(oldp+276,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem),12);
        tracep->chgBit(oldp+277,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                >> 6U)))));
        tracep->chgBit(oldp+278,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                                                >> 5U)))));
        tracep->chgCData(oldp+279,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count),2);
        tracep->chgQData(oldp+280,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line),35);
        tracep->chgQData(oldp+282,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line),39);
        tracep->chgBit(oldp+284,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                                                >> 0x22U)))));
        tracep->chgBit(oldp+285,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                                >> 0x26U)))));
        tracep->chgIData(oldp+286,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[0]),32);
        tracep->chgIData(oldp+287,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[1]),32);
        tracep->chgIData(oldp+288,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[2]),32);
        tracep->chgIData(oldp+289,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[3]),32);
        tracep->chgIData(oldp+290,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[4]),32);
        tracep->chgIData(oldp+291,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[5]),32);
        tracep->chgIData(oldp+292,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[6]),32);
        tracep->chgIData(oldp+293,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[7]),32);
        tracep->chgCData(oldp+294,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate),2);
        tracep->chgBit(oldp+295,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read));
        tracep->chgCData(oldp+296,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read),4);
        tracep->chgBit(oldp+297,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write));
        tracep->chgCData(oldp+298,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write),4);
        tracep->chgCData(oldp+299,((7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                                          >> 5U))),3);
        tracep->chgBit(oldp+300,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we));
        tracep->chgIData(oldp+301,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[0]),32);
        tracep->chgIData(oldp+302,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[1]),32);
        tracep->chgIData(oldp+303,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[2]),32);
        tracep->chgIData(oldp+304,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[3]),32);
        tracep->chgIData(oldp+305,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[4]),32);
        tracep->chgIData(oldp+306,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[5]),32);
        tracep->chgIData(oldp+307,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[6]),32);
        tracep->chgIData(oldp+308,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[7]),32);
        tracep->chgBit(oldp+309,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__synchronized_reset));
        tracep->chgIData(oldp+310,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[0]),32);
        tracep->chgIData(oldp+311,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[1]),32);
        tracep->chgIData(oldp+312,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[2]),32);
        tracep->chgIData(oldp+313,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[3]),32);
        tracep->chgIData(oldp+314,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[4]),32);
        tracep->chgIData(oldp+315,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[5]),32);
        tracep->chgIData(oldp+316,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[6]),32);
        tracep->chgIData(oldp+317,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[7]),32);
        tracep->chgBit(oldp+318,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[0]));
        tracep->chgBit(oldp+319,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[1]));
        tracep->chgBit(oldp+320,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[2]));
        tracep->chgBit(oldp+321,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[3]));
        tracep->chgBit(oldp+322,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[4]));
        tracep->chgBit(oldp+323,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[5]));
        tracep->chgBit(oldp+324,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[6]));
        tracep->chgBit(oldp+325,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[7]));
        tracep->chgCData(oldp+326,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[0]),4);
        tracep->chgCData(oldp+327,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[1]),4);
        tracep->chgCData(oldp+328,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[2]),4);
        tracep->chgCData(oldp+329,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[3]),4);
        tracep->chgCData(oldp+330,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[4]),4);
        tracep->chgCData(oldp+331,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[5]),4);
        tracep->chgCData(oldp+332,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[6]),4);
        tracep->chgCData(oldp+333,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[7]),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+334,(vlSelf->top__DOT__datapath__DOT__RF[0]),32);
        tracep->chgIData(oldp+335,(vlSelf->top__DOT__datapath__DOT__RF[1]),32);
        tracep->chgIData(oldp+336,(vlSelf->top__DOT__datapath__DOT__RF[2]),32);
        tracep->chgIData(oldp+337,(vlSelf->top__DOT__datapath__DOT__RF[3]),32);
        tracep->chgIData(oldp+338,(vlSelf->top__DOT__datapath__DOT__RF[4]),32);
        tracep->chgIData(oldp+339,(vlSelf->top__DOT__datapath__DOT__RF[5]),32);
        tracep->chgIData(oldp+340,(vlSelf->top__DOT__datapath__DOT__RF[6]),32);
        tracep->chgIData(oldp+341,(vlSelf->top__DOT__datapath__DOT__RF[7]),32);
        tracep->chgIData(oldp+342,(vlSelf->top__DOT__datapath__DOT__RF[8]),32);
        tracep->chgIData(oldp+343,(vlSelf->top__DOT__datapath__DOT__RF[9]),32);
        tracep->chgIData(oldp+344,(vlSelf->top__DOT__datapath__DOT__RF[10]),32);
        tracep->chgIData(oldp+345,(vlSelf->top__DOT__datapath__DOT__RF[11]),32);
        tracep->chgIData(oldp+346,(vlSelf->top__DOT__datapath__DOT__RF[12]),32);
        tracep->chgIData(oldp+347,(vlSelf->top__DOT__datapath__DOT__RF[13]),32);
        tracep->chgIData(oldp+348,(vlSelf->top__DOT__datapath__DOT__RF[14]),32);
        tracep->chgIData(oldp+349,(vlSelf->top__DOT__datapath__DOT__RF[15]),32);
        tracep->chgIData(oldp+350,(vlSelf->top__DOT__datapath__DOT__RF[16]),32);
        tracep->chgIData(oldp+351,(vlSelf->top__DOT__datapath__DOT__RF[17]),32);
        tracep->chgIData(oldp+352,(vlSelf->top__DOT__datapath__DOT__RF[18]),32);
        tracep->chgIData(oldp+353,(vlSelf->top__DOT__datapath__DOT__RF[19]),32);
        tracep->chgIData(oldp+354,(vlSelf->top__DOT__datapath__DOT__RF[20]),32);
        tracep->chgIData(oldp+355,(vlSelf->top__DOT__datapath__DOT__RF[21]),32);
        tracep->chgIData(oldp+356,(vlSelf->top__DOT__datapath__DOT__RF[22]),32);
        tracep->chgIData(oldp+357,(vlSelf->top__DOT__datapath__DOT__RF[23]),32);
        tracep->chgIData(oldp+358,(vlSelf->top__DOT__datapath__DOT__RF[24]),32);
        tracep->chgIData(oldp+359,(vlSelf->top__DOT__datapath__DOT__RF[25]),32);
        tracep->chgIData(oldp+360,(vlSelf->top__DOT__datapath__DOT__RF[26]),32);
        tracep->chgIData(oldp+361,(vlSelf->top__DOT__datapath__DOT__RF[27]),32);
        tracep->chgIData(oldp+362,(vlSelf->top__DOT__datapath__DOT__RF[28]),32);
        tracep->chgIData(oldp+363,(vlSelf->top__DOT__datapath__DOT__RF[29]),32);
        tracep->chgIData(oldp+364,(vlSelf->top__DOT__datapath__DOT__RF[30]),32);
        tracep->chgIData(oldp+365,(vlSelf->top__DOT__datapath__DOT__RF[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+366,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid));
        tracep->chgBit(oldp+367,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw));
        tracep->chgCData(oldp+368,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate),3);
        tracep->chgIData(oldp+369,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[0]),32);
        tracep->chgIData(oldp+370,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[1]),32);
        tracep->chgIData(oldp+371,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[2]),32);
        tracep->chgIData(oldp+372,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[3]),32);
        tracep->chgIData(oldp+373,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[4]),32);
        tracep->chgIData(oldp+374,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[5]),32);
        tracep->chgIData(oldp+375,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[6]),32);
        tracep->chgIData(oldp+376,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[7]),32);
        tracep->chgBit(oldp+377,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we));
        tracep->chgIData(oldp+378,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[0]),32);
        tracep->chgIData(oldp+379,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[1]),32);
        tracep->chgIData(oldp+380,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[2]),32);
        tracep->chgIData(oldp+381,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[3]),32);
        tracep->chgIData(oldp+382,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[4]),32);
        tracep->chgIData(oldp+383,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[5]),32);
        tracep->chgIData(oldp+384,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[6]),32);
        tracep->chgIData(oldp+385,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[7]),32);
        tracep->chgBit(oldp+386,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_read_enable));
        tracep->chgBit(oldp+387,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_write_enable));
        tracep->chgCData(oldp+388,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate),2);
        tracep->chgIData(oldp+389,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[0]),32);
        tracep->chgIData(oldp+390,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[1]),32);
        tracep->chgIData(oldp+391,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[2]),32);
        tracep->chgIData(oldp+392,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[3]),32);
        tracep->chgIData(oldp+393,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[4]),32);
        tracep->chgIData(oldp+394,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[5]),32);
        tracep->chgIData(oldp+395,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[6]),32);
        tracep->chgIData(oldp+396,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[7]),32);
        tracep->chgBit(oldp+397,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_we));
        tracep->chgIData(oldp+398,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[0]),32);
        tracep->chgIData(oldp+399,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[1]),32);
        tracep->chgIData(oldp+400,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[2]),32);
        tracep->chgIData(oldp+401,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[3]),32);
        tracep->chgIData(oldp+402,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[4]),32);
        tracep->chgIData(oldp+403,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[5]),32);
        tracep->chgIData(oldp+404,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[6]),32);
        tracep->chgIData(oldp+405,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[7]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+406,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid));
        tracep->chgBit(oldp+407,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge));
        tracep->chgBit(oldp+408,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge));
        tracep->chgIData(oldp+409,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin),32);
        tracep->chgSData(oldp+410,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset),12);
        tracep->chgCData(oldp+411,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count),3);
        tracep->chgIData(oldp+412,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin),32);
        tracep->chgSData(oldp+413,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset),12);
        tracep->chgCData(oldp+414,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        tracep->chgBit(oldp+415,(vlSelf->top__DOT__transfer_in_progress));
        tracep->chgBit(oldp+416,(vlSelf->top__DOT__datapath__DOT__stall_flag));
        tracep->chgBit(oldp+417,(vlSelf->top__DOT__datapath__DOT__PCenable));
    }
    tracep->chgBit(oldp+418,(vlSelf->clock));
    tracep->chgBit(oldp+419,(vlSelf->reset));
    tracep->chgCData(oldp+420,(vlSelf->Op),8);
    tracep->chgBit(oldp+421,((1U & (~ (((((0U != (0xfU 
                                                  & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                     >> 0xdU))) 
                                          & (((0x1fU 
                                               & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                  >> 0x17U)) 
                                              == (0x1fU 
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
                                         | (((0U != 
                                              (0xfU 
                                               & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                                  >> 5U)))
                                              ? 1U : 0U) 
                                            & (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready)))) 
                                        | (~ (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready))) 
                                       | (IData)(vlSelf->top__DOT__transfer_in_progress))))));
    tracep->chgIData(oldp+422,(vlSelf->top__DOT__datapath__DOT__RF
                               [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                  >> 0x22U)))]),32);
    tracep->chgIData(oldp+423,(((IData)(vlSelf->top__DOT__RbSelect)
                                 ? vlSelf->top__DOT__datapath__DOT__RF
                                [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                   >> 0x27U)))]
                                 : vlSelf->top__DOT__datapath__DOT__RF
                                [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                   >> 0x1dU)))])),32);
    tracep->chgIData(oldp+424,(vlSelf->top__DOT__datapath__DOT__RF
                               [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                  >> 0x18U)))]),32);
    tracep->chgBit(oldp+425,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy));
    tracep->chgBit(oldp+426,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy));
    tracep->chgBit(oldp+427,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we));
    tracep->chgBit(oldp+428,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__re));
    tracep->chgBit(oldp+429,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__we));
    tracep->chgBit(oldp+430,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__re));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
