module control( input logic [7:0]Op,
		output logic [1:0] AluSrc,
		output logic [3:0] AluOp,
		output logic PCSrc,
		output logic MemRead,
		output logic MemWrite,
        output logic RbSelect,
		output logic [1:0] MemToReg,
		output logic RegWrite );

    always_comb begin
        MemRead = 1'b0;
        MemWrite = 1'b0;
        MemToReg = 2'b00;
        RegWrite = 1'b0;
        RbSelect = 1'b0;
        AluSrc = 2'b00;
        AluOp = 4'b0000;
        PCSrc = 1'b0;
        case(Op)
            //NOP
            default: begin
                MemRead = 1'b0;
                MemWrite = 1'b0;
                MemToReg = 2'b00;
                RegWrite = 1'b0;
                AluSrc = 2'b00;
                AluOp = 4'b0000;
                PCSrc = 1'b0;
            end

            //ADD
            8'b00001000: begin
                RegWrite = 1'b1;
            end

            //MUL
            8'b00011000: begin
                RegWrite = 1'b0;
                AluOp = 4'b0010;
            end

            //ADDI
            8'b00000011: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluSrc = 2'b01;
                AluOp = 4'b0000;
            end

            //SW
            8'b00011001: begin
                MemWrite = 1'b1;
                RbSelect = 1'b1;
                AluSrc = 2'b01;
            end

            //LW
            8'b00110001: begin
                MemRead = 1'b1;
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                RbSelect = 1'b1;
                AluSrc = 2'b01;
            end

            //JAL
            8'b00000100: begin
                MemToReg = 2'b10;
                RegWrite = 1'b1;
                PCSrc = 1'b1;
            end

        endcase
    end
endmodule
