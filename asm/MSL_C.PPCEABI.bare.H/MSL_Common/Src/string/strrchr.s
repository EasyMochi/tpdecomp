lbl_803688DC:
/* 803688DC  38 A3 FF FF */	addi r5, r3, -1
/* 803688E0  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 803688E4  38 60 00 00 */	li r3, 0
/* 803688E8  48 00 00 10 */	b lbl_803688F8
lbl_803688EC:
/* 803688EC  7C 04 00 40 */	cmplw r4, r0
/* 803688F0  40 82 00 08 */	bne lbl_803688F8
/* 803688F4  7C A3 2B 78 */	mr r3, r5
lbl_803688F8:
/* 803688F8  8C 85 00 01 */	lbzu r4, 1(r5)
/* 803688FC  28 04 00 00 */	cmplwi r4, 0
/* 80368900  40 82 FF EC */	bne lbl_803688EC
/* 80368904  28 03 00 00 */	cmplwi r3, 0
/* 80368908  4C 82 00 20 */	bnelr 
/* 8036890C  28 00 00 00 */	cmplwi r0, 0
/* 80368910  41 82 00 0C */	beq lbl_8036891C
/* 80368914  38 60 00 00 */	li r3, 0
/* 80368918  4E 80 00 20 */	blr 
lbl_8036891C:
/* 8036891C  7C A3 2B 78 */	mr r3, r5
/* 80368920  4E 80 00 20 */	blr 