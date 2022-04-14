module top (
    input logic 		clock,
    input logic 		reset,
    output logic [7:0]  Op
);
	logic MemRead;
	logic MemWrite;
    logic PCSrc;
	logic [1:0] MemToReg;
	logic RegWrite;
	logic [3:0] ALUOp;
	logic [1:0] ALUSrc;
    logic ALUOp2;
    logic RbSelect;

control ctr(
    .Op         (Op),
    .AluSrc     (ALUSrc),
    .AluOp      (ALUOp),
    .PCSrc      (PCSrc),
    .MemRead    (MemRead),
    .MemWrite   (MemWrite),
    .MemToReg   (MemToReg),
    .RegWrite   (RegWrite),
    .AluOp2     (ALUOp2),
    .RbSelect   (RbSelect)
);



datapath datapath(
    .clk        (clock),
    .reset      (reset),
    .MemRead    (MemRead),
    .MemWrite   (MemWrite),
    .MemToReg   (MemToReg),
    .RegWrite   (RegWrite),
    .PCSrc      (PCSrc),
    .ALUSrc     (ALUSrc),
    .ALUOp      (ALUOp),
    .ALUOp2     (ALUOp2),
    .RbSelect   (RbSelect),
    .Op         (Op)
);

endmodule


