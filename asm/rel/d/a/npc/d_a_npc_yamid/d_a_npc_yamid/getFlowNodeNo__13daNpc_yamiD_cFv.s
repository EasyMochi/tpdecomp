lbl_80B43934:
/* 80B43934  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B43938  7C 08 02 A6 */	mflr r0
/* 80B4393C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B43940  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B43944  93 C1 00 08 */	stw r30, 8(r1)
/* 80B43948  7C 7E 1B 78 */	mr r30, r3
/* 80B4394C  3B E0 FF FF */	li r31, -1
/* 80B43950  38 60 02 3A */	li r3, 0x23a
/* 80B43954  4B 60 91 59 */	bl daNpcT_chkEvtBit__FUl
/* 80B43958  2C 03 00 00 */	cmpwi r3, 0
/* 80B4395C  41 82 00 0C */	beq lbl_80B43968
/* 80B43960  3B E0 03 26 */	li r31, 0x326
/* 80B43964  48 00 00 18 */	b lbl_80B4397C
lbl_80B43968:
/* 80B43968  A8 1E 04 B4 */	lha r0, 0x4b4(r30)
/* 80B4396C  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 80B43970  28 00 FF FF */	cmplwi r0, 0xffff
/* 80B43974  41 82 00 08 */	beq lbl_80B4397C
/* 80B43978  7C 1F 03 78 */	mr r31, r0
lbl_80B4397C:
/* 80B4397C  7F E3 FB 78 */	mr r3, r31
/* 80B43980  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B43984  83 C1 00 08 */	lwz r30, 8(r1)
/* 80B43988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B4398C  7C 08 03 A6 */	mtlr r0
/* 80B43990  38 21 00 10 */	addi r1, r1, 0x10
/* 80B43994  4E 80 00 20 */	blr 