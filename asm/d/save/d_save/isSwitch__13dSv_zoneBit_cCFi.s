lbl_80034D50:
/* 80034D50  38 A0 00 01 */	li r5, 1
/* 80034D54  54 80 07 3E */	clrlwi r0, r4, 0x1c
/* 80034D58  7C A5 00 30 */	slw r5, r5, r0
/* 80034D5C  7C 80 26 70 */	srawi r0, r4, 4
/* 80034D60  54 00 08 3C */	slwi r0, r0, 1
/* 80034D64  7C 03 02 2E */	lhzx r0, r3, r0
/* 80034D68  7C A3 00 38 */	and r3, r5, r0
/* 80034D6C  30 03 FF FF */	addic r0, r3, -1
/* 80034D70  7C 60 19 10 */	subfe r3, r0, r3
/* 80034D74  4E 80 00 20 */	blr 