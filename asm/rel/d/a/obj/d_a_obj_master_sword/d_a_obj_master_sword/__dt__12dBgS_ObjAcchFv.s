lbl_80C9120C:
/* 80C9120C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C91210  7C 08 02 A6 */	mflr r0
/* 80C91214  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C91218  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C9121C  93 C1 00 08 */	stw r30, 8(r1)
/* 80C91220  7C 7E 1B 79 */	or. r30, r3, r3
/* 80C91224  7C 9F 23 78 */	mr r31, r4
/* 80C91228  41 82 00 38 */	beq lbl_80C91260
/* 80C9122C  3C 80 80 C9 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x80C91A88@ha */
/* 80C91230  38 84 1A 88 */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x80C91A88@l */
/* 80C91234  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80C91238  38 04 00 0C */	addi r0, r4, 0xc
/* 80C9123C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80C91240  38 04 00 18 */	addi r0, r4, 0x18
/* 80C91244  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80C91248  38 80 00 00 */	li r4, 0
/* 80C9124C  4B 3E 4D 49 */	bl __dt__9dBgS_AcchFv
/* 80C91250  7F E0 07 35 */	extsh. r0, r31
/* 80C91254  40 81 00 0C */	ble lbl_80C91260
/* 80C91258  7F C3 F3 78 */	mr r3, r30
/* 80C9125C  4B 63 DA E1 */	bl __dl__FPv
lbl_80C91260:
/* 80C91260  7F C3 F3 78 */	mr r3, r30
/* 80C91264  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C91268  83 C1 00 08 */	lwz r30, 8(r1)
/* 80C9126C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C91270  7C 08 03 A6 */	mtlr r0
/* 80C91274  38 21 00 10 */	addi r1, r1, 0x10
/* 80C91278  4E 80 00 20 */	blr 