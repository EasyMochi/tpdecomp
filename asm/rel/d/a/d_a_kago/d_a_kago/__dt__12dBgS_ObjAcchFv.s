lbl_808549B8:
/* 808549B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 808549BC  7C 08 02 A6 */	mflr r0
/* 808549C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 808549C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 808549C8  93 C1 00 08 */	stw r30, 8(r1)
/* 808549CC  7C 7E 1B 79 */	or. r30, r3, r3
/* 808549D0  7C 9F 23 78 */	mr r31, r4
/* 808549D4  41 82 00 38 */	beq lbl_80854A0C
/* 808549D8  3C 80 80 85 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x80854F24@ha */
/* 808549DC  38 84 4F 24 */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x80854F24@l */
/* 808549E0  90 9E 00 10 */	stw r4, 0x10(r30)
/* 808549E4  38 04 00 0C */	addi r0, r4, 0xc
/* 808549E8  90 1E 00 14 */	stw r0, 0x14(r30)
/* 808549EC  38 04 00 18 */	addi r0, r4, 0x18
/* 808549F0  90 1E 00 24 */	stw r0, 0x24(r30)
/* 808549F4  38 80 00 00 */	li r4, 0
/* 808549F8  4B 82 15 9D */	bl __dt__9dBgS_AcchFv
/* 808549FC  7F E0 07 35 */	extsh. r0, r31
/* 80854A00  40 81 00 0C */	ble lbl_80854A0C
/* 80854A04  7F C3 F3 78 */	mr r3, r30
/* 80854A08  4B A7 A3 35 */	bl __dl__FPv
lbl_80854A0C:
/* 80854A0C  7F C3 F3 78 */	mr r3, r30
/* 80854A10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80854A14  83 C1 00 08 */	lwz r30, 8(r1)
/* 80854A18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80854A1C  7C 08 03 A6 */	mtlr r0
/* 80854A20  38 21 00 10 */	addi r1, r1, 0x10
/* 80854A24  4E 80 00 20 */	blr 