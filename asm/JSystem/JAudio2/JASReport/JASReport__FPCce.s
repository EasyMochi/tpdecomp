lbl_80290F64:
/* 80290F64  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80290F68  7C 08 02 A6 */	mflr r0
/* 80290F6C  90 01 00 84 */	stw r0, 0x84(r1)
/* 80290F70  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80290F74  7C 7F 1B 78 */	mr r31, r3
/* 80290F78  40 86 00 24 */	bne cr1, lbl_80290F9C
/* 80290F7C  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 80290F80  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80290F84  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 80290F88  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 80290F8C  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 80290F90  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 80290F94  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 80290F98  D9 01 00 60 */	stfd f8, 0x60(r1)
lbl_80290F9C:
/* 80290F9C  90 61 00 08 */	stw r3, 8(r1)
/* 80290FA0  90 81 00 0C */	stw r4, 0xc(r1)
/* 80290FA4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80290FA8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80290FAC  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80290FB0  91 01 00 1C */	stw r8, 0x1c(r1)
/* 80290FB4  91 21 00 20 */	stw r9, 0x20(r1)
/* 80290FB8  91 41 00 24 */	stw r10, 0x24(r1)
/* 80290FBC  80 0D 8C A0 */	lwz r0, sBuffer(r13)
/* 80290FC0  28 00 00 00 */	cmplwi r0, 0
/* 80290FC4  41 82 00 88 */	beq lbl_8029104C
/* 80290FC8  3C 00 01 00 */	lis r0, 0x100
/* 80290FCC  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80290FD0  38 01 00 88 */	addi r0, r1, 0x88
/* 80290FD4  90 01 00 70 */	stw r0, 0x70(r1)
/* 80290FD8  38 01 00 08 */	addi r0, r1, 8
/* 80290FDC  90 01 00 74 */	stw r0, 0x74(r1)
/* 80290FE0  3C 60 80 43 */	lis r3, sMutex@ha /* 0x80431660@ha */
/* 80290FE4  38 63 16 60 */	addi r3, r3, sMutex@l /* 0x80431660@l */
/* 80290FE8  90 61 00 68 */	stw r3, 0x68(r1)
/* 80290FEC  48 0A E0 55 */	bl OSLockMutex
/* 80290FF0  80 6D 8C A0 */	lwz r3, sBuffer(r13)
/* 80290FF4  80 0D 8C AC */	lwz r0, sTop(r13)
/* 80290FF8  54 00 30 32 */	slwi r0, r0, 6
/* 80290FFC  7C 63 02 14 */	add r3, r3, r0
/* 80291000  38 80 00 40 */	li r4, 0x40
/* 80291004  7F E5 FB 78 */	mr r5, r31
/* 80291008  38 C1 00 6C */	addi r6, r1, 0x6c
/* 8029100C  48 0D 56 85 */	bl vsnprintf
/* 80291010  80 6D 8C AC */	lwz r3, sTop(r13)
/* 80291014  38 03 00 01 */	addi r0, r3, 1
/* 80291018  90 0D 8C AC */	stw r0, sTop(r13)
/* 8029101C  80 8D 8C A4 */	lwz r4, sLineMax(r13)
/* 80291020  7C 00 20 00 */	cmpw r0, r4
/* 80291024  41 80 00 0C */	blt lbl_80291030
/* 80291028  38 00 00 00 */	li r0, 0
/* 8029102C  90 0D 8C AC */	stw r0, sTop(r13)
lbl_80291030:
/* 80291030  80 6D 8C A8 */	lwz r3, sLineCount(r13)
/* 80291034  7C 03 20 00 */	cmpw r3, r4
/* 80291038  40 80 00 0C */	bge lbl_80291044
/* 8029103C  38 03 00 01 */	addi r0, r3, 1
/* 80291040  90 0D 8C A8 */	stw r0, sLineCount(r13)
lbl_80291044:
/* 80291044  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80291048  48 0A E0 D5 */	bl OSUnlockMutex
lbl_8029104C:
/* 8029104C  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80291050  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80291054  7C 08 03 A6 */	mtlr r0
/* 80291058  38 21 00 80 */	addi r1, r1, 0x80
/* 8029105C  4E 80 00 20 */	blr 