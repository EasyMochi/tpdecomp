lbl_800B26AC:
/* 800B26AC  88 03 2F 8D */	lbz r0, 0x2f8d(r3)
/* 800B26B0  54 03 07 7A */	rlwinm r3, r0, 0, 0x1d, 0x1d
/* 800B26B4  4E 80 00 20 */	blr 