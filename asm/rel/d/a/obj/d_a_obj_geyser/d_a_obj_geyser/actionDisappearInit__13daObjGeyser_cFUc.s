lbl_80BF8158:
/* 80BF8158  38 00 00 FF */	li r0, 0xff
/* 80BF815C  98 03 07 84 */	stb r0, 0x784(r3)
/* 80BF8160  38 00 00 0A */	li r0, 0xa
/* 80BF8164  B0 03 07 60 */	sth r0, 0x760(r3)
/* 80BF8168  98 83 07 63 */	stb r4, 0x763(r3)
/* 80BF816C  38 00 00 03 */	li r0, 3
/* 80BF8170  98 03 07 62 */	stb r0, 0x762(r3)
/* 80BF8174  4E 80 00 20 */	blr 