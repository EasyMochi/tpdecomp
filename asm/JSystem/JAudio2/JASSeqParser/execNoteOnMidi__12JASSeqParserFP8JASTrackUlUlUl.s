lbl_80295540:
/* 80295540  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80295544  7C 08 02 A6 */	mflr r0
/* 80295548  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029554C  7C 83 23 78 */	mr r3, r4
/* 80295550  7C A4 2B 78 */	mr r4, r5
/* 80295554  7C C5 33 78 */	mr r5, r6
/* 80295558  7C E6 3B 78 */	mr r6, r7
/* 8029555C  4B FF C9 DD */	bl noteOn__8JASTrackFUlUlUl
/* 80295560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80295564  7C 08 03 A6 */	mtlr r0
/* 80295568  38 21 00 10 */	addi r1, r1, 0x10
/* 8029556C  4E 80 00 20 */	blr 