lbl_809533D8:
/* 809533D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809533DC  7C 08 02 A6 */	mflr r0
/* 809533E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 809533E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809533E8  93 C1 00 08 */	stw r30, 8(r1)
/* 809533EC  7C 7E 1B 78 */	mr r30, r3
/* 809533F0  80 03 04 9C */	lwz r0, 0x49c(r3)
/* 809533F4  54 00 01 46 */	rlwinm r0, r0, 0, 5, 3
/* 809533F8  90 03 04 9C */	stw r0, 0x49c(r3)
/* 809533FC  3B E0 00 00 */	li r31, 0
/* 80953400  88 03 0E 25 */	lbz r0, 0xe25(r3)
/* 80953404  28 00 00 00 */	cmplwi r0, 0
/* 80953408  40 82 00 1C */	bne lbl_80953424
/* 8095340C  4B 6D C6 49 */	bl dComIfGs_wolfeye_effect_check__Fv
/* 80953410  2C 03 00 00 */	cmpwi r3, 0
/* 80953414  40 82 00 14 */	bne lbl_80953428
/* 80953418  88 1E 0A 89 */	lbz r0, 0xa89(r30)
/* 8095341C  28 00 00 00 */	cmplwi r0, 0
/* 80953420  41 82 00 08 */	beq lbl_80953428
lbl_80953424:
/* 80953424  3B E0 00 01 */	li r31, 1
lbl_80953428:
/* 80953428  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8095342C  41 82 00 10 */	beq lbl_8095343C
/* 80953430  80 1E 04 9C */	lwz r0, 0x49c(r30)
/* 80953434  64 00 08 00 */	oris r0, r0, 0x800
/* 80953438  90 1E 04 9C */	stw r0, 0x49c(r30)
lbl_8095343C:
/* 8095343C  3B E0 00 00 */	li r31, 0
/* 80953440  88 1E 0E 25 */	lbz r0, 0xe25(r30)
/* 80953444  28 00 00 00 */	cmplwi r0, 0
/* 80953448  40 82 00 1C */	bne lbl_80953464
/* 8095344C  4B 6D C6 09 */	bl dComIfGs_wolfeye_effect_check__Fv
/* 80953450  2C 03 00 00 */	cmpwi r3, 0
/* 80953454  40 82 00 14 */	bne lbl_80953468
/* 80953458  88 1E 0A 89 */	lbz r0, 0xa89(r30)
/* 8095345C  28 00 00 00 */	cmplwi r0, 0
/* 80953460  41 82 00 08 */	beq lbl_80953468
lbl_80953464:
/* 80953464  3B E0 00 01 */	li r31, 1
lbl_80953468:
/* 80953468  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8095346C  40 82 00 10 */	bne lbl_8095347C
/* 80953470  88 1E 0E 2B */	lbz r0, 0xe2b(r30)
/* 80953474  28 00 00 00 */	cmplwi r0, 0
/* 80953478  41 82 00 0C */	beq lbl_80953484
lbl_8095347C:
/* 8095347C  38 00 00 00 */	li r0, 0
/* 80953480  90 1E 05 5C */	stw r0, 0x55c(r30)
lbl_80953484:
/* 80953484  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80953488  83 C1 00 08 */	lwz r30, 8(r1)
/* 8095348C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80953490  7C 08 03 A6 */	mtlr r0
/* 80953494  38 21 00 10 */	addi r1, r1, 0x10
/* 80953498  4E 80 00 20 */	blr 