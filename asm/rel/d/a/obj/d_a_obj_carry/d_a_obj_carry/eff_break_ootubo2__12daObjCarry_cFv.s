lbl_804777F4:
/* 804777F4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 804777F8  7C 08 02 A6 */	mflr r0
/* 804777FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80477800  3C 80 80 48 */	lis r4, lit_7860@ha /* 0x8047A4A4@ha */
/* 80477804  C0 04 A4 A4 */	lfs f0, lit_7860@l(r4)  /* 0x8047A4A4@l */
/* 80477808  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8047780C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80477810  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80477814  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80477818  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8047781C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80477820  FC 00 00 18 */	frsp f0, f0
/* 80477824  D0 01 00 08 */	stfs f0, 8(r1)
/* 80477828  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8047782C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80477830  38 80 00 00 */	li r4, 0
/* 80477834  38 A1 00 08 */	addi r5, r1, 8
/* 80477838  4B FF F9 89 */	bl eff_break_tuboBmd__12daObjCarry_cFUs4cXyz
/* 8047783C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80477840  7C 08 03 A6 */	mtlr r0
/* 80477844  38 21 00 30 */	addi r1, r1, 0x30
/* 80477848  4E 80 00 20 */	blr 