//~ void opcode_ed(u8 bt)
{
switch (opcode) 
{
/*IN B, (C)*/
case 0x40:
	IN(B, BC);
	T_WAIT_UNTIL(8);
break;
/*OUT (C), B*/
case 0x41:
	OUT(BC, B);
	T_WAIT_UNTIL(8);
break;
/*SUBC HL, BC*/
case 0x42:
	SUBC16(HL, BC);
	T_WAIT_UNTIL(11);
break;
/*LD (@), BC*/
case 0x43:
	nn=NEXT_WORD;
	LD_RP_TO_ADDR_MPTR_16(temp16, BC, nn);
	WRITE_WORD(nn, temp16);
	T_WAIT_UNTIL(16);
break;
/*NEG*/
case 0x44:
	NEG();
	T_WAIT_UNTIL(4);
break;
/*RETN*/
case 0x45:
	RETN();
	T_WAIT_UNTIL(10);
break;
/*IM 0*/
case 0x46:
	IM_MODE(0);
	T_WAIT_UNTIL(4);
break;
/*LD I, A*/
case 0x47:
	LD(I, A);
	T_WAIT_UNTIL(5);
break;
/*IN C, (C)*/
case 0x48:
	IN(C, BC);
	T_WAIT_UNTIL(8);
break;
/*OUT (C), C*/
case 0x49:
	OUT(BC, C);
	T_WAIT_UNTIL(8);
break;
/*ADDC HL, BC*/
case 0x4a:
	ADDC16(HL, BC);
	T_WAIT_UNTIL(11);
break;
/*LD BC, (@)*/
case 0x4b:
	nn=NEXT_WORD;
	temp16=READ_WORD(nn);
	LD_RP_FROM_ADDR_MPTR_16(BC, temp16, nn);
	T_WAIT_UNTIL(16);
break;
/*NEG*/
case 0x4c:
	NEG();
	T_WAIT_UNTIL(4);
break;
/*RETI*/
case 0x4d:
	RETI();
	T_WAIT_UNTIL(10);
break;
/*IM 0*/
case 0x4e:
	IM_MODE(0);
	T_WAIT_UNTIL(4);
break;
/*LD R, A*/
case 0x4f:
	LD_R_A();
	T_WAIT_UNTIL(5);
break;
/*IN D, (C)*/
case 0x50:
	IN(D, BC);
	T_WAIT_UNTIL(8);
break;
/*OUT (C), D*/
case 0x51:
	OUT(BC, D);
	T_WAIT_UNTIL(8);
break;
/*SUBC HL, DE*/
case 0x52:
	SUBC16(HL, DE);
	T_WAIT_UNTIL(11);
break;
/*LD (@), DE*/
case 0x53:
	nn=NEXT_WORD;
	LD_RP_TO_ADDR_MPTR_16(temp16, DE, nn);
	WRITE_WORD(nn, temp16);
	T_WAIT_UNTIL(16);
break;
/*NEG*/
case 0x54:
	NEG();
	T_WAIT_UNTIL(4);
break;
/*RETN*/
case 0x55:
	RETN();
	T_WAIT_UNTIL(10);
break;
/*IM 1*/
case 0x56:
	IM_MODE(1);
	T_WAIT_UNTIL(4);
break;
/*LD A, I*/
case 0x57:
	LD_A_I();
	T_WAIT_UNTIL(5);
break;
/*IN E, (C)*/
case 0x58:
	IN(E, BC);
	T_WAIT_UNTIL(8);
break;
/*OUT (C), E*/
case 0x59:
	OUT(BC, E);
	T_WAIT_UNTIL(8);
break;
/*ADDC HL, DE*/
case 0x5a:
	ADDC16(HL, DE);
	T_WAIT_UNTIL(11);
break;
/*LD DE, (@)*/
case 0x5b:
	nn=NEXT_WORD;
	temp16=READ_WORD(nn);
	LD_RP_FROM_ADDR_MPTR_16(DE, temp16, nn);
	T_WAIT_UNTIL(16);
break;
/*NEG*/
case 0x5c:
	NEG();
	T_WAIT_UNTIL(4);
break;
/*RETI*/
case 0x5d:
	RETI();
	T_WAIT_UNTIL(10);
break;
/*IM 2*/
case 0x5e:
	IM_MODE(2);
	T_WAIT_UNTIL(4);
break;
/*LD A, R*/
case 0x5f:
	LD_A_R();
	T_WAIT_UNTIL(5);
break;
/*IN H, (C)*/
case 0x60:
	IN(H, BC);
	T_WAIT_UNTIL(8);
break;
/*OUT (C), H*/
case 0x61:
	OUT(BC, H);
	T_WAIT_UNTIL(8);
break;
/*SUBC HL, HL*/
case 0x62:
	SUBC16(HL, HL);
	T_WAIT_UNTIL(11);
break;
/*LD (@), HL*/
case 0x63:
	nn=NEXT_WORD;
	LD_RP_TO_ADDR_MPTR_16(temp16, HL, nn);
	WRITE_WORD(nn, temp16);
	T_WAIT_UNTIL(16);
break;
/*NEG*/
case 0x64:
	NEG();
	T_WAIT_UNTIL(4);
break;
/*RETN*/
case 0x65:
	RETN();
	T_WAIT_UNTIL(10);
break;
/*IM 0*/
case 0x66:
	IM_MODE(0);
	T_WAIT_UNTIL(4);
break;
/*RRD*/
case 0x67:
	RRD();
	T_WAIT_UNTIL(14);
break;
/*IN L, (C)*/
case 0x68:
	IN(L, BC);
	T_WAIT_UNTIL(8);
break;
/*OUT (C), L*/
case 0x69:
	OUT(BC, L);
	T_WAIT_UNTIL(8);
break;
/*ADDC HL, HL*/
case 0x6a:
	ADDC16(HL, HL);
	T_WAIT_UNTIL(11);
break;
/*LD HL, (@)*/
case 0x6b:
	nn=NEXT_WORD;
	temp16=READ_WORD(nn);
	LD_RP_FROM_ADDR_MPTR_16(HL, temp16, nn);
	T_WAIT_UNTIL(16);
break;
/*NEG*/
case 0x6c:
	NEG();
	T_WAIT_UNTIL(4);
break;
/*RETI*/
case 0x6d:
	RETI();
	T_WAIT_UNTIL(10);
break;
/*IM 0*/
case 0x6e:
	IM_MODE(0);
	T_WAIT_UNTIL(4);
break;
/*RLD*/
case 0x6f:
	RLD();
	T_WAIT_UNTIL(14);
break;
/*IN_F (C)*/
case 0x70:
	IN_F(BC);
	T_WAIT_UNTIL(8);
break;
/*OUT (C), 0*/
case 0x71:
	OUT(BC, 0);
	T_WAIT_UNTIL(8);
break;
/*SUBC HL, SP*/
case 0x72:
	SUBC16(HL, SP);
	T_WAIT_UNTIL(11);
break;
/*LD (@), SP*/
case 0x73:
	nn=NEXT_WORD;
	LD_RP_TO_ADDR_MPTR_16(temp16, SP, nn);
	WRITE_WORD(nn, temp16);
	T_WAIT_UNTIL(16);
break;
/*NEG*/
case 0x74:
	NEG();
	T_WAIT_UNTIL(4);
break;
/*RETN*/
case 0x75:
	RETN();
	T_WAIT_UNTIL(10);
break;
/*IM 1*/
case 0x76:
	IM_MODE(1);
	T_WAIT_UNTIL(4);
break;
/*IN A, (C)*/
case 0x78:
	IN(A, BC);
	T_WAIT_UNTIL(8);
break;
/*OUT (C), A*/
case 0x79:
	OUT(BC, A);
	T_WAIT_UNTIL(8);
break;
/*ADDC HL, SP*/
case 0x7a:
	ADDC16(HL, SP);
	T_WAIT_UNTIL(11);
break;
/*LD SP, (@)*/
case 0x7b:
	nn=NEXT_WORD;
	temp16=READ_WORD(nn);
	LD_RP_FROM_ADDR_MPTR_16(SP, temp16, nn);
	T_WAIT_UNTIL(16);
break;
/*NEG*/
case 0x7c:
	NEG();
	T_WAIT_UNTIL(4);
break;
/*RETI*/
case 0x7d:
	RETI();
	T_WAIT_UNTIL(10);
break;
/*IM 2*/
case 0x7e:
	IM_MODE(2);
	T_WAIT_UNTIL(4);
break;
/*LDI*/
case 0xa0:
	LDI();
	T_WAIT_UNTIL(12);
break;
/*CPI*/
case 0xa1:
	CPI();
	T_WAIT_UNTIL(12);
break;
/*INI*/
case 0xa2:
	INI();
	T_WAIT_UNTIL(12);
break;
/*OUTI*/
case 0xa3:
	OUTI();
	T_WAIT_UNTIL(12);
break;
/*LDD*/
case 0xa8:
	LDD();
	T_WAIT_UNTIL(12);
break;
/*CPD*/
case 0xa9:
	CPD();
	T_WAIT_UNTIL(12);
break;
/*IND*/
case 0xaa:
	IND();
	T_WAIT_UNTIL(12);
break;
/*OUTD*/
case 0xab:
	OUTD();
	T_WAIT_UNTIL(12);
break;
/*LDIR*/
case 0xb0:
	LDIR();
break;
/*CPIR*/
case 0xb1:
	CPIR();
break;
/*INIR*/
case 0xb2:
	INIR();
break;
/*OTIR*/
case 0xb3:
	OTIR();
break;
/*LDDR*/
case 0xb8:
	LDDR();
break;
/*CPDR*/
case 0xb9:
	CPDR();
break;
/*INDR*/
case 0xba:
	INDR();
break;
/*OTDR*/
case 0xbb:
	OTDR();
break;
/*NONI*/
default:
	T_WAIT_UNTIL(4);
}
}
/*
static void (*opcode_ed [0x100])(void)={
	noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	op_ED_0x40, op_ED_0x41, op_ED_0x42, op_ED_0x43, op_ED_0x44, op_ED_0x45, op_ED_0x46, op_ED_0x47, op_ED_0x48, op_ED_0x49, op_ED_0x4a, op_ED_0x4b, op_ED_0x4c, op_ED_0x4d, op_ED_0x4e, op_ED_0x4f,
	op_ED_0x50, op_ED_0x51, op_ED_0x52, op_ED_0x53, op_ED_0x54, op_ED_0x55, op_ED_0x56, op_ED_0x57, op_ED_0x58, op_ED_0x59, op_ED_0x5a, op_ED_0x5b, op_ED_0x5c, op_ED_0x5d, op_ED_0x5e, op_ED_0x5f,
	op_ED_0x60, op_ED_0x61, op_ED_0x62, op_ED_0x63, op_ED_0x64, op_ED_0x65, op_ED_0x66, op_ED_0x67, op_ED_0x68, op_ED_0x69, op_ED_0x6a, op_ED_0x6b, op_ED_0x6c, op_ED_0x6d, op_ED_0x6e, op_ED_0x6f,
	op_ED_0x70, op_ED_0x71, op_ED_0x72, op_ED_0x73, op_ED_0x74, op_ED_0x75, op_ED_0x76, noni_ED   , op_ED_0x78, op_ED_0x79, op_ED_0x7a, op_ED_0x7b, op_ED_0x7c, op_ED_0x7d, op_ED_0x7e, noni_ED   ,
	noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	op_ED_0xa0, op_ED_0xa1, op_ED_0xa2, op_ED_0xa3, noni_ED   , noni_ED   , noni_ED   , noni_ED   , op_ED_0xa8, op_ED_0xa9, op_ED_0xaa, op_ED_0xab, noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	op_ED_0xb0, op_ED_0xb1, op_ED_0xb2, op_ED_0xb3, noni_ED   , noni_ED   , noni_ED   , noni_ED   , op_ED_0xb8, op_ED_0xb9, op_ED_0xba, op_ED_0xbb, noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   ,
	noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED   , noni_ED
};
*/