lbl_80023B70:
/* 80023B70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80023B74  7C 08 02 A6 */	mflr r0
/* 80023B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80023B7C  A8 63 00 50 */	lha r3, 0x50(r3)
/* 80023B80  4B FF E4 D1 */	bl fpcLd_Load__Fs
/* 80023B84  2C 03 00 04 */	cmpwi r3, 4
/* 80023B88  41 82 00 20 */	beq lbl_80023BA8
/* 80023B8C  40 80 00 24 */	bge lbl_80023BB0
/* 80023B90  2C 03 00 00 */	cmpwi r3, 0
/* 80023B94  41 82 00 0C */	beq lbl_80023BA0
/* 80023B98  48 00 00 18 */	b lbl_80023BB0
/* 80023B9C  48 00 00 14 */	b lbl_80023BB0
lbl_80023BA0:
/* 80023BA0  38 60 00 00 */	li r3, 0
/* 80023BA4  48 00 00 10 */	b lbl_80023BB4
lbl_80023BA8:
/* 80023BA8  38 60 00 02 */	li r3, 2
/* 80023BAC  48 00 00 08 */	b lbl_80023BB4
lbl_80023BB0:
/* 80023BB0  38 60 00 05 */	li r3, 5
lbl_80023BB4:
/* 80023BB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80023BB8  7C 08 03 A6 */	mtlr r0
/* 80023BBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80023BC0  4E 80 00 20 */	blr 