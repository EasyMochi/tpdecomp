lbl_80277404:
/* 80277404  80 A3 00 04 */	lwz r5, 4(r3)
/* 80277408  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 8027740C  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 80277410  A8 03 02 14 */	lha r0, 0x214(r3)
/* 80277414  54 00 10 3A */	slwi r0, r0, 2
/* 80277418  7C 65 02 14 */	add r3, r5, r0
/* 8027741C  88 03 00 00 */	lbz r0, 0(r3)
/* 80277420  98 04 00 8C */	stb r0, 0x8c(r4)
/* 80277424  88 03 00 01 */	lbz r0, 1(r3)
/* 80277428  98 04 00 8D */	stb r0, 0x8d(r4)
/* 8027742C  88 03 00 02 */	lbz r0, 2(r3)
/* 80277430  98 04 00 8E */	stb r0, 0x8e(r4)
/* 80277434  88 03 00 03 */	lbz r0, 3(r3)
/* 80277438  98 04 00 8F */	stb r0, 0x8f(r4)
/* 8027743C  4E 80 00 20 */	blr 