lbl_80659114:
/* 80659114  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80659118  7C 08 02 A6 */	mflr r0
/* 8065911C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80659120  39 61 00 20 */	addi r11, r1, 0x20
/* 80659124  4B D0 90 B9 */	bl _savegpr_29
/* 80659128  7C 7D 1B 78 */	mr r29, r3
/* 8065912C  7C 9E 23 78 */	mr r30, r4
/* 80659130  7C BF 2B 78 */	mr r31, r5
/* 80659134  38 00 00 03 */	li r0, 3
/* 80659138  B0 03 0C 5C */	sth r0, 0xc5c(r3)
/* 8065913C  38 7D 0C 48 */	addi r3, r29, 0xc48
/* 80659140  4B D0 8E D9 */	bl __ptmf_test
/* 80659144  2C 03 00 00 */	cmpwi r3, 0
/* 80659148  41 82 00 14 */	beq lbl_8065915C
/* 8065914C  7F A3 EB 78 */	mr r3, r29
/* 80659150  39 9D 0C 48 */	addi r12, r29, 0xc48
/* 80659154  4B D0 8F 31 */	bl __ptmf_scall
/* 80659158  60 00 00 00 */	nop 
lbl_8065915C:
/* 8065915C  9B FD 0C AA */	stb r31, 0xcaa(r29)
/* 80659160  38 00 00 00 */	li r0, 0
/* 80659164  B0 1D 0C 5C */	sth r0, 0xc5c(r29)
/* 80659168  80 7E 00 00 */	lwz r3, 0(r30)
/* 8065916C  80 1E 00 04 */	lwz r0, 4(r30)
/* 80659170  90 7D 0C 48 */	stw r3, 0xc48(r29)
/* 80659174  90 1D 0C 4C */	stw r0, 0xc4c(r29)
/* 80659178  80 1E 00 08 */	lwz r0, 8(r30)
/* 8065917C  90 1D 0C 50 */	stw r0, 0xc50(r29)
/* 80659180  38 7D 0C 48 */	addi r3, r29, 0xc48
/* 80659184  4B D0 8E 95 */	bl __ptmf_test
/* 80659188  2C 03 00 00 */	cmpwi r3, 0
/* 8065918C  41 82 00 14 */	beq lbl_806591A0
/* 80659190  7F A3 EB 78 */	mr r3, r29
/* 80659194  39 9D 0C 48 */	addi r12, r29, 0xc48
/* 80659198  4B D0 8E ED */	bl __ptmf_scall
/* 8065919C  60 00 00 00 */	nop 
lbl_806591A0:
/* 806591A0  38 60 00 01 */	li r3, 1
/* 806591A4  39 61 00 20 */	addi r11, r1, 0x20
/* 806591A8  4B D0 90 81 */	bl _restgpr_29
/* 806591AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 806591B0  7C 08 03 A6 */	mtlr r0
/* 806591B4  38 21 00 20 */	addi r1, r1, 0x20
/* 806591B8  4E 80 00 20 */	blr 