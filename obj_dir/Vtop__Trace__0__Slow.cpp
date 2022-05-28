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
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+423,"Op", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+423,"Op", false,-1, 7,0);
    tracep->declBus(c+11,"MemRead", false,-1, 3,0);
    tracep->declBus(c+12,"MemWrite", false,-1, 3,0);
    tracep->declBit(c+13,"PCSrc", false,-1);
    tracep->declBus(c+14,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+15,"RegWrite", false,-1);
    tracep->declBus(c+16,"ALUOp", false,-1, 3,0);
    tracep->declBus(c+17,"ALUSrc", false,-1, 1,0);
    tracep->declBit(c+18,"ALUOp2", false,-1);
    tracep->declBit(c+19,"RbSelect", false,-1);
    tracep->declBit(c+20,"MemSignExtend", false,-1);
    tracep->declBus(c+21,"branch_flag", false,-1, 1,0);
    tracep->declBit(c+22,"jump_flag", false,-1);
    tracep->declBit(c+23,"double_jump_flag", false,-1);
    tracep->declBus(c+24,"icache_PC", false,-1, 11,0);
    tracep->declBit(c+434,"icache_instrRequest", false,-1);
    tracep->declBus(c+25,"icache_instruction", false,-1, 31,0);
    tracep->declBit(c+26,"icache_instrReady", false,-1);
    tracep->declBus(c+27,"dcache_address", false,-1, 11,0);
    tracep->declBit(c+28,"dcache_dataRequest", false,-1);
    tracep->declBit(c+435,"dcache_rw", false,-1);
    tracep->declBus(c+29,"dcache_writeData", false,-1, 31,0);
    tracep->declBus(c+30,"dcache_byte_en", false,-1, 3,0);
    tracep->declBus(c+31,"dcache_readData", false,-1, 31,0);
    tracep->declBit(c+32,"dcache_data_ready", false,-1);
    tracep->declBit(c+418,"transfer_in_progress", false,-1);
    tracep->pushNamePrefix("ctr ");
    tracep->declBus(c+423,"Op", false,-1, 7,0);
    tracep->declBus(c+17,"AluSrc", false,-1, 1,0);
    tracep->declBus(c+16,"AluOp", false,-1, 3,0);
    tracep->declBus(c+21,"branch_flag", false,-1, 1,0);
    tracep->declBit(c+22,"jump_flag", false,-1);
    tracep->declBit(c+20,"MemSignExtend", false,-1);
    tracep->declBit(c+13,"PCSrc", false,-1);
    tracep->declBus(c+11,"MemRead", false,-1, 3,0);
    tracep->declBus(c+12,"MemWrite", false,-1, 3,0);
    tracep->declBit(c+18,"AluOp2", false,-1);
    tracep->declBit(c+19,"RbSelect", false,-1);
    tracep->declBus(c+14,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+23,"double_jump_flag", false,-1);
    tracep->declBit(c+15,"RegWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datapath ");
    tracep->declBit(c+421,"clk", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+12,"MemWrite", false,-1, 3,0);
    tracep->declBus(c+14,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+22,"jump_flag", false,-1);
    tracep->declBit(c+15,"RegWrite", false,-1);
    tracep->declBit(c+13,"PCSrc", false,-1);
    tracep->declBit(c+20,"MemSignExtend", false,-1);
    tracep->declBus(c+21,"branch_flag", false,-1, 1,0);
    tracep->declBus(c+11,"MemRead", false,-1, 3,0);
    tracep->declBus(c+16,"ALUOp", false,-1, 3,0);
    tracep->declBus(c+17,"ALUSrc", false,-1, 1,0);
    tracep->declBit(c+19,"RbSelect", false,-1);
    tracep->declBit(c+18,"ALUOp2", false,-1);
    tracep->declBit(c+23,"double_jump_flag", false,-1);
    tracep->declBit(c+26,"icache_instrReady", false,-1);
    tracep->declBus(c+25,"icache_instruction", false,-1, 31,0);
    tracep->declBus(c+24,"icache_PC", false,-1, 11,0);
    tracep->declBit(c+434,"icache_instrRequest", false,-1);
    tracep->declBus(c+31,"dcache_readData", false,-1, 31,0);
    tracep->declBit(c+32,"dcache_data_ready", false,-1);
    tracep->declBus(c+27,"dcache_address", false,-1, 11,0);
    tracep->declBit(c+28,"dcache_dataRequest", false,-1);
    tracep->declBit(c+435,"dcache_rw", false,-1);
    tracep->declBus(c+29,"dcache_writeData", false,-1, 31,0);
    tracep->declBus(c+30,"dcache_byte_en", false,-1, 3,0);
    tracep->declBit(c+418,"transfer_in_progress", false,-1);
    tracep->declBus(c+423,"Op", false,-1, 7,0);
    tracep->declBus(c+24,"PC", false,-1, 11,0);
    tracep->declBus(c+436,"PCSTART", false,-1, 11,0);
    tracep->declBus(c+437,"datamem", false,-1, 11,0);
    tracep->declBus(c+27,"datamem_address", false,-1, 11,0);
    tracep->declBus(c+33,"datamem_data", false,-1, 31,0);
    tracep->declBus(c+34,"datamem_write_data", false,-1, 31,0);
    tracep->declBus(c+35,"ForwardingA", false,-1, 1,0);
    tracep->declBus(c+36,"ForwardingB", false,-1, 1,0);
    tracep->declBit(c+37,"ForwardingC", false,-1);
    tracep->declBit(c+38,"ForwardingD", false,-1);
    tracep->declBit(c+419,"stall_flag", false,-1);
    tracep->declBit(c+420,"PCenable", false,-1);
    tracep->declBit(c+424,"IfIdEN", false,-1);
    tracep->declBit(c+39,"flush", false,-1);
    tracep->declBus(c+40,"branchId", false,-1, 1,0);
    tracep->declBus(c+41,"branchex", false,-1, 1,0);
    tracep->declQuad(c+42,"IfId", false,-1, 43,0);
    tracep->declBus(c+44,"JumpAddress", false,-1, 18,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+337+i*1,"RF", true,(i+0), 31,0);
    }
    tracep->declBus(c+425,"da", false,-1, 31,0);
    tracep->declBus(c+426,"db", false,-1, 31,0);
    tracep->declBus(c+427,"dc", false,-1, 31,0);
    tracep->declBus(c+45,"RF_WriteData", false,-1, 31,0);
    tracep->declBus(c+46,"RF_WriteAddr", false,-1, 31,0);
    tracep->declBit(c+47,"double_jump", false,-1);
    tracep->declArray(c+48,"IdEx", false,-1, 201,0);
    tracep->declBus(c+55,"alu1in_a", false,-1, 31,0);
    tracep->declBus(c+56,"alu1in_b", false,-1, 31,0);
    tracep->declBus(c+57,"alu1in_b_mux", false,-1, 31,0);
    tracep->declBus(c+58,"Alu1out", false,-1, 31,0);
    tracep->declBit(c+59,"zero_flag", false,-1);
    tracep->declBus(c+60,"exmemrd", false,-1, 4,0);
    tracep->declBus(c+61,"idexra", false,-1, 4,0);
    tracep->declBus(c+62,"idexrb", false,-1, 4,0);
    tracep->declBus(c+41,"exmembranchflag", false,-1, 1,0);
    tracep->declBit(c+63,"debugmemwbregwrite", false,-1);
    tracep->declBit(c+64,"debugexmemregwrite", false,-1);
    tracep->declBus(c+41,"debugbranch", false,-1, 1,0);
    tracep->declBus(c+65,"debugmemwbrd", false,-1, 4,0);
    tracep->declBus(c+60,"debugexmemrd", false,-1, 4,0);
    tracep->declBus(c+61,"debugidexra", false,-1, 4,0);
    tracep->declArray(c+66,"ExMem", false,-1, 148,0);
    tracep->declBus(c+71,"alu2in_a", false,-1, 31,0);
    tracep->declBus(c+72,"alu2in_b", false,-1, 31,0);
    tracep->declBus(c+73,"Alu2out", false,-1, 31,0);
    tracep->declBit(c+74,"branch_src", false,-1);
    tracep->declBit(c+75,"branch_ne", false,-1);
    tracep->declBit(c+76,"branch_eq", false,-1);
    tracep->declArray(c+77,"MemWb", false,-1, 83,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+24,"icache_PC", false,-1, 11,0);
    tracep->declBit(c+434,"icache_instrRequest", false,-1);
    tracep->declBus(c+25,"icache_instruction", false,-1, 31,0);
    tracep->declBit(c+26,"icache_instrReady", false,-1);
    tracep->declBus(c+27,"dcache_address", false,-1, 11,0);
    tracep->declBit(c+28,"dcache_dataRequest", false,-1);
    tracep->declBit(c+435,"dcache_rw", false,-1);
    tracep->declBus(c+29,"dcache_writeData", false,-1, 31,0);
    tracep->declBus(c+30,"dcache_byte_en", false,-1, 3,0);
    tracep->declBus(c+31,"dcache_readData", false,-1, 31,0);
    tracep->declBit(c+32,"dcache_data_ready", false,-1);
    tracep->declBit(c+418,"transfer_in_progress", false,-1);
    tracep->declBit(c+438,"mem_ready_icache", false,-1);
    tracep->declBit(c+439,"zeros", false,-1);
    tracep->declBit(c+409,"icache_blockRequest", false,-1);
    tracep->declBit(c+410,"icache_blockReady", false,-1);
    tracep->declBus(c+24,"icache_blockAddress", false,-1, 11,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+80+i*1,"icache_instructionBlock", true,(i+0), 31,0);
    }
    tracep->declBit(c+369,"dcache_blockRequest", false,-1);
    tracep->declBit(c+411,"dcache_blockReady", false,-1);
    tracep->declBit(c+370,"dcache_mem_rw", false,-1);
    tracep->declBus(c+88,"dcache_blockAddress", false,-1, 11,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+89+i*1,"dcache_readBlock", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+97+i*1,"dcache_wbBlock", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("dcache_controller ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+27,"dcache_address", false,-1, 11,0);
    tracep->declBus(c+29,"dcache_data_in", false,-1, 31,0);
    tracep->declBus(c+30,"dcache_byte_en", false,-1, 3,0);
    tracep->declBit(c+435,"dcache_rw", false,-1);
    tracep->declBit(c+28,"dcache_valid", false,-1);
    tracep->declBus(c+31,"dcache_data_out", false,-1, 31,0);
    tracep->declBit(c+32,"dcache_data_ready", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+105+i*1,"mem_data_in", true,(i+0), 31,0);
    }
    tracep->declBit(c+411,"mem_ready", false,-1);
    tracep->declBus(c+88,"mem_address", false,-1, 11,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+113+i*1,"mem_data_out", true,(i+0), 31,0);
    }
    tracep->declBit(c+370,"mem_rw", false,-1);
    tracep->declBit(c+369,"mem_valid", false,-1);
    tracep->declBus(c+371,"nstate", false,-1, 2,0);
    tracep->declBus(c+121,"cstate", false,-1, 2,0);
    tracep->declBit(c+122,"dcache_valid_read", false,-1);
    tracep->declBit(c+123,"dcache_dirty_read", false,-1);
    tracep->declBus(c+124,"dcache_tag_read", false,-1, 11,9);
    tracep->declBit(c+125,"dcache_valid_write", false,-1);
    tracep->declBit(c+126,"dcache_dirty_write", false,-1);
    tracep->declBus(c+127,"dcache_tag_write", false,-1, 11,9);
    tracep->declBus(c+128,"dcache_tag_index", false,-1, 3,0);
    tracep->declBit(c+129,"dcache_tag_we", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+130+i*1,"dcache_sram_read", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+372+i*1,"dcache_sram_write", true,(i+0), 31,0);
    }
    tracep->declBus(c+128,"dcache_sram_index", false,-1, 3,0);
    tracep->declBit(c+380,"dcache_sram_we", false,-1);
    tracep->declBus(c+31,"dcache_data_to_cpu", false,-1, 31,0);
    tracep->declBit(c+32,"dcache_data_to_cpu_ready", false,-1);
    tracep->declBus(c+88,"mem_request_address", false,-1, 11,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+138+i*1,"mem_request_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+370,"mem_request_rw", false,-1);
    tracep->declBit(c+369,"mem_request_valid", false,-1);
    tracep->declBus(c+146,"dcache_sram_write_temp", false,-1, 31,0);
    tracep->pushNamePrefix("data_cache_sram ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+380,"we", false,-1);
    tracep->declBus(c+128,"index", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+381+i*1,"data_write", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+147+i*1,"data_read", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("data_cache_tag ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+129,"we", false,-1);
    tracep->declBus(c+128,"index", false,-1, 3,0);
    tracep->declBit(c+125,"valid_in", false,-1);
    tracep->declBit(c+126,"dirty_in", false,-1);
    tracep->declBus(c+127,"tag_in", false,-1, 11,9);
    tracep->declBit(c+122,"valid_out", false,-1);
    tracep->declBit(c+123,"dirty_out", false,-1);
    tracep->declBus(c+124,"tag_out", false,-1, 11,9);
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+155+i*1,"dcache_valid", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+171+i*1,"dcache_dirty", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+187+i*1,"dcache_tag", true,(i+0), 11,9);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dram_controller ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBit(c+409,"dram_port1_request", false,-1);
    tracep->declBus(c+24,"dram_port1_address", false,-1, 11,0);
    tracep->declBit(c+439,"dram_port1_we", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+203+i*1,"dram_port1_read_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+440+i*1,"dram_port1_write_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+410,"dram_port1_acknowledge", false,-1);
    tracep->declBit(c+369,"dram_port2_request", false,-1);
    tracep->declBus(c+88,"dram_port2_address", false,-1, 11,0);
    tracep->declBit(c+370,"dram_port2_we", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+211+i*1,"dram_port2_read_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+219+i*1,"dram_port2_write_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+411,"dram_port2_acknowledge", false,-1);
    tracep->declBit(c+418,"dram_busy", false,-1);
    tracep->declBit(c+428,"dram_port1_busy", false,-1);
    tracep->declBit(c+429,"dram_port2_busy", false,-1);
    tracep->pushNamePrefix("dram_interface_dcache ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+88,"bus_address_to_mem", false,-1, 11,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+227+i*1,"bus_data_to_mem", true,(i+0), 31,0);
    }
    tracep->declBit(c+389,"bus_read_enable", false,-1);
    tracep->declBit(c+390,"bus_write_enable", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+235+i*1,"bus_data_from_mem", true,(i+0), 31,0);
    }
    tracep->declBit(c+411,"acknowledge_from_mem", false,-1);
    tracep->declBus(c+412,"data_pin", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+243+i*1,"data_from_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+251,"data_to_mem", false,-1, 31,0);
    tracep->declBus(c+252,"address_to_mem", false,-1, 11,0);
    tracep->declBus(c+413,"address_to_mem_with_word_offset", false,-1, 11,0);
    tracep->declBit(c+430,"we", false,-1);
    tracep->declBit(c+253,"we_from_mem", false,-1);
    tracep->declBit(c+431,"re", false,-1);
    tracep->declBit(c+254,"re_from_mem", false,-1);
    tracep->declBit(c+411,"acknowledge", false,-1);
    tracep->declBus(c+414,"word_count", false,-1, 2,0);
    tracep->declBus(c+255,"cycle_count", false,-1, 1,0);
    tracep->pushNamePrefix("dram ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+413,"address", false,-1, 11,0);
    tracep->declBus(c+412,"data", false,-1, 31,0);
    tracep->declBit(c+431,"read_enable", false,-1);
    tracep->declBit(c+430,"write_enable", false,-1);
    tracep->declBit(c+253,"write_data_enable", false,-1);
    tracep->declBit(c+254,"read_data_enable", false,-1);
    tracep->declBit(c+411,"acknowledge", false,-1);
    tracep->declQuad(c+256,"read_acknowledge_delay_line", false,-1, 34,0);
    tracep->declQuad(c+258,"write_acknowledge_delay_line", false,-1, 38,0);
    tracep->declBit(c+260,"int_read_acknowledge", false,-1);
    tracep->declBit(c+261,"int_write_acknowledge", false,-1);
    tracep->pushNamePrefix("dram_array ");
    tracep->declBus(c+413,"address", false,-1, 11,0);
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBus(c+412,"data", false,-1, 31,0);
    tracep->declBit(c+253,"wren", false,-1);
    tracep->declBus(c+412,"din", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dram_interface_icache ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+24,"bus_address_to_mem", false,-1, 11,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2+i*1,"bus_data_to_mem", true,(i+0), 31,0);
    }
    tracep->declBit(c+428,"bus_read_enable", false,-1);
    tracep->declBit(c+439,"bus_write_enable", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+262+i*1,"bus_data_from_mem", true,(i+0), 31,0);
    }
    tracep->declBit(c+410,"acknowledge_from_mem", false,-1);
    tracep->declBus(c+415,"data_pin", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+270+i*1,"data_from_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+278,"data_to_mem", false,-1, 31,0);
    tracep->declBus(c+279,"address_to_mem", false,-1, 11,0);
    tracep->declBus(c+416,"address_to_mem_with_word_offset", false,-1, 11,0);
    tracep->declBit(c+432,"we", false,-1);
    tracep->declBit(c+280,"we_from_mem", false,-1);
    tracep->declBit(c+433,"re", false,-1);
    tracep->declBit(c+281,"re_from_mem", false,-1);
    tracep->declBit(c+410,"acknowledge", false,-1);
    tracep->declBus(c+417,"word_count", false,-1, 2,0);
    tracep->declBus(c+282,"cycle_count", false,-1, 1,0);
    tracep->pushNamePrefix("dram ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+416,"address", false,-1, 11,0);
    tracep->declBus(c+415,"data", false,-1, 31,0);
    tracep->declBit(c+433,"read_enable", false,-1);
    tracep->declBit(c+432,"write_enable", false,-1);
    tracep->declBit(c+280,"write_data_enable", false,-1);
    tracep->declBit(c+281,"read_data_enable", false,-1);
    tracep->declBit(c+410,"acknowledge", false,-1);
    tracep->declQuad(c+283,"read_acknowledge_delay_line", false,-1, 34,0);
    tracep->declQuad(c+285,"write_acknowledge_delay_line", false,-1, 38,0);
    tracep->declBit(c+287,"int_read_acknowledge", false,-1);
    tracep->declBit(c+288,"int_write_acknowledge", false,-1);
    tracep->pushNamePrefix("dram_array ");
    tracep->declBus(c+416,"address", false,-1, 11,0);
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBus(c+415,"data", false,-1, 31,0);
    tracep->declBit(c+280,"wren", false,-1);
    tracep->declBus(c+415,"din", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("icache_controller ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+422,"reset", false,-1);
    tracep->declBus(c+24,"icache_address", false,-1, 11,0);
    tracep->declBit(c+434,"icache_valid", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+289+i*1,"mem_data_in", true,(i+0), 31,0);
    }
    tracep->declBit(c+410,"mem_ready", false,-1);
    tracep->declBus(c+24,"mem_address", false,-1, 11,0);
    tracep->declBit(c+409,"mem_valid", false,-1);
    tracep->declBus(c+25,"icache_data_out", false,-1, 31,0);
    tracep->declBit(c+26,"icache_data_ready", false,-1);
    tracep->declBus(c+391,"nstate", false,-1, 1,0);
    tracep->declBus(c+297,"cstate", false,-1, 1,0);
    tracep->declBit(c+298,"icache_valid_read", false,-1);
    tracep->declBus(c+299,"icache_tag_read", false,-1, 11,8);
    tracep->declBit(c+300,"icache_valid_write", false,-1);
    tracep->declBus(c+301,"icache_tag_write", false,-1, 11,8);
    tracep->declBus(c+302,"icache_tag_index", false,-1, 2,0);
    tracep->declBit(c+303,"icache_tag_we", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+304+i*1,"icache_sram_read", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+392+i*1,"icache_sram_write", true,(i+0), 31,0);
    }
    tracep->declBus(c+302,"icache_sram_index", false,-1, 2,0);
    tracep->declBit(c+400,"icache_sram_we", false,-1);
    tracep->declBus(c+25,"icache_data_to_cpu", false,-1, 31,0);
    tracep->declBit(c+26,"icache_data_to_cpu_ready", false,-1);
    tracep->declBus(c+24,"mem_request_address", false,-1, 11,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+448+i*1,"mem_request_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+409,"mem_request_valid", false,-1);
    tracep->declBit(c+312,"synchronized_reset", false,-1);
    tracep->pushNamePrefix("inst_cache_sram ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+400,"we", false,-1);
    tracep->declBus(c+302,"index", false,-1, 2,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+401+i*1,"data_write", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+313+i*1,"data_read", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+10,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_cache_tag ");
    tracep->declBit(c+421,"clock", false,-1);
    tracep->declBit(c+303,"we", false,-1);
    tracep->declBus(c+302,"index", false,-1, 2,0);
    tracep->declBit(c+300,"valid_in", false,-1);
    tracep->declBus(c+301,"tag_in", false,-1, 11,8);
    tracep->declBit(c+298,"valid_out", false,-1);
    tracep->declBus(c+299,"tag_out", false,-1, 11,8);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+321+i*1,"icache_valid", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+329+i*1,"icache_tag", true,(i+0), 11,8);
    }
    tracep->popNamePrefix(4);
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
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+2,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[0]),32);
    tracep->fullIData(oldp+3,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[1]),32);
    tracep->fullIData(oldp+4,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[2]),32);
    tracep->fullIData(oldp+5,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[3]),32);
    tracep->fullIData(oldp+6,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[4]),32);
    tracep->fullIData(oldp+7,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[5]),32);
    tracep->fullIData(oldp+8,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[6]),32);
    tracep->fullIData(oldp+9,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[7]),32);
    tracep->fullIData(oldp+10,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__unnamedblk1__DOT__i),32);
    tracep->fullCData(oldp+11,(vlSelf->top__DOT__MemRead),4);
    tracep->fullCData(oldp+12,(vlSelf->top__DOT__MemWrite),4);
    tracep->fullBit(oldp+13,(vlSelf->top__DOT__PCSrc));
    tracep->fullCData(oldp+14,(vlSelf->top__DOT__MemToReg),2);
    tracep->fullBit(oldp+15,(vlSelf->top__DOT__RegWrite));
    tracep->fullCData(oldp+16,(vlSelf->top__DOT__ALUOp),4);
    tracep->fullCData(oldp+17,(vlSelf->top__DOT__ALUSrc),2);
    tracep->fullBit(oldp+18,(vlSelf->top__DOT__ALUOp2));
    tracep->fullBit(oldp+19,(vlSelf->top__DOT__RbSelect));
    tracep->fullBit(oldp+20,(vlSelf->top__DOT__MemSignExtend));
    tracep->fullCData(oldp+21,(vlSelf->top__DOT__branch_flag),2);
    tracep->fullBit(oldp+22,(vlSelf->top__DOT__jump_flag));
    tracep->fullBit(oldp+23,(vlSelf->top__DOT__double_jump_flag));
    tracep->fullSData(oldp+24,(vlSelf->top__DOT__datapath__DOT__PC),12);
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read
                               [(7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                                       >> 2U))]),32);
    tracep->fullBit(oldp+26,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready));
    tracep->fullSData(oldp+27,((0xfffU & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                           << 4U) | 
                                          (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                           >> 0x1cU)))),12);
    tracep->fullBit(oldp+28,(((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                              >> 5U)))
                               ? 1U : 0U)));
    tracep->fullIData(oldp+29,(vlSelf->top__DOT__dcache_writeData),32);
    tracep->fullCData(oldp+30,((0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                        >> 1U))),4);
    tracep->fullIData(oldp+31,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu),32);
    tracep->fullBit(oldp+32,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready));
    tracep->fullIData(oldp+33,(vlSelf->top__DOT__datapath__DOT__datamem_data),32);
    tracep->fullIData(oldp+34,((((0U != (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])) 
                                 & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                    == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                 >> 0x17U))))
                                 ? ((vlSelf->top__DOT__datapath__DOT__MemWb[1U] 
                                     << 0x1bU) | (vlSelf->top__DOT__datapath__DOT__MemWb[0U] 
                                                  >> 5U))
                                 : ((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                     << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                               >> 0x1cU)))),32);
    tracep->fullCData(oldp+35,(vlSelf->top__DOT__datapath__DOT__ForwardingA),2);
    tracep->fullCData(oldp+36,(vlSelf->top__DOT__datapath__DOT__ForwardingB),2);
    tracep->fullBit(oldp+37,(((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                 >> 7U) & (0U != (0x1fU 
                                                  & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                               & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                            >> 0x17U)) 
                                  != (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                      >> 0x1bU))) & 
                              ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                               == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                            >> 0x12U))))));
    tracep->fullBit(oldp+38,(((0U != (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])) 
                              & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                 == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                              >> 0x17U))))));
    tracep->fullBit(oldp+39,(vlSelf->top__DOT__datapath__DOT__flush));
    tracep->fullCData(oldp+40,((3U & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                      >> 0x10U))),2);
    tracep->fullCData(oldp+41,((3U & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                      >> 0xfU))),2);
    tracep->fullQData(oldp+42,(vlSelf->top__DOT__datapath__DOT__IfId),44);
    tracep->fullIData(oldp+44,((0x7ffffU & (IData)(
                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                    >> 0x14U)))),19);
    tracep->fullIData(oldp+45,(vlSelf->top__DOT__datapath__DOT__RF_WriteData),32);
    tracep->fullIData(oldp+46,((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])),32);
    tracep->fullBit(oldp+47,((((1U == ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                        << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                  >> 0x1cU))) 
                               & vlSelf->top__DOT__datapath__DOT__ExMem[0U])
                               ? 1U : 0U)));
    tracep->fullWData(oldp+48,(vlSelf->top__DOT__datapath__DOT__IdEx),202);
    tracep->fullIData(oldp+55,(vlSelf->top__DOT__datapath__DOT__alu1in_a),32);
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__datapath__DOT__alu1in_b),32);
    tracep->fullIData(oldp+57,(((0U == (3U & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                              >> 0x19U)))
                                 ? ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                     << 4U) | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                               >> 0x1cU))
                                 : ((1U == (3U & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                  >> 0x19U)))
                                     ? ((vlSelf->top__DOT__datapath__DOT__IdEx[1U] 
                                         << 4U) | (
                                                   vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                   >> 0x1cU))
                                     : ((2U == (3U 
                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                   >> 0x19U)))
                                         ? (0x1fU & 
                                            (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                             >> 0x12U))
                                         : ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                               >> 0x1cU)))))),32);
    tracep->fullIData(oldp+58,(vlSelf->top__DOT__datapath__DOT__Alu1out),32);
    tracep->fullBit(oldp+59,(vlSelf->top__DOT__datapath__DOT__zero_flag));
    tracep->fullCData(oldp+60,((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                         >> 0x17U))),5);
    tracep->fullCData(oldp+61,((0x1fU & (vlSelf->top__DOT__datapath__DOT__IdEx[6U] 
                                         >> 5U))),5);
    tracep->fullCData(oldp+62,((0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U])),5);
    tracep->fullBit(oldp+63,((1U & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                    >> 7U))));
    tracep->fullBit(oldp+64,((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                              >> 0x1fU)));
    tracep->fullCData(oldp+65,((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])),5);
    tracep->fullWData(oldp+66,(vlSelf->top__DOT__datapath__DOT__ExMem),149);
    tracep->fullIData(oldp+71,(((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                 << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                           >> 0x1cU))),32);
    tracep->fullIData(oldp+72,((((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                    >> 7U) & (0U != 
                                              (0x1fU 
                                               & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                                  & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                               >> 0x17U)) 
                                     != (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                         >> 0x1bU))) 
                                 & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                    == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                 >> 0x12U))))
                                 ? vlSelf->top__DOT__datapath__DOT__RF_WriteData
                                 : ((vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                     << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                               >> 0x1cU)))),32);
    tracep->fullIData(oldp+73,(vlSelf->top__DOT__datapath__DOT__Alu2out),32);
    tracep->fullBit(oldp+74,(vlSelf->top__DOT__datapath__DOT__branch_src));
    tracep->fullBit(oldp+75,(((IData)((0x10000U == 
                                       (0x38000U & 
                                        vlSelf->top__DOT__datapath__DOT__ExMem[0U])))
                               ? 1U : 0U)));
    tracep->fullBit(oldp+76,(((IData)((0x28000U == 
                                       (0x38000U & 
                                        vlSelf->top__DOT__datapath__DOT__ExMem[0U])))
                               ? 1U : 0U)));
    tracep->fullWData(oldp+77,(vlSelf->top__DOT__datapath__DOT__MemWb),84);
    tracep->fullIData(oldp+80,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[0]),32);
    tracep->fullIData(oldp+81,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[1]),32);
    tracep->fullIData(oldp+82,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[2]),32);
    tracep->fullIData(oldp+83,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[3]),32);
    tracep->fullIData(oldp+84,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[4]),32);
    tracep->fullIData(oldp+85,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[5]),32);
    tracep->fullIData(oldp+86,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[6]),32);
    tracep->fullIData(oldp+87,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[7]),32);
    tracep->fullSData(oldp+88,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address),12);
    tracep->fullIData(oldp+89,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[0]),32);
    tracep->fullIData(oldp+90,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[1]),32);
    tracep->fullIData(oldp+91,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[2]),32);
    tracep->fullIData(oldp+92,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[3]),32);
    tracep->fullIData(oldp+93,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[4]),32);
    tracep->fullIData(oldp+94,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[5]),32);
    tracep->fullIData(oldp+95,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[6]),32);
    tracep->fullIData(oldp+96,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[7]),32);
    tracep->fullIData(oldp+97,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[0]),32);
    tracep->fullIData(oldp+98,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[1]),32);
    tracep->fullIData(oldp+99,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[2]),32);
    tracep->fullIData(oldp+100,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[3]),32);
    tracep->fullIData(oldp+101,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[4]),32);
    tracep->fullIData(oldp+102,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[5]),32);
    tracep->fullIData(oldp+103,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[6]),32);
    tracep->fullIData(oldp+104,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[7]),32);
    tracep->fullIData(oldp+105,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[0]),32);
    tracep->fullIData(oldp+106,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[1]),32);
    tracep->fullIData(oldp+107,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[2]),32);
    tracep->fullIData(oldp+108,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[3]),32);
    tracep->fullIData(oldp+109,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[4]),32);
    tracep->fullIData(oldp+110,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[5]),32);
    tracep->fullIData(oldp+111,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[6]),32);
    tracep->fullIData(oldp+112,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[7]),32);
    tracep->fullIData(oldp+113,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[0]),32);
    tracep->fullIData(oldp+114,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[1]),32);
    tracep->fullIData(oldp+115,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[2]),32);
    tracep->fullIData(oldp+116,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[3]),32);
    tracep->fullIData(oldp+117,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[4]),32);
    tracep->fullIData(oldp+118,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[5]),32);
    tracep->fullIData(oldp+119,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[6]),32);
    tracep->fullIData(oldp+120,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[7]),32);
    tracep->fullCData(oldp+121,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate),3);
    tracep->fullBit(oldp+122,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read));
    tracep->fullBit(oldp+123,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read));
    tracep->fullCData(oldp+124,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read),3);
    tracep->fullBit(oldp+125,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write));
    tracep->fullBit(oldp+126,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write));
    tracep->fullCData(oldp+127,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write),3);
    tracep->fullCData(oldp+128,((0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                         >> 1U))),4);
    tracep->fullBit(oldp+129,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we));
    tracep->fullIData(oldp+130,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[0]),32);
    tracep->fullIData(oldp+131,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[1]),32);
    tracep->fullIData(oldp+132,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[2]),32);
    tracep->fullIData(oldp+133,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[3]),32);
    tracep->fullIData(oldp+134,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[4]),32);
    tracep->fullIData(oldp+135,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[5]),32);
    tracep->fullIData(oldp+136,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[6]),32);
    tracep->fullIData(oldp+137,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[7]),32);
    tracep->fullIData(oldp+138,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[0]),32);
    tracep->fullIData(oldp+139,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[1]),32);
    tracep->fullIData(oldp+140,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[2]),32);
    tracep->fullIData(oldp+141,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[3]),32);
    tracep->fullIData(oldp+142,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[4]),32);
    tracep->fullIData(oldp+143,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[5]),32);
    tracep->fullIData(oldp+144,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[6]),32);
    tracep->fullIData(oldp+145,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[7]),32);
    tracep->fullIData(oldp+146,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp),32);
    tracep->fullIData(oldp+147,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[0]),32);
    tracep->fullIData(oldp+148,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[1]),32);
    tracep->fullIData(oldp+149,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[2]),32);
    tracep->fullIData(oldp+150,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[3]),32);
    tracep->fullIData(oldp+151,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[4]),32);
    tracep->fullIData(oldp+152,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[5]),32);
    tracep->fullIData(oldp+153,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[6]),32);
    tracep->fullIData(oldp+154,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[7]),32);
    tracep->fullBit(oldp+155,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[0]));
    tracep->fullBit(oldp+156,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[1]));
    tracep->fullBit(oldp+157,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[2]));
    tracep->fullBit(oldp+158,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[3]));
    tracep->fullBit(oldp+159,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[4]));
    tracep->fullBit(oldp+160,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[5]));
    tracep->fullBit(oldp+161,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[6]));
    tracep->fullBit(oldp+162,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[7]));
    tracep->fullBit(oldp+163,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[8]));
    tracep->fullBit(oldp+164,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[9]));
    tracep->fullBit(oldp+165,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[10]));
    tracep->fullBit(oldp+166,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[11]));
    tracep->fullBit(oldp+167,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[12]));
    tracep->fullBit(oldp+168,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[13]));
    tracep->fullBit(oldp+169,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[14]));
    tracep->fullBit(oldp+170,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[15]));
    tracep->fullBit(oldp+171,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[0]));
    tracep->fullBit(oldp+172,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[1]));
    tracep->fullBit(oldp+173,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[2]));
    tracep->fullBit(oldp+174,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[3]));
    tracep->fullBit(oldp+175,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[4]));
    tracep->fullBit(oldp+176,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[5]));
    tracep->fullBit(oldp+177,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[6]));
    tracep->fullBit(oldp+178,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[7]));
    tracep->fullBit(oldp+179,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[8]));
    tracep->fullBit(oldp+180,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[9]));
    tracep->fullBit(oldp+181,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[10]));
    tracep->fullBit(oldp+182,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[11]));
    tracep->fullBit(oldp+183,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[12]));
    tracep->fullBit(oldp+184,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[13]));
    tracep->fullBit(oldp+185,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[14]));
    tracep->fullBit(oldp+186,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[15]));
    tracep->fullCData(oldp+187,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[0]),3);
    tracep->fullCData(oldp+188,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[1]),3);
    tracep->fullCData(oldp+189,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[2]),3);
    tracep->fullCData(oldp+190,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[3]),3);
    tracep->fullCData(oldp+191,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[4]),3);
    tracep->fullCData(oldp+192,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[5]),3);
    tracep->fullCData(oldp+193,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[6]),3);
    tracep->fullCData(oldp+194,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[7]),3);
    tracep->fullCData(oldp+195,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[8]),3);
    tracep->fullCData(oldp+196,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[9]),3);
    tracep->fullCData(oldp+197,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[10]),3);
    tracep->fullCData(oldp+198,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[11]),3);
    tracep->fullCData(oldp+199,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[12]),3);
    tracep->fullCData(oldp+200,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[13]),3);
    tracep->fullCData(oldp+201,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[14]),3);
    tracep->fullCData(oldp+202,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[15]),3);
    tracep->fullIData(oldp+203,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[0]),32);
    tracep->fullIData(oldp+204,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[1]),32);
    tracep->fullIData(oldp+205,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[2]),32);
    tracep->fullIData(oldp+206,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[3]),32);
    tracep->fullIData(oldp+207,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[4]),32);
    tracep->fullIData(oldp+208,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[5]),32);
    tracep->fullIData(oldp+209,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[6]),32);
    tracep->fullIData(oldp+210,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[7]),32);
    tracep->fullIData(oldp+211,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[0]),32);
    tracep->fullIData(oldp+212,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[1]),32);
    tracep->fullIData(oldp+213,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[2]),32);
    tracep->fullIData(oldp+214,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[3]),32);
    tracep->fullIData(oldp+215,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[4]),32);
    tracep->fullIData(oldp+216,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[5]),32);
    tracep->fullIData(oldp+217,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[6]),32);
    tracep->fullIData(oldp+218,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[7]),32);
    tracep->fullIData(oldp+219,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[0]),32);
    tracep->fullIData(oldp+220,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[1]),32);
    tracep->fullIData(oldp+221,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[2]),32);
    tracep->fullIData(oldp+222,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[3]),32);
    tracep->fullIData(oldp+223,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[4]),32);
    tracep->fullIData(oldp+224,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[5]),32);
    tracep->fullIData(oldp+225,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[6]),32);
    tracep->fullIData(oldp+226,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[7]),32);
    tracep->fullIData(oldp+227,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[0]),32);
    tracep->fullIData(oldp+228,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[1]),32);
    tracep->fullIData(oldp+229,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[2]),32);
    tracep->fullIData(oldp+230,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[3]),32);
    tracep->fullIData(oldp+231,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[4]),32);
    tracep->fullIData(oldp+232,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[5]),32);
    tracep->fullIData(oldp+233,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[6]),32);
    tracep->fullIData(oldp+234,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[7]),32);
    tracep->fullIData(oldp+235,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[0]),32);
    tracep->fullIData(oldp+236,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[1]),32);
    tracep->fullIData(oldp+237,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[2]),32);
    tracep->fullIData(oldp+238,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[3]),32);
    tracep->fullIData(oldp+239,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[4]),32);
    tracep->fullIData(oldp+240,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[5]),32);
    tracep->fullIData(oldp+241,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[6]),32);
    tracep->fullIData(oldp+242,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[7]),32);
    tracep->fullIData(oldp+243,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[0]),32);
    tracep->fullIData(oldp+244,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[1]),32);
    tracep->fullIData(oldp+245,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[2]),32);
    tracep->fullIData(oldp+246,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[3]),32);
    tracep->fullIData(oldp+247,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[4]),32);
    tracep->fullIData(oldp+248,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[5]),32);
    tracep->fullIData(oldp+249,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[6]),32);
    tracep->fullIData(oldp+250,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[7]),32);
    tracep->fullIData(oldp+251,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_to_mem),32);
    tracep->fullSData(oldp+252,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem),12);
    tracep->fullBit(oldp+253,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                             >> 6U)))));
    tracep->fullBit(oldp+254,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                                             >> 5U)))));
    tracep->fullCData(oldp+255,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count),2);
    tracep->fullQData(oldp+256,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line),35);
    tracep->fullQData(oldp+258,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line),39);
    tracep->fullBit(oldp+260,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                                             >> 0x22U)))));
    tracep->fullBit(oldp+261,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line 
                                             >> 0x26U)))));
    tracep->fullIData(oldp+262,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[0]),32);
    tracep->fullIData(oldp+263,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[1]),32);
    tracep->fullIData(oldp+264,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[2]),32);
    tracep->fullIData(oldp+265,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[3]),32);
    tracep->fullIData(oldp+266,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[4]),32);
    tracep->fullIData(oldp+267,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[5]),32);
    tracep->fullIData(oldp+268,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[6]),32);
    tracep->fullIData(oldp+269,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[7]),32);
    tracep->fullIData(oldp+270,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[0]),32);
    tracep->fullIData(oldp+271,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[1]),32);
    tracep->fullIData(oldp+272,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[2]),32);
    tracep->fullIData(oldp+273,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[3]),32);
    tracep->fullIData(oldp+274,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[4]),32);
    tracep->fullIData(oldp+275,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[5]),32);
    tracep->fullIData(oldp+276,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[6]),32);
    tracep->fullIData(oldp+277,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[7]),32);
    tracep->fullIData(oldp+278,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_to_mem),32);
    tracep->fullSData(oldp+279,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem),12);
    tracep->fullBit(oldp+280,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                             >> 6U)))));
    tracep->fullBit(oldp+281,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                                             >> 5U)))));
    tracep->fullCData(oldp+282,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count),2);
    tracep->fullQData(oldp+283,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line),35);
    tracep->fullQData(oldp+285,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line),39);
    tracep->fullBit(oldp+287,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                                             >> 0x22U)))));
    tracep->fullBit(oldp+288,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line 
                                             >> 0x26U)))));
    tracep->fullIData(oldp+289,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[0]),32);
    tracep->fullIData(oldp+290,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[1]),32);
    tracep->fullIData(oldp+291,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[2]),32);
    tracep->fullIData(oldp+292,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[3]),32);
    tracep->fullIData(oldp+293,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[4]),32);
    tracep->fullIData(oldp+294,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[5]),32);
    tracep->fullIData(oldp+295,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[6]),32);
    tracep->fullIData(oldp+296,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[7]),32);
    tracep->fullCData(oldp+297,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate),2);
    tracep->fullBit(oldp+298,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read));
    tracep->fullCData(oldp+299,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read),4);
    tracep->fullBit(oldp+300,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write));
    tracep->fullCData(oldp+301,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write),4);
    tracep->fullCData(oldp+302,((7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                                       >> 5U))),3);
    tracep->fullBit(oldp+303,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we));
    tracep->fullIData(oldp+304,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[0]),32);
    tracep->fullIData(oldp+305,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[1]),32);
    tracep->fullIData(oldp+306,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[2]),32);
    tracep->fullIData(oldp+307,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[3]),32);
    tracep->fullIData(oldp+308,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[4]),32);
    tracep->fullIData(oldp+309,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[5]),32);
    tracep->fullIData(oldp+310,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[6]),32);
    tracep->fullIData(oldp+311,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[7]),32);
    tracep->fullBit(oldp+312,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__synchronized_reset));
    tracep->fullIData(oldp+313,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[0]),32);
    tracep->fullIData(oldp+314,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[1]),32);
    tracep->fullIData(oldp+315,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[2]),32);
    tracep->fullIData(oldp+316,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[3]),32);
    tracep->fullIData(oldp+317,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[4]),32);
    tracep->fullIData(oldp+318,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[5]),32);
    tracep->fullIData(oldp+319,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[6]),32);
    tracep->fullIData(oldp+320,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[7]),32);
    tracep->fullBit(oldp+321,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[0]));
    tracep->fullBit(oldp+322,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[1]));
    tracep->fullBit(oldp+323,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[2]));
    tracep->fullBit(oldp+324,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[3]));
    tracep->fullBit(oldp+325,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[4]));
    tracep->fullBit(oldp+326,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[5]));
    tracep->fullBit(oldp+327,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[6]));
    tracep->fullBit(oldp+328,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[7]));
    tracep->fullCData(oldp+329,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[0]),4);
    tracep->fullCData(oldp+330,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[1]),4);
    tracep->fullCData(oldp+331,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[2]),4);
    tracep->fullCData(oldp+332,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[3]),4);
    tracep->fullCData(oldp+333,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[4]),4);
    tracep->fullCData(oldp+334,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[5]),4);
    tracep->fullCData(oldp+335,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[6]),4);
    tracep->fullCData(oldp+336,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[7]),4);
    tracep->fullIData(oldp+337,(vlSelf->top__DOT__datapath__DOT__RF[0]),32);
    tracep->fullIData(oldp+338,(vlSelf->top__DOT__datapath__DOT__RF[1]),32);
    tracep->fullIData(oldp+339,(vlSelf->top__DOT__datapath__DOT__RF[2]),32);
    tracep->fullIData(oldp+340,(vlSelf->top__DOT__datapath__DOT__RF[3]),32);
    tracep->fullIData(oldp+341,(vlSelf->top__DOT__datapath__DOT__RF[4]),32);
    tracep->fullIData(oldp+342,(vlSelf->top__DOT__datapath__DOT__RF[5]),32);
    tracep->fullIData(oldp+343,(vlSelf->top__DOT__datapath__DOT__RF[6]),32);
    tracep->fullIData(oldp+344,(vlSelf->top__DOT__datapath__DOT__RF[7]),32);
    tracep->fullIData(oldp+345,(vlSelf->top__DOT__datapath__DOT__RF[8]),32);
    tracep->fullIData(oldp+346,(vlSelf->top__DOT__datapath__DOT__RF[9]),32);
    tracep->fullIData(oldp+347,(vlSelf->top__DOT__datapath__DOT__RF[10]),32);
    tracep->fullIData(oldp+348,(vlSelf->top__DOT__datapath__DOT__RF[11]),32);
    tracep->fullIData(oldp+349,(vlSelf->top__DOT__datapath__DOT__RF[12]),32);
    tracep->fullIData(oldp+350,(vlSelf->top__DOT__datapath__DOT__RF[13]),32);
    tracep->fullIData(oldp+351,(vlSelf->top__DOT__datapath__DOT__RF[14]),32);
    tracep->fullIData(oldp+352,(vlSelf->top__DOT__datapath__DOT__RF[15]),32);
    tracep->fullIData(oldp+353,(vlSelf->top__DOT__datapath__DOT__RF[16]),32);
    tracep->fullIData(oldp+354,(vlSelf->top__DOT__datapath__DOT__RF[17]),32);
    tracep->fullIData(oldp+355,(vlSelf->top__DOT__datapath__DOT__RF[18]),32);
    tracep->fullIData(oldp+356,(vlSelf->top__DOT__datapath__DOT__RF[19]),32);
    tracep->fullIData(oldp+357,(vlSelf->top__DOT__datapath__DOT__RF[20]),32);
    tracep->fullIData(oldp+358,(vlSelf->top__DOT__datapath__DOT__RF[21]),32);
    tracep->fullIData(oldp+359,(vlSelf->top__DOT__datapath__DOT__RF[22]),32);
    tracep->fullIData(oldp+360,(vlSelf->top__DOT__datapath__DOT__RF[23]),32);
    tracep->fullIData(oldp+361,(vlSelf->top__DOT__datapath__DOT__RF[24]),32);
    tracep->fullIData(oldp+362,(vlSelf->top__DOT__datapath__DOT__RF[25]),32);
    tracep->fullIData(oldp+363,(vlSelf->top__DOT__datapath__DOT__RF[26]),32);
    tracep->fullIData(oldp+364,(vlSelf->top__DOT__datapath__DOT__RF[27]),32);
    tracep->fullIData(oldp+365,(vlSelf->top__DOT__datapath__DOT__RF[28]),32);
    tracep->fullIData(oldp+366,(vlSelf->top__DOT__datapath__DOT__RF[29]),32);
    tracep->fullIData(oldp+367,(vlSelf->top__DOT__datapath__DOT__RF[30]),32);
    tracep->fullIData(oldp+368,(vlSelf->top__DOT__datapath__DOT__RF[31]),32);
    tracep->fullBit(oldp+369,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid));
    tracep->fullBit(oldp+370,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw));
    tracep->fullCData(oldp+371,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate),3);
    tracep->fullIData(oldp+372,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[0]),32);
    tracep->fullIData(oldp+373,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[1]),32);
    tracep->fullIData(oldp+374,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[2]),32);
    tracep->fullIData(oldp+375,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[3]),32);
    tracep->fullIData(oldp+376,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[4]),32);
    tracep->fullIData(oldp+377,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[5]),32);
    tracep->fullIData(oldp+378,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[6]),32);
    tracep->fullIData(oldp+379,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[7]),32);
    tracep->fullBit(oldp+380,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we));
    tracep->fullIData(oldp+381,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[0]),32);
    tracep->fullIData(oldp+382,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[1]),32);
    tracep->fullIData(oldp+383,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[2]),32);
    tracep->fullIData(oldp+384,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[3]),32);
    tracep->fullIData(oldp+385,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[4]),32);
    tracep->fullIData(oldp+386,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[5]),32);
    tracep->fullIData(oldp+387,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[6]),32);
    tracep->fullIData(oldp+388,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[7]),32);
    tracep->fullBit(oldp+389,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_read_enable));
    tracep->fullBit(oldp+390,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_write_enable));
    tracep->fullCData(oldp+391,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate),2);
    tracep->fullIData(oldp+392,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[0]),32);
    tracep->fullIData(oldp+393,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[1]),32);
    tracep->fullIData(oldp+394,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[2]),32);
    tracep->fullIData(oldp+395,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[3]),32);
    tracep->fullIData(oldp+396,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[4]),32);
    tracep->fullIData(oldp+397,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[5]),32);
    tracep->fullIData(oldp+398,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[6]),32);
    tracep->fullIData(oldp+399,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[7]),32);
    tracep->fullBit(oldp+400,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_we));
    tracep->fullIData(oldp+401,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[0]),32);
    tracep->fullIData(oldp+402,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[1]),32);
    tracep->fullIData(oldp+403,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[2]),32);
    tracep->fullIData(oldp+404,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[3]),32);
    tracep->fullIData(oldp+405,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[4]),32);
    tracep->fullIData(oldp+406,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[5]),32);
    tracep->fullIData(oldp+407,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[6]),32);
    tracep->fullIData(oldp+408,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[7]),32);
    tracep->fullBit(oldp+409,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid));
    tracep->fullBit(oldp+410,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge));
    tracep->fullBit(oldp+411,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge));
    tracep->fullIData(oldp+412,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin),32);
    tracep->fullSData(oldp+413,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset),12);
    tracep->fullCData(oldp+414,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count),3);
    tracep->fullIData(oldp+415,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin),32);
    tracep->fullSData(oldp+416,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset),12);
    tracep->fullCData(oldp+417,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count),3);
    tracep->fullBit(oldp+418,(vlSelf->top__DOT__transfer_in_progress));
    tracep->fullBit(oldp+419,(vlSelf->top__DOT__datapath__DOT__stall_flag));
    tracep->fullBit(oldp+420,(vlSelf->top__DOT__datapath__DOT__PCenable));
    tracep->fullBit(oldp+421,(vlSelf->clock));
    tracep->fullBit(oldp+422,(vlSelf->reset));
    tracep->fullCData(oldp+423,(vlSelf->Op),8);
    tracep->fullBit(oldp+424,((1U & (~ (((((0U != (0xfU 
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
                                               ? 1U
                                               : 0U) 
                                             & (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready)))) 
                                         | (~ (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready))) 
                                        | (IData)(vlSelf->top__DOT__transfer_in_progress))))));
    tracep->fullIData(oldp+425,(vlSelf->top__DOT__datapath__DOT__RF
                                [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                   >> 0x22U)))]),32);
    tracep->fullIData(oldp+426,(((IData)(vlSelf->top__DOT__RbSelect)
                                  ? vlSelf->top__DOT__datapath__DOT__RF
                                 [(0x1fU & (IData)(
                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                    >> 0x27U)))]
                                  : vlSelf->top__DOT__datapath__DOT__RF
                                 [(0x1fU & (IData)(
                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                    >> 0x1dU)))])),32);
    tracep->fullIData(oldp+427,(vlSelf->top__DOT__datapath__DOT__RF
                                [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                   >> 0x18U)))]),32);
    tracep->fullBit(oldp+428,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy));
    tracep->fullBit(oldp+429,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy));
    tracep->fullBit(oldp+430,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we));
    tracep->fullBit(oldp+431,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__re));
    tracep->fullBit(oldp+432,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__we));
    tracep->fullBit(oldp+433,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__re));
    tracep->fullBit(oldp+434,(1U));
    tracep->fullBit(oldp+435,(vlSelf->top__DOT__dcache_rw));
    tracep->fullSData(oldp+436,(0U),12);
    tracep->fullSData(oldp+437,(vlSelf->top__DOT__datapath__DOT__datamem),12);
    tracep->fullBit(oldp+438,(vlSelf->top__DOT__memory__DOT__mem_ready_icache));
    tracep->fullBit(oldp+439,(0U));
    tracep->fullIData(oldp+440,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[0]),32);
    tracep->fullIData(oldp+441,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[1]),32);
    tracep->fullIData(oldp+442,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[2]),32);
    tracep->fullIData(oldp+443,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[3]),32);
    tracep->fullIData(oldp+444,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[4]),32);
    tracep->fullIData(oldp+445,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[5]),32);
    tracep->fullIData(oldp+446,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[6]),32);
    tracep->fullIData(oldp+447,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[7]),32);
    tracep->fullIData(oldp+448,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[0]),32);
    tracep->fullIData(oldp+449,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[1]),32);
    tracep->fullIData(oldp+450,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[2]),32);
    tracep->fullIData(oldp+451,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[3]),32);
    tracep->fullIData(oldp+452,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[4]),32);
    tracep->fullIData(oldp+453,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[5]),32);
    tracep->fullIData(oldp+454,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[6]),32);
    tracep->fullIData(oldp+455,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[7]),32);
}
