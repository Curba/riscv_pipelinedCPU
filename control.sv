module control( input logic [7:0]Op,
		output logic [1:0] AluSrc,
		output logic [3:0] AluOp,
        output logic [1:0] branch_flag,
        output logic jump_flag,
        output logic MemSignExtend,
		output logic PCSrc,
		output logic [3:0] MemRead,
		output logic [3:0] MemWrite,
        output logic AluOp2,
        output logic RbSelect,
		output logic [1:0] MemToReg,
        output logic double_jump_flag,
		output logic RegWrite );
        

    always_comb begin
        MemRead = 4'b0000;
        MemWrite = 4'b0000;
        MemToReg = 2'b00;
        MemSignExtend = 1'b0;
        jump_flag = 1'b0;
        branch_flag = 2'b00;
        RegWrite = 1'b0;
        RbSelect = 1'b0;
        AluSrc = 2'b00;
        AluOp = 4'b0000;
        AluOp2 = 1'b0;
        PCSrc = 1'b0;
        double_jump_flag = 1'b0;
        case(Op)
            //NOP
            default: begin
                MemRead = 4'b0000;
                MemWrite = 4'b0000;
                MemToReg = 2'b00;
                MemSignExtend = 1'b0;
                RegWrite = 1'b0;
                AluSrc = 2'b00;
                AluOp = 4'b0000;
                PCSrc = 1'b0;
            end

            //ADD
            8'b00001000: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
            end

            //MUL
            8'b00011000: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluOp = 4'b0010;
            end

            //SUB
            8'b00010000: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluOp = 4'b0001;
            end

            //AND
            8'b00101000: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluOp = 4'b0101;
            end

            //OR
            8'b00110000: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluOp = 4'b0100;
            end

            //XOR
            8'b00111000: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluOp = 4'b0011;
            end

            //MULA
            8'b00000111: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluOp = 4'b0010;
                AluOp2 = 1'b1;
            end

            //SLT
            8'b01000000: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluOp = 4'b1001;
            end

            //ADDI
            8'b00000011: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluSrc = 2'b01;
                AluOp = 4'b0000;
            end

            //SUBI
            8'b00001011: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluSrc = 2'b01;
                AluOp = 4'b0001;
            end

            //MULI
            8'b00010011: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluSrc = 2'b01;
                AluOp = 4'b0010;
            end

            //ORI
            8'b00011011: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluSrc = 2'b01;
                AluOp = 4'b0100;
            end

            //XORI
            8'b00100011: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluSrc = 2'b01;
                AluOp = 4'b0011;
            end

            //ANDI
            8'b00101011: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluSrc = 2'b01;
                AluOp = 4'b0101;
            end

            //SW
            8'b00011001: begin
                MemWrite = 4'b1111;
                RbSelect = 1'b1;
                AluSrc = 2'b01;
            end

            //SH
            8'b00010001: begin
                MemWrite = 4'b0011;
                RbSelect = 1'b1;
                AluSrc = 2'b01;
            end

            //SB
            8'b00001001: begin
                MemWrite = 4'b0001;
                RbSelect = 1'b1;
                AluSrc = 2'b01;
            end

            //LW
            8'b00110001: begin
                MemRead = 4'b1111;
                MemToReg = 2'b00;
                RegWrite = 1'b1;
                RbSelect = 1'b1;
                AluSrc = 2'b01;
            end

            //LH
            8'b00101001: begin
                MemRead = 4'b0011;
                MemToReg = 2'b00;
                RegWrite = 1'b1;
                RbSelect = 1'b1;
                AluSrc = 2'b01;
            end

            //LB
            8'b00100001: begin
                MemRead = 4'b0001;
                MemToReg = 2'b00;
                RegWrite = 1'b1;
                RbSelect = 1'b1;
                AluSrc = 2'b01;
            end

            //LHS
            8'b01010001: begin
                MemSignExtend = 1'b1;
                MemRead = 4'b0011;
                MemToReg = 2'b00;
                RegWrite = 1'b1;
                RbSelect = 1'b1;
                AluSrc = 2'b01;
            end

            //LBS
            8'b01001001: begin
                MemSignExtend = 1'b1;
                MemRead = 4'b0001;
                MemToReg = 2'b00;
                RegWrite = 1'b1;
                RbSelect = 1'b1;
                AluSrc = 2'b01;
            end

            //BEQ
            8'b00111001 : begin
                RbSelect = 1'b1;
                branch_flag = 2'b01;
                AluOp = 4'b0001;
            end

            //BNE
            8'b01000001 : begin
                RbSelect = 1'b1;
                branch_flag = 2'b10;
                AluOp = 4'b0001;
            end

            //JAL
            8'b00000100: begin
                jump_flag = 1'b1;
                MemToReg = 2'b10;
                RegWrite = 1'b1;
                PCSrc = 1'b1;
            end

            //SLTI
            8'b00110011: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluSrc = 2'b01;
                AluOp = 4'b1001;
            end

            //SLL
            8'b01001000: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluOp = 4'b0110;
                AluSrc = 2'b10;
            end

            //SRL
            8'b01010000: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluOp = 4'b1000;
                AluSrc = 2'b10;
            end

            //SRA
            8'b01011000: begin
                MemToReg = 2'b01;
                RegWrite = 1'b1;
                AluOp = 4'b0111;
                AluSrc = 2'b10;
            end

            //SSLD
            8'b00111011: begin
                double_jump_flag = 1'b1;
                RbSelect = 1'b1;
                AluOp = 4'b1001;
            end

        endcase
    end
endmodule
