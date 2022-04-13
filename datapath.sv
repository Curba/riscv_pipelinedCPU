module datapath(input logic clk, reset, MemRead, MemWrite,
                input logic [1:0] MemToReg,
                 input logic RegWrite, PCSrc,
				input logic [3:0] ALUOp,
                input logic [1:0] ALUSrc,
				output logic [7:0] Op);


	logic [6:0]PC;
	logic [6:0] PCSTART; //starting address of instruction memory
	assign PCSTART = 0;

	// Instruction memory internal storage, input address and output data bus signals
	logic [7:0] instmem [127:0];
	logic [6:0] instmem_address;
    logic [31:0] instmem_data;

	// Data memory internal storage, input address and output data bus signals
	logic [7:0] datamem [127:0];
	logic [6:0] datamem_address;
    logic [31:0] datamem_data;

	// ... may have other logic signal declarations here

	// IF/ID Pipeline staging register fields can be represented using structure format of System Verilog
	// You may refer to the first field in the structure as IfId.instruction for example
	struct packed{
		logic [31:0] instruction;
		logic [6:0] PCincremented;
	} IfId;

	always @ (posedge clk) begin
		IfId.instruction <= instmem_data[31:0];
		IfId.PCincremented <= PC+6'b100;   //PC de olabilir
	end

	//decode
	logic [18:0] JumpAddress;

	assign Op = IfId.instruction[7:0];
	assign JumpAddress = IfId.instruction [26:8];

	// Register File description
	logic [31:0] RF[31:0];
	logic [31:0] da; //read data 1
	logic [31:0] db; //read data 2
	logic [31:0] RF_WriteData; // write data
	logic [31:0] RF_WriteAddr; //write address

	//register logic
	assign da = RF[IfId.instruction[26:22]] ;
	assign db = RF[IfId.instruction[21:17]] ;

    always_comb
        case(MemWb.MemToReg)
            2'b00: RF_WriteData = MemWb.datamem_data;
            2'b01: RF_WriteData = MemWb.Alu1out;
            2'b10: RF_WriteData = {{(25){1'b0}},MemWb.PCincremented};
            default: RF_WriteData = MemWb.datamem_data;
         endcase

//	assign RF_WriteData = (MemWb.MemToReg) ? MemWb.datamem_data : MemWb.Alu1out;

	assign RF_WriteAddr = {{(27){1'b0}},MemWb.rd};

	always @(posedge clk) begin
		if (MemWb.RegWrite) begin
			RF[RF_WriteAddr] <= RF_WriteData;
		end
	end

	struct packed{
		logic [1:0] ALUSrc;
	    logic [3:0] ALUOp;
		logic [1:0]MemToReg;
		logic MemRead;
		logic MemWrite;
		logic RegWrite;
		logic [6:0] PCincremented;
		logic [31:0] da;
		logic [31:0] db;
		logic [31:0] signextend;
		logic [4:0] rd;
		logic [8:0] shamt;

	} IdEx;

	always @ (posedge clk) begin
		IdEx.ALUSrc <= ALUSrc;
		IdEx.ALUOp <= ALUOp;
		IdEx.MemRead <= MemRead;
		IdEx.MemWrite <= MemWrite;
		IdEx.MemToReg <= MemToReg;
		IdEx.RegWrite <= RegWrite;
		IdEx.PCincremented <= IfId.PCincremented;
		IdEx.da	<= da;
		IdEx.db	<= db;
		IdEx.shamt <= IfId.instruction[16:8];
		IdEx.rd <= IfId.instruction[31:27];
		IdEx.signextend <= { {(18){IfId.instruction [21]}},IfId.instruction [21:8] };


	end

	//execute logic
	logic [31:0] alu1in_a;
	logic [31:0] alu1in_b;
	logic [31:0] Alu1out;

	assign alu1in_a = IdEx.da;



	always_comb begin
		case(IdEx.ALUSrc)
			2'b00: alu1in_b = IdEx.db;
			2'b01: alu1in_b = IdEx.signextend;
			2'b10: alu1in_b = {{(23){1'b1}},IdEx.shamt};
			default: alu1in_b = IdEx.db; endcase
	end

	always_comb begin
		case(IdEx.ALUOp)
			4'b0000: Alu1out = alu1in_a + alu1in_b;
			4'b0001: Alu1out = alu1in_a - alu1in_b;
			4'b0010: Alu1out = alu1in_a * alu1in_b;
			4'b0011: Alu1out = alu1in_a ^ alu1in_b;
			4'b0100: Alu1out = alu1in_a | alu1in_b;
			4'b0101: Alu1out = alu1in_a & alu1in_b;
			4'b0110: Alu1out = alu1in_a << alu1in_b;
			4'b0111: Alu1out = alu1in_a >>> alu1in_b;
			4'b1000: Alu1out = alu1in_a >> alu1in_b;
			default: Alu1out = alu1in_a + alu1in_b;
		endcase
	end

	//assign Left_mux = (PCSrc) ? JumpAddress:PC+4;


	struct packed{
	    //control signals
		logic [6:0] PCincremented;
		logic MemRead;
		logic MemWrite;
		logic RegWrite;
		logic [1:0] MemToReg;
		logic [31:0] Alu1out;
		logic [31:0] db;
		logic [4:0] rd;
	} ExMem;

	//ex/mem
	always @ (posedge clk) begin
        ExMem.PCincremented <= IdEx.PCincremented;
		ExMem.MemRead <= IdEx.MemRead;
		ExMem.MemWrite <= IdEx.MemWrite;
		ExMem.RegWrite <= IdEx.RegWrite;
		ExMem.MemToReg <= IdEx.MemToReg;
		ExMem.Alu1out <= Alu1out;
		ExMem.db <= IdEx.db;
		ExMem.rd <= IdEx.rd;
	end




	//memwb
	struct packed{
	    //control signals
		logic [6:0] PCincremented;
		logic RegWrite;
		logic [1:0]MemToReg;
		logic [31:0] datamem_data;
		logic [31:0] Alu1out;
		logic [4:0] rd;
	} MemWb;

	//ex/mem
	always @ (posedge clk) begin
        MemWb.PCincremented <= ExMem.PCincremented;
		MemWb.RegWrite <= ExMem.RegWrite;
		MemWb.MemToReg <= ExMem.MemToReg;
		MemWb.datamem_data <= datamem_data;
		MemWb.Alu1out <= Alu1out;
		MemWb.rd <= ExMem.rd;

	end



	// ... may have other declarations

	// initialize instruction and data memory arrays
	// this will read the .dat file in the same directory
	// and initialize the memory accordingly.
	initial
		$readmemh("instruction_memory.dat", instmem);
	initial
		$readmemh("data_memory.dat", datamem);

	// Instruction Memory Address
	assign instmem_address = PC;

	// Instruction Memory Read Logic
	assign instmem_data[31:24] = instmem[instmem_address];
	assign instmem_data[23:16] = instmem[instmem_address+7'b1];
	assign instmem_data[15:8] = instmem[instmem_address+7'b10];
	assign instmem_data[7:0] = instmem[instmem_address+7'b11];

	// Data	Memory Address
	assign datamem_address = ExMem.Alu1out[6:0];

	// Data Memory Write Logic
	always @(posedge clk) begin
		if (ExMem.MemWrite) begin
			datamem[datamem_address] <= ExMem.Alu1out[31:24];
			datamem[datamem_address+1] <= ExMem.Alu1out[23:16];
			datamem[datamem_address+2] <= ExMem.Alu1out[15:8];
			datamem[datamem_address+3] <= ExMem.Alu1out[7:0];
		end
	end

	// Data Memory Read Logic
	assign datamem_data[31:24] = (ExMem.MemRead)? datamem[datamem_address]:8'bx;
	assign datamem_data[23:16] = (ExMem.MemRead)? datamem[datamem_address+1]:8'bx;
	assign datamem_data[15:8] = (ExMem.MemRead)? datamem[datamem_address+2]:8'bx;
	assign datamem_data[7:0] = (ExMem.MemRead)? datamem[datamem_address+3]:8'bx;

	//PC logic

	always@ (posedge clk)begin
		if(reset)
			PC <= PCSTART;
		else
			PC <= (PCSrc) ? JumpAddress[6:0]:PC+7'b100;
	end

	// ... rest is yours

endmodule

