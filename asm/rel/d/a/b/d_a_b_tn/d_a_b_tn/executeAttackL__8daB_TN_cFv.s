lbl_806292F8:
/* 806292F8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 806292FC  7C 08 02 A6 */	mflr r0
/* 80629300  90 01 00 64 */	stw r0, 0x64(r1)
/* 80629304  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80629308  F3 E1 00 58 */	psq_st f31, 88(r1), 0, 0 /* qr0 */
/* 8062930C  39 61 00 50 */	addi r11, r1, 0x50
/* 80629310  4B D3 8E C9 */	bl _savegpr_28
/* 80629314  7C 7C 1B 78 */	mr r28, r3
/* 80629318  3C 80 80 63 */	lis r4, lit_3920@ha /* 0x8062E634@ha */
/* 8062931C  3B C4 E6 34 */	addi r30, r4, lit_3920@l /* 0x8062E634@l */
/* 80629320  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80629324  3B E4 61 C0 */	addi r31, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80629328  80 9F 5D AC */	lwz r4, 0x5dac(r31)
/* 8062932C  4B 9F 13 E5 */	bl fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 80629330  7C 7D 1B 78 */	mr r29, r3
/* 80629334  7F 83 E3 78 */	mr r3, r28
/* 80629338  80 9F 5D AC */	lwz r4, 0x5dac(r31)
/* 8062933C  4B 9F 14 A5 */	bl fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 80629340  FF E0 08 90 */	fmr f31, f1
/* 80629344  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80629348  D0 1C 05 2C */	stfs f0, 0x52c(r28)
/* 8062934C  A8 1C 04 E6 */	lha r0, 0x4e6(r28)
/* 80629350  B0 1C 04 DE */	sth r0, 0x4de(r28)
/* 80629354  80 1C 06 F4 */	lwz r0, 0x6f4(r28)
/* 80629358  2C 00 00 0A */	cmpwi r0, 0xa
/* 8062935C  41 82 00 64 */	beq lbl_806293C0
/* 80629360  40 80 00 30 */	bge lbl_80629390
/* 80629364  2C 00 00 02 */	cmpwi r0, 2
/* 80629368  41 82 05 24 */	beq lbl_8062988C
/* 8062936C  40 80 00 14 */	bge lbl_80629380
/* 80629370  2C 00 00 00 */	cmpwi r0, 0
/* 80629374  41 82 00 4C */	beq lbl_806293C0
/* 80629378  40 80 02 90 */	bge lbl_80629608
/* 8062937C  48 00 09 84 */	b lbl_80629D00
lbl_80629380:
/* 80629380  2C 00 00 04 */	cmpwi r0, 4
/* 80629384  41 82 09 50 */	beq lbl_80629CD4
/* 80629388  40 80 09 78 */	bge lbl_80629D00
/* 8062938C  48 00 09 18 */	b lbl_80629CA4
lbl_80629390:
/* 80629390  2C 00 00 65 */	cmpwi r0, 0x65
/* 80629394  41 82 03 84 */	beq lbl_80629718
/* 80629398  40 80 00 1C */	bge lbl_806293B4
/* 8062939C  2C 00 00 14 */	cmpwi r0, 0x14
/* 806293A0  41 82 00 20 */	beq lbl_806293C0
/* 806293A4  40 80 09 5C */	bge lbl_80629D00
/* 806293A8  2C 00 00 0C */	cmpwi r0, 0xc
/* 806293AC  40 80 09 54 */	bge lbl_80629D00
/* 806293B0  48 00 01 80 */	b lbl_80629530
lbl_806293B4:
/* 806293B4  2C 00 00 67 */	cmpwi r0, 0x67
/* 806293B8  40 80 09 48 */	bge lbl_80629D00
/* 806293BC  48 00 05 30 */	b lbl_806298EC
lbl_806293C0:
/* 806293C0  38 00 00 00 */	li r0, 0
/* 806293C4  90 1C 0A 6C */	stw r0, 0xa6c(r28)
/* 806293C8  80 1C 06 F4 */	lwz r0, 0x6f4(r28)
/* 806293CC  98 1C 0A 9B */	stb r0, 0xa9b(r28)
/* 806293D0  48 00 52 39 */	bl checkNowWolf__9daPy_py_cFv
/* 806293D4  28 03 00 00 */	cmplwi r3, 0
/* 806293D8  41 82 00 24 */	beq lbl_806293FC
/* 806293DC  3C 60 80 63 */	lis r3, l_HIO@ha /* 0x8062F02C@ha */
/* 806293E0  38 63 F0 2C */	addi r3, r3, l_HIO@l /* 0x8062F02C@l */
/* 806293E4  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 806293E8  FC 00 00 1E */	fctiwz f0, f0
/* 806293EC  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 806293F0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 806293F4  90 1C 0A 70 */	stw r0, 0xa70(r28)
/* 806293F8  48 00 00 4C */	b lbl_80629444
lbl_806293FC:
/* 806293FC  88 1C 0A A5 */	lbz r0, 0xaa5(r28)
/* 80629400  28 00 00 00 */	cmplwi r0, 0
/* 80629404  40 82 00 24 */	bne lbl_80629428
/* 80629408  3C 60 80 63 */	lis r3, l_HIO@ha /* 0x8062F02C@ha */
/* 8062940C  38 63 F0 2C */	addi r3, r3, l_HIO@l /* 0x8062F02C@l */
/* 80629410  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80629414  FC 00 00 1E */	fctiwz f0, f0
/* 80629418  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8062941C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80629420  90 1C 0A 70 */	stw r0, 0xa70(r28)
/* 80629424  48 00 00 20 */	b lbl_80629444
lbl_80629428:
/* 80629428  3C 60 80 63 */	lis r3, l_HIO@ha /* 0x8062F02C@ha */
/* 8062942C  38 63 F0 2C */	addi r3, r3, l_HIO@l /* 0x8062F02C@l */
/* 80629430  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80629434  FC 00 00 1E */	fctiwz f0, f0
/* 80629438  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8062943C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80629440  90 1C 0A 70 */	stw r0, 0xa70(r28)
lbl_80629444:
/* 80629444  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 80629448  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8062944C  40 80 00 60 */	bge lbl_806294AC
/* 80629450  88 1C 0A 9B */	lbz r0, 0xa9b(r28)
/* 80629454  28 00 00 14 */	cmplwi r0, 0x14
/* 80629458  40 82 00 30 */	bne lbl_80629488
/* 8062945C  38 00 00 04 */	li r0, 4
/* 80629460  90 1C 06 F4 */	stw r0, 0x6f4(r28)
/* 80629464  7F 83 E3 78 */	mr r3, r28
/* 80629468  38 80 00 2A */	li r4, 0x2a
/* 8062946C  38 A0 00 02 */	li r5, 2
/* 80629470  C0 3E 01 28 */	lfs f1, 0x128(r30)
/* 80629474  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80629478  4B FF 74 51 */	bl setBck__8daB_TN_cFiUcff
/* 8062947C  38 00 00 03 */	li r0, 3
/* 80629480  90 1C 0A 6C */	stw r0, 0xa6c(r28)
/* 80629484  48 00 00 A0 */	b lbl_80629524
lbl_80629488:
/* 80629488  38 00 00 02 */	li r0, 2
/* 8062948C  90 1C 06 F4 */	stw r0, 0x6f4(r28)
/* 80629490  7F 83 E3 78 */	mr r3, r28
/* 80629494  38 80 00 15 */	li r4, 0x15
/* 80629498  38 A0 00 00 */	li r5, 0
/* 8062949C  C0 3E 01 28 */	lfs f1, 0x128(r30)
/* 806294A0  C0 5E 00 08 */	lfs f2, 8(r30)
/* 806294A4  4B FF 74 25 */	bl setBck__8daB_TN_cFiUcff
/* 806294A8  48 00 00 7C */	b lbl_80629524
lbl_806294AC:
/* 806294AC  88 1C 0A 9B */	lbz r0, 0xa9b(r28)
/* 806294B0  28 00 00 14 */	cmplwi r0, 0x14
/* 806294B4  41 82 00 0C */	beq lbl_806294C0
/* 806294B8  28 00 00 0A */	cmplwi r0, 0xa
/* 806294BC  40 82 00 48 */	bne lbl_80629504
lbl_806294C0:
/* 806294C0  38 00 00 03 */	li r0, 3
/* 806294C4  90 1C 06 F4 */	stw r0, 0x6f4(r28)
/* 806294C8  7F 83 E3 78 */	mr r3, r28
/* 806294CC  38 80 00 2A */	li r4, 0x2a
/* 806294D0  38 A0 00 02 */	li r5, 2
/* 806294D4  C0 3E 01 28 */	lfs f1, 0x128(r30)
/* 806294D8  C0 5E 00 08 */	lfs f2, 8(r30)
/* 806294DC  4B FF 73 ED */	bl setBck__8daB_TN_cFiUcff
/* 806294E0  88 1C 0A 9B */	lbz r0, 0xa9b(r28)
/* 806294E4  28 00 00 0A */	cmplwi r0, 0xa
/* 806294E8  40 82 00 10 */	bne lbl_806294F8
/* 806294EC  38 00 00 05 */	li r0, 5
/* 806294F0  90 1C 0A 6C */	stw r0, 0xa6c(r28)
/* 806294F4  48 00 00 30 */	b lbl_80629524
lbl_806294F8:
/* 806294F8  38 00 00 0A */	li r0, 0xa
/* 806294FC  90 1C 0A 6C */	stw r0, 0xa6c(r28)
/* 80629500  48 00 00 24 */	b lbl_80629524
lbl_80629504:
/* 80629504  38 00 00 01 */	li r0, 1
/* 80629508  90 1C 06 F4 */	stw r0, 0x6f4(r28)
/* 8062950C  7F 83 E3 78 */	mr r3, r28
/* 80629510  38 80 00 14 */	li r4, 0x14
/* 80629514  38 A0 00 00 */	li r5, 0
/* 80629518  C0 3E 01 28 */	lfs f1, 0x128(r30)
/* 8062951C  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80629520  4B FF 73 A9 */	bl setBck__8daB_TN_cFiUcff
lbl_80629524:
/* 80629524  38 00 00 00 */	li r0, 0
/* 80629528  90 1C 0A 8C */	stw r0, 0xa8c(r28)
/* 8062952C  48 00 07 D4 */	b lbl_80629D00
lbl_80629530:
/* 80629530  98 1C 0A 9B */	stb r0, 0xa9b(r28)
/* 80629534  48 00 50 D5 */	bl checkNowWolf__9daPy_py_cFv
/* 80629538  28 03 00 00 */	cmplwi r3, 0
/* 8062953C  41 82 00 24 */	beq lbl_80629560
/* 80629540  3C 60 80 63 */	lis r3, l_HIO@ha /* 0x8062F02C@ha */
/* 80629544  38 63 F0 2C */	addi r3, r3, l_HIO@l /* 0x8062F02C@l */
/* 80629548  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8062954C  FC 00 00 1E */	fctiwz f0, f0
/* 80629550  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80629554  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80629558  90 1C 0A 70 */	stw r0, 0xa70(r28)
/* 8062955C  48 00 00 4C */	b lbl_806295A8
lbl_80629560:
/* 80629560  88 1C 0A A5 */	lbz r0, 0xaa5(r28)
/* 80629564  28 00 00 00 */	cmplwi r0, 0
/* 80629568  40 82 00 24 */	bne lbl_8062958C
/* 8062956C  3C 60 80 63 */	lis r3, l_HIO@ha /* 0x8062F02C@ha */
/* 80629570  38 63 F0 2C */	addi r3, r3, l_HIO@l /* 0x8062F02C@l */
/* 80629574  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80629578  FC 00 00 1E */	fctiwz f0, f0
/* 8062957C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80629580  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80629584  90 1C 0A 70 */	stw r0, 0xa70(r28)
/* 80629588  48 00 00 20 */	b lbl_806295A8
lbl_8062958C:
/* 8062958C  3C 60 80 63 */	lis r3, l_HIO@ha /* 0x8062F02C@ha */
/* 80629590  38 63 F0 2C */	addi r3, r3, l_HIO@l /* 0x8062F02C@l */
/* 80629594  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80629598  FC 00 00 1E */	fctiwz f0, f0
/* 8062959C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 806295A0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 806295A4  90 1C 0A 70 */	stw r0, 0xa70(r28)
lbl_806295A8:
/* 806295A8  4B C3 E2 C5 */	bl cM_rnd__Fv
/* 806295AC  C0 1E 00 9C */	lfs f0, 0x9c(r30)
/* 806295B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806295B4  40 80 00 28 */	bge lbl_806295DC
/* 806295B8  38 00 00 02 */	li r0, 2
/* 806295BC  90 1C 06 F4 */	stw r0, 0x6f4(r28)
/* 806295C0  7F 83 E3 78 */	mr r3, r28
/* 806295C4  38 80 00 15 */	li r4, 0x15
/* 806295C8  38 A0 00 00 */	li r5, 0
/* 806295CC  C0 3E 00 50 */	lfs f1, 0x50(r30)
/* 806295D0  C0 5E 00 08 */	lfs f2, 8(r30)
/* 806295D4  4B FF 72 F5 */	bl setBck__8daB_TN_cFiUcff
/* 806295D8  48 00 00 24 */	b lbl_806295FC
lbl_806295DC:
/* 806295DC  38 00 00 01 */	li r0, 1
/* 806295E0  90 1C 06 F4 */	stw r0, 0x6f4(r28)
/* 806295E4  7F 83 E3 78 */	mr r3, r28
/* 806295E8  38 80 00 14 */	li r4, 0x14
/* 806295EC  38 A0 00 00 */	li r5, 0
/* 806295F0  C0 3E 00 5C */	lfs f1, 0x5c(r30)
/* 806295F4  C0 5E 00 08 */	lfs f2, 8(r30)
/* 806295F8  4B FF 72 D1 */	bl setBck__8daB_TN_cFiUcff
lbl_806295FC:
/* 806295FC  38 00 00 00 */	li r0, 0
/* 80629600  90 1C 0A 8C */	stw r0, 0xa8c(r28)
/* 80629604  48 00 06 FC */	b lbl_80629D00
lbl_80629608:
/* 80629608  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 8062960C  38 63 00 0C */	addi r3, r3, 0xc
/* 80629610  C0 3E 00 5C */	lfs f1, 0x5c(r30)
/* 80629614  4B CF EE 19 */	bl checkPass__12J3DFrameCtrlFf
/* 80629618  2C 03 00 00 */	cmpwi r3, 0
/* 8062961C  41 82 00 30 */	beq lbl_8062964C
/* 80629620  3C 60 00 07 */	lis r3, 0x0007 /* 0x000703AD@ha */
/* 80629624  38 03 03 AD */	addi r0, r3, 0x03AD /* 0x000703AD@l */
/* 80629628  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8062962C  38 7C 06 4C */	addi r3, r28, 0x64c
/* 80629630  38 81 00 2C */	addi r4, r1, 0x2c
/* 80629634  38 A0 00 00 */	li r5, 0
/* 80629638  38 C0 FF FF */	li r6, -1
/* 8062963C  81 9C 06 4C */	lwz r12, 0x64c(r28)
/* 80629640  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80629644  7D 89 03 A6 */	mtctr r12
/* 80629648  4E 80 04 21 */	bctrl 
lbl_8062964C:
/* 8062964C  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629650  38 63 00 0C */	addi r3, r3, 0xc
/* 80629654  C0 3E 01 58 */	lfs f1, 0x158(r30)
/* 80629658  4B CF ED D5 */	bl checkPass__12J3DFrameCtrlFf
/* 8062965C  2C 03 00 00 */	cmpwi r3, 0
/* 80629660  41 82 00 2C */	beq lbl_8062968C
/* 80629664  3C 60 00 07 */	lis r3, 0x0007 /* 0x000703E8@ha */
/* 80629668  38 03 03 E8 */	addi r0, r3, 0x03E8 /* 0x000703E8@l */
/* 8062966C  90 01 00 28 */	stw r0, 0x28(r1)
/* 80629670  38 7C 06 4C */	addi r3, r28, 0x64c
/* 80629674  38 81 00 28 */	addi r4, r1, 0x28
/* 80629678  38 A0 FF FF */	li r5, -1
/* 8062967C  81 9C 06 4C */	lwz r12, 0x64c(r28)
/* 80629680  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80629684  7D 89 03 A6 */	mtctr r12
/* 80629688  4E 80 04 21 */	bctrl 
lbl_8062968C:
/* 8062968C  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629690  38 63 00 0C */	addi r3, r3, 0xc
/* 80629694  C0 3E 00 50 */	lfs f1, 0x50(r30)
/* 80629698  4B CF ED 95 */	bl checkPass__12J3DFrameCtrlFf
/* 8062969C  2C 03 00 00 */	cmpwi r3, 0
/* 806296A0  41 82 00 30 */	beq lbl_806296D0
/* 806296A4  3C 60 00 07 */	lis r3, 0x0007 /* 0x000703A8@ha */
/* 806296A8  38 03 03 A8 */	addi r0, r3, 0x03A8 /* 0x000703A8@l */
/* 806296AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 806296B0  38 7C 06 4C */	addi r3, r28, 0x64c
/* 806296B4  38 81 00 24 */	addi r4, r1, 0x24
/* 806296B8  38 A0 00 00 */	li r5, 0
/* 806296BC  38 C0 FF FF */	li r6, -1
/* 806296C0  81 9C 06 4C */	lwz r12, 0x64c(r28)
/* 806296C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 806296C8  7D 89 03 A6 */	mtctr r12
/* 806296CC  4E 80 04 21 */	bctrl 
lbl_806296D0:
/* 806296D0  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 806296D4  38 63 00 0C */	addi r3, r3, 0xc
/* 806296D8  C0 3E 01 40 */	lfs f1, 0x140(r30)
/* 806296DC  4B CF ED 51 */	bl checkPass__12J3DFrameCtrlFf
/* 806296E0  2C 03 00 00 */	cmpwi r3, 0
/* 806296E4  41 82 00 34 */	beq lbl_80629718
/* 806296E8  38 00 00 65 */	li r0, 0x65
/* 806296EC  90 1C 06 F4 */	stw r0, 0x6f4(r28)
/* 806296F0  3C 60 80 63 */	lis r3, l_HIO@ha /* 0x8062F02C@ha */
/* 806296F4  38 63 F0 2C */	addi r3, r3, l_HIO@l /* 0x8062F02C@l */
/* 806296F8  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 806296FC  FC 00 00 1E */	fctiwz f0, f0
/* 80629700  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80629704  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80629708  90 1C 0A 6C */	stw r0, 0xa6c(r28)
/* 8062970C  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80629710  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629714  D0 03 00 18 */	stfs f0, 0x18(r3)
lbl_80629718:
/* 80629718  88 1C 0A 9B */	lbz r0, 0xa9b(r28)
/* 8062971C  28 00 00 00 */	cmplwi r0, 0
/* 80629720  41 82 00 30 */	beq lbl_80629750
/* 80629724  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629728  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8062972C  C0 1E 01 58 */	lfs f0, 0x158(r30)
/* 80629730  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80629734  40 80 00 1C */	bge lbl_80629750
/* 80629738  38 7C 04 E6 */	addi r3, r28, 0x4e6
/* 8062973C  7F A4 EB 78 */	mr r4, r29
/* 80629740  38 A0 00 04 */	li r5, 4
/* 80629744  38 C0 08 00 */	li r6, 0x800
/* 80629748  38 E0 00 10 */	li r7, 0x10
/* 8062974C  4B C4 6D F5 */	bl cLib_addCalcAngleS__FPsssss
lbl_80629750:
/* 80629750  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629754  38 63 00 0C */	addi r3, r3, 0xc
/* 80629758  C0 3E 00 58 */	lfs f1, 0x58(r30)
/* 8062975C  4B CF EC D1 */	bl checkPass__12J3DFrameCtrlFf
/* 80629760  2C 03 00 00 */	cmpwi r3, 0
/* 80629764  41 82 00 30 */	beq lbl_80629794
/* 80629768  3C 60 00 07 */	lis r3, 0x0007 /* 0x000703A7@ha */
/* 8062976C  38 03 03 A7 */	addi r0, r3, 0x03A7 /* 0x000703A7@l */
/* 80629770  90 01 00 20 */	stw r0, 0x20(r1)
/* 80629774  38 7C 06 4C */	addi r3, r28, 0x64c
/* 80629778  38 81 00 20 */	addi r4, r1, 0x20
/* 8062977C  38 A0 00 00 */	li r5, 0
/* 80629780  38 C0 FF FF */	li r6, -1
/* 80629784  81 9C 06 4C */	lwz r12, 0x64c(r28)
/* 80629788  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8062978C  7D 89 03 A6 */	mtctr r12
/* 80629790  4E 80 04 21 */	bctrl 
lbl_80629794:
/* 80629794  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629798  38 63 00 0C */	addi r3, r3, 0xc
/* 8062979C  C0 3E 00 5C */	lfs f1, 0x5c(r30)
/* 806297A0  4B CF EC 8D */	bl checkPass__12J3DFrameCtrlFf
/* 806297A4  2C 03 00 00 */	cmpwi r3, 0
/* 806297A8  41 82 00 14 */	beq lbl_806297BC
/* 806297AC  7F 83 E3 78 */	mr r3, r28
/* 806297B0  38 80 00 01 */	li r4, 1
/* 806297B4  4B FF 72 2D */	bl setSwordAtBit__8daB_TN_cFi
/* 806297B8  48 00 00 28 */	b lbl_806297E0
lbl_806297BC:
/* 806297BC  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 806297C0  38 63 00 0C */	addi r3, r3, 0xc
/* 806297C4  C0 3E 02 1C */	lfs f1, 0x21c(r30)
/* 806297C8  4B CF EC 65 */	bl checkPass__12J3DFrameCtrlFf
/* 806297CC  2C 03 00 00 */	cmpwi r3, 0
/* 806297D0  41 82 00 10 */	beq lbl_806297E0
/* 806297D4  7F 83 E3 78 */	mr r3, r28
/* 806297D8  38 80 00 00 */	li r4, 0
/* 806297DC  4B FF 72 05 */	bl setSwordAtBit__8daB_TN_cFi
lbl_806297E0:
/* 806297E0  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 806297E4  38 63 00 0C */	addi r3, r3, 0xc
/* 806297E8  C0 3E 01 58 */	lfs f1, 0x158(r30)
/* 806297EC  4B CF EC 41 */	bl checkPass__12J3DFrameCtrlFf
/* 806297F0  2C 03 00 00 */	cmpwi r3, 0
/* 806297F4  41 82 00 10 */	beq lbl_80629804
/* 806297F8  38 00 00 00 */	li r0, 0
/* 806297FC  98 1C 0A 91 */	stb r0, 0xa91(r28)
/* 80629800  48 00 00 24 */	b lbl_80629824
lbl_80629804:
/* 80629804  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629808  38 63 00 0C */	addi r3, r3, 0xc
/* 8062980C  C0 3E 00 AC */	lfs f1, 0xac(r30)
/* 80629810  4B CF EC 1D */	bl checkPass__12J3DFrameCtrlFf
/* 80629814  2C 03 00 00 */	cmpwi r3, 0
/* 80629818  41 82 00 0C */	beq lbl_80629824
/* 8062981C  38 00 00 01 */	li r0, 1
/* 80629820  98 1C 0A 91 */	stb r0, 0xa91(r28)
lbl_80629824:
/* 80629824  80 1C 06 F4 */	lwz r0, 0x6f4(r28)
/* 80629828  2C 00 00 65 */	cmpwi r0, 0x65
/* 8062982C  40 82 04 D4 */	bne lbl_80629D00
/* 80629830  80 1C 0A 6C */	lwz r0, 0xa6c(r28)
/* 80629834  2C 00 00 00 */	cmpwi r0, 0
/* 80629838  40 82 04 C8 */	bne lbl_80629D00
/* 8062983C  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80629840  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629844  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80629848  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 8062984C  38 80 00 01 */	li r4, 1
/* 80629850  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80629854  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80629858  40 82 00 18 */	bne lbl_80629870
/* 8062985C  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80629860  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80629864  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80629868  41 82 00 08 */	beq lbl_80629870
/* 8062986C  38 80 00 00 */	li r4, 0
lbl_80629870:
/* 80629870  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80629874  41 82 04 8C */	beq lbl_80629D00
/* 80629878  7F 83 E3 78 */	mr r3, r28
/* 8062987C  38 80 00 09 */	li r4, 9
/* 80629880  38 A0 00 00 */	li r5, 0
/* 80629884  4B FF 71 45 */	bl setActionMode__8daB_TN_cFii
/* 80629888  48 00 04 78 */	b lbl_80629D00
lbl_8062988C:
/* 8062988C  88 1C 0A 9B */	lbz r0, 0xa9b(r28)
/* 80629890  28 00 00 00 */	cmplwi r0, 0
/* 80629894  41 82 00 50 */	beq lbl_806298E4
/* 80629898  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 8062989C  38 63 00 0C */	addi r3, r3, 0xc
/* 806298A0  C0 3E 00 30 */	lfs f1, 0x30(r30)
/* 806298A4  4B CF EB 89 */	bl checkPass__12J3DFrameCtrlFf
/* 806298A8  2C 03 00 00 */	cmpwi r3, 0
/* 806298AC  41 82 00 40 */	beq lbl_806298EC
/* 806298B0  38 00 00 66 */	li r0, 0x66
/* 806298B4  90 1C 06 F4 */	stw r0, 0x6f4(r28)
/* 806298B8  3C 60 80 63 */	lis r3, l_HIO@ha /* 0x8062F02C@ha */
/* 806298BC  38 63 F0 2C */	addi r3, r3, l_HIO@l /* 0x8062F02C@l */
/* 806298C0  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 806298C4  FC 00 00 1E */	fctiwz f0, f0
/* 806298C8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 806298CC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 806298D0  90 1C 0A 6C */	stw r0, 0xa6c(r28)
/* 806298D4  C0 1E 00 04 */	lfs f0, 4(r30)
/* 806298D8  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 806298DC  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 806298E0  48 00 00 0C */	b lbl_806298EC
lbl_806298E4:
/* 806298E4  38 00 00 66 */	li r0, 0x66
/* 806298E8  90 1C 06 F4 */	stw r0, 0x6f4(r28)
lbl_806298EC:
/* 806298EC  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 806298F0  38 63 00 0C */	addi r3, r3, 0xc
/* 806298F4  C0 3E 02 1C */	lfs f1, 0x21c(r30)
/* 806298F8  4B CF EB 35 */	bl checkPass__12J3DFrameCtrlFf
/* 806298FC  2C 03 00 00 */	cmpwi r3, 0
/* 80629900  41 82 00 34 */	beq lbl_80629934
/* 80629904  3C 60 00 07 */	lis r3, 0x0007 /* 0x000703E6@ha */
/* 80629908  38 03 03 E6 */	addi r0, r3, 0x03E6 /* 0x000703E6@l */
/* 8062990C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80629910  38 7C 06 4C */	addi r3, r28, 0x64c
/* 80629914  38 81 00 1C */	addi r4, r1, 0x1c
/* 80629918  38 A0 00 00 */	li r5, 0
/* 8062991C  38 C0 FF FF */	li r6, -1
/* 80629920  81 9C 06 4C */	lwz r12, 0x64c(r28)
/* 80629924  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80629928  7D 89 03 A6 */	mtctr r12
/* 8062992C  4E 80 04 21 */	bctrl 
/* 80629930  48 00 01 64 */	b lbl_80629A94
lbl_80629934:
/* 80629934  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629938  38 63 00 0C */	addi r3, r3, 0xc
/* 8062993C  C0 3E 01 40 */	lfs f1, 0x140(r30)
/* 80629940  4B CF EA ED */	bl checkPass__12J3DFrameCtrlFf
/* 80629944  2C 03 00 00 */	cmpwi r3, 0
/* 80629948  41 82 00 34 */	beq lbl_8062997C
/* 8062994C  3C 60 00 07 */	lis r3, 0x0007 /* 0x000703AE@ha */
/* 80629950  38 03 03 AE */	addi r0, r3, 0x03AE /* 0x000703AE@l */
/* 80629954  90 01 00 18 */	stw r0, 0x18(r1)
/* 80629958  38 7C 06 4C */	addi r3, r28, 0x64c
/* 8062995C  38 81 00 18 */	addi r4, r1, 0x18
/* 80629960  38 A0 00 00 */	li r5, 0
/* 80629964  38 C0 FF FF */	li r6, -1
/* 80629968  81 9C 06 4C */	lwz r12, 0x64c(r28)
/* 8062996C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80629970  7D 89 03 A6 */	mtctr r12
/* 80629974  4E 80 04 21 */	bctrl 
/* 80629978  48 00 01 1C */	b lbl_80629A94
lbl_8062997C:
/* 8062997C  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629980  38 63 00 0C */	addi r3, r3, 0xc
/* 80629984  C0 3E 00 98 */	lfs f1, 0x98(r30)
/* 80629988  4B CF EA A5 */	bl checkPass__12J3DFrameCtrlFf
/* 8062998C  2C 03 00 00 */	cmpwi r3, 0
/* 80629990  41 82 00 30 */	beq lbl_806299C0
/* 80629994  3C 60 00 07 */	lis r3, 0x0007 /* 0x000703E7@ha */
/* 80629998  38 03 03 E7 */	addi r0, r3, 0x03E7 /* 0x000703E7@l */
/* 8062999C  90 01 00 14 */	stw r0, 0x14(r1)
/* 806299A0  38 7C 06 4C */	addi r3, r28, 0x64c
/* 806299A4  38 81 00 14 */	addi r4, r1, 0x14
/* 806299A8  38 A0 FF FF */	li r5, -1
/* 806299AC  81 9C 06 4C */	lwz r12, 0x64c(r28)
/* 806299B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 806299B4  7D 89 03 A6 */	mtctr r12
/* 806299B8  4E 80 04 21 */	bctrl 
/* 806299BC  48 00 00 D8 */	b lbl_80629A94
lbl_806299C0:
/* 806299C0  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 806299C4  38 63 00 0C */	addi r3, r3, 0xc
/* 806299C8  C0 3E 01 C0 */	lfs f1, 0x1c0(r30)
/* 806299CC  4B CF EA 61 */	bl checkPass__12J3DFrameCtrlFf
/* 806299D0  2C 03 00 00 */	cmpwi r3, 0
/* 806299D4  41 82 00 34 */	beq lbl_80629A08
/* 806299D8  3C 60 00 07 */	lis r3, 0x0007 /* 0x000703AE@ha */
/* 806299DC  38 03 03 AE */	addi r0, r3, 0x03AE /* 0x000703AE@l */
/* 806299E0  90 01 00 10 */	stw r0, 0x10(r1)
/* 806299E4  38 7C 06 4C */	addi r3, r28, 0x64c
/* 806299E8  38 81 00 10 */	addi r4, r1, 0x10
/* 806299EC  38 A0 00 00 */	li r5, 0
/* 806299F0  38 C0 FF FF */	li r6, -1
/* 806299F4  81 9C 06 4C */	lwz r12, 0x64c(r28)
/* 806299F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 806299FC  7D 89 03 A6 */	mtctr r12
/* 80629A00  4E 80 04 21 */	bctrl 
/* 80629A04  48 00 00 90 */	b lbl_80629A94
lbl_80629A08:
/* 80629A08  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629A0C  38 63 00 0C */	addi r3, r3, 0xc
/* 80629A10  C0 3E 02 04 */	lfs f1, 0x204(r30)
/* 80629A14  4B CF EA 19 */	bl checkPass__12J3DFrameCtrlFf
/* 80629A18  2C 03 00 00 */	cmpwi r3, 0
/* 80629A1C  41 82 00 34 */	beq lbl_80629A50
/* 80629A20  3C 60 00 07 */	lis r3, 0x0007 /* 0x000703A8@ha */
/* 80629A24  38 03 03 A8 */	addi r0, r3, 0x03A8 /* 0x000703A8@l */
/* 80629A28  90 01 00 0C */	stw r0, 0xc(r1)
/* 80629A2C  38 7C 06 4C */	addi r3, r28, 0x64c
/* 80629A30  38 81 00 0C */	addi r4, r1, 0xc
/* 80629A34  38 A0 00 00 */	li r5, 0
/* 80629A38  38 C0 FF FF */	li r6, -1
/* 80629A3C  81 9C 06 4C */	lwz r12, 0x64c(r28)
/* 80629A40  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80629A44  7D 89 03 A6 */	mtctr r12
/* 80629A48  4E 80 04 21 */	bctrl 
/* 80629A4C  48 00 00 48 */	b lbl_80629A94
lbl_80629A50:
/* 80629A50  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629A54  38 63 00 0C */	addi r3, r3, 0xc
/* 80629A58  C0 3E 02 20 */	lfs f1, 0x220(r30)
/* 80629A5C  4B CF E9 D1 */	bl checkPass__12J3DFrameCtrlFf
/* 80629A60  2C 03 00 00 */	cmpwi r3, 0
/* 80629A64  41 82 00 30 */	beq lbl_80629A94
/* 80629A68  3C 60 00 07 */	lis r3, 0x0007 /* 0x000703A7@ha */
/* 80629A6C  38 03 03 A7 */	addi r0, r3, 0x03A7 /* 0x000703A7@l */
/* 80629A70  90 01 00 08 */	stw r0, 8(r1)
/* 80629A74  38 7C 06 4C */	addi r3, r28, 0x64c
/* 80629A78  38 81 00 08 */	addi r4, r1, 8
/* 80629A7C  38 A0 00 00 */	li r5, 0
/* 80629A80  38 C0 FF FF */	li r6, -1
/* 80629A84  81 9C 06 4C */	lwz r12, 0x64c(r28)
/* 80629A88  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80629A8C  7D 89 03 A6 */	mtctr r12
/* 80629A90  4E 80 04 21 */	bctrl 
lbl_80629A94:
/* 80629A94  80 1C 0A 8C */	lwz r0, 0xa8c(r28)
/* 80629A98  2C 00 00 00 */	cmpwi r0, 0
/* 80629A9C  41 82 00 1C */	beq lbl_80629AB8
/* 80629AA0  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629AA4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80629AA8  C0 1E 00 50 */	lfs f0, 0x50(r30)
/* 80629AAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80629AB0  40 80 00 08 */	bge lbl_80629AB8
/* 80629AB4  D0 1C 05 2C */	stfs f0, 0x52c(r28)
lbl_80629AB8:
/* 80629AB8  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629ABC  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80629AC0  C0 1E 01 4C */	lfs f0, 0x14c(r30)
/* 80629AC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80629AC8  40 80 00 1C */	bge lbl_80629AE4
/* 80629ACC  38 7C 04 E6 */	addi r3, r28, 0x4e6
/* 80629AD0  7F A4 EB 78 */	mr r4, r29
/* 80629AD4  38 A0 00 08 */	li r5, 8
/* 80629AD8  38 C0 04 00 */	li r6, 0x400
/* 80629ADC  38 E0 00 10 */	li r7, 0x10
/* 80629AE0  4B C4 6A 61 */	bl cLib_addCalcAngleS__FPsssss
lbl_80629AE4:
/* 80629AE4  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629AE8  38 63 00 0C */	addi r3, r3, 0xc
/* 80629AEC  C0 3E 02 10 */	lfs f1, 0x210(r30)
/* 80629AF0  4B CF E9 3D */	bl checkPass__12J3DFrameCtrlFf
/* 80629AF4  2C 03 00 00 */	cmpwi r3, 0
/* 80629AF8  41 82 00 20 */	beq lbl_80629B18
/* 80629AFC  7F 83 E3 78 */	mr r3, r28
/* 80629B00  38 80 00 01 */	li r4, 1
/* 80629B04  4B FF 6E DD */	bl setSwordAtBit__8daB_TN_cFi
/* 80629B08  7F 83 E3 78 */	mr r3, r28
/* 80629B0C  38 80 00 00 */	li r4, 0
/* 80629B10  4B FF 6F D5 */	bl setSwordAtBreak__8daB_TN_cFi
/* 80629B14  48 00 00 34 */	b lbl_80629B48
lbl_80629B18:
/* 80629B18  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629B1C  38 63 00 0C */	addi r3, r3, 0xc
/* 80629B20  C0 3E 02 24 */	lfs f1, 0x224(r30)
/* 80629B24  4B CF E9 09 */	bl checkPass__12J3DFrameCtrlFf
/* 80629B28  2C 03 00 00 */	cmpwi r3, 0
/* 80629B2C  41 82 00 1C */	beq lbl_80629B48
/* 80629B30  7F 83 E3 78 */	mr r3, r28
/* 80629B34  38 80 00 00 */	li r4, 0
/* 80629B38  4B FF 6E A9 */	bl setSwordAtBit__8daB_TN_cFi
/* 80629B3C  7F 83 E3 78 */	mr r3, r28
/* 80629B40  38 80 00 01 */	li r4, 1
/* 80629B44  4B FF 6F A1 */	bl setSwordAtBreak__8daB_TN_cFi
lbl_80629B48:
/* 80629B48  88 1C 0A 9B */	lbz r0, 0xa9b(r28)
/* 80629B4C  28 00 00 00 */	cmplwi r0, 0
/* 80629B50  40 82 00 48 */	bne lbl_80629B98
/* 80629B54  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629B58  38 63 00 0C */	addi r3, r3, 0xc
/* 80629B5C  C0 3E 01 4C */	lfs f1, 0x14c(r30)
/* 80629B60  4B CF E8 CD */	bl checkPass__12J3DFrameCtrlFf
/* 80629B64  2C 03 00 00 */	cmpwi r3, 0
/* 80629B68  41 82 00 10 */	beq lbl_80629B78
/* 80629B6C  38 00 00 00 */	li r0, 0
/* 80629B70  98 1C 0A 91 */	stb r0, 0xa91(r28)
/* 80629B74  48 00 00 24 */	b lbl_80629B98
lbl_80629B78:
/* 80629B78  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629B7C  38 63 00 0C */	addi r3, r3, 0xc
/* 80629B80  C0 3E 02 28 */	lfs f1, 0x228(r30)
/* 80629B84  4B CF E8 A9 */	bl checkPass__12J3DFrameCtrlFf
/* 80629B88  2C 03 00 00 */	cmpwi r3, 0
/* 80629B8C  41 82 00 0C */	beq lbl_80629B98
/* 80629B90  38 00 00 01 */	li r0, 1
/* 80629B94  98 1C 0A 91 */	stb r0, 0xa91(r28)
lbl_80629B98:
/* 80629B98  88 1C 0A 9B */	lbz r0, 0xa9b(r28)
/* 80629B9C  28 00 00 00 */	cmplwi r0, 0
/* 80629BA0  40 82 00 9C */	bne lbl_80629C3C
/* 80629BA4  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 80629BA8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80629BAC  40 80 00 90 */	bge lbl_80629C3C
/* 80629BB0  80 7F 5D AC */	lwz r3, 0x5dac(r31)
/* 80629BB4  A8 03 05 6C */	lha r0, 0x56c(r3)
/* 80629BB8  7C 00 07 35 */	extsh. r0, r0
/* 80629BBC  40 82 00 80 */	bne lbl_80629C3C
/* 80629BC0  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629BC4  38 63 00 0C */	addi r3, r3, 0xc
/* 80629BC8  C0 3E 00 AC */	lfs f1, 0xac(r30)
/* 80629BCC  4B CF E8 61 */	bl checkPass__12J3DFrameCtrlFf
/* 80629BD0  2C 03 00 00 */	cmpwi r3, 0
/* 80629BD4  41 82 00 0C */	beq lbl_80629BE0
/* 80629BD8  38 00 00 0A */	li r0, 0xa
/* 80629BDC  90 1C 0A 8C */	stw r0, 0xa8c(r28)
lbl_80629BE0:
/* 80629BE0  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629BE4  38 63 00 0C */	addi r3, r3, 0xc
/* 80629BE8  C0 3E 02 2C */	lfs f1, 0x22c(r30)
/* 80629BEC  4B CF E8 41 */	bl checkPass__12J3DFrameCtrlFf
/* 80629BF0  2C 03 00 00 */	cmpwi r3, 0
/* 80629BF4  41 82 00 48 */	beq lbl_80629C3C
/* 80629BF8  80 1C 0A 8C */	lwz r0, 0xa8c(r28)
/* 80629BFC  2C 00 00 0A */	cmpwi r0, 0xa
/* 80629C00  40 82 00 3C */	bne lbl_80629C3C
/* 80629C04  7F 83 E3 78 */	mr r3, r28
/* 80629C08  38 80 00 14 */	li r4, 0x14
/* 80629C0C  38 A0 00 00 */	li r5, 0
/* 80629C10  C0 3E 00 54 */	lfs f1, 0x54(r30)
/* 80629C14  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80629C18  4B FF 6C B1 */	bl setBck__8daB_TN_cFiUcff
/* 80629C1C  7F 83 E3 78 */	mr r3, r28
/* 80629C20  38 80 00 00 */	li r4, 0
/* 80629C24  4B FF 6D BD */	bl setSwordAtBit__8daB_TN_cFi
/* 80629C28  7F 83 E3 78 */	mr r3, r28
/* 80629C2C  38 80 00 01 */	li r4, 1
/* 80629C30  4B FF 6E B5 */	bl setSwordAtBreak__8daB_TN_cFi
/* 80629C34  38 00 00 01 */	li r0, 1
/* 80629C38  90 1C 06 F4 */	stw r0, 0x6f4(r28)
lbl_80629C3C:
/* 80629C3C  80 1C 06 F4 */	lwz r0, 0x6f4(r28)
/* 80629C40  2C 00 00 66 */	cmpwi r0, 0x66
/* 80629C44  40 82 00 BC */	bne lbl_80629D00
/* 80629C48  80 1C 0A 6C */	lwz r0, 0xa6c(r28)
/* 80629C4C  2C 00 00 00 */	cmpwi r0, 0
/* 80629C50  40 82 00 B0 */	bne lbl_80629D00
/* 80629C54  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80629C58  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629C5C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80629C60  80 7C 06 00 */	lwz r3, 0x600(r28)
/* 80629C64  38 80 00 01 */	li r4, 1
/* 80629C68  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80629C6C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80629C70  40 82 00 18 */	bne lbl_80629C88
/* 80629C74  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80629C78  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80629C7C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80629C80  41 82 00 08 */	beq lbl_80629C88
/* 80629C84  38 80 00 00 */	li r4, 0
lbl_80629C88:
/* 80629C88  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80629C8C  41 82 00 74 */	beq lbl_80629D00
/* 80629C90  7F 83 E3 78 */	mr r3, r28
/* 80629C94  38 80 00 09 */	li r4, 9
/* 80629C98  38 A0 00 00 */	li r5, 0
/* 80629C9C  4B FF 6D 2D */	bl setActionMode__8daB_TN_cFii
/* 80629CA0  48 00 00 60 */	b lbl_80629D00
lbl_80629CA4:
/* 80629CA4  80 1C 0A 6C */	lwz r0, 0xa6c(r28)
/* 80629CA8  2C 00 00 00 */	cmpwi r0, 0
/* 80629CAC  40 82 00 54 */	bne lbl_80629D00
/* 80629CB0  38 00 00 01 */	li r0, 1
/* 80629CB4  90 1C 06 F4 */	stw r0, 0x6f4(r28)
/* 80629CB8  7F 83 E3 78 */	mr r3, r28
/* 80629CBC  38 80 00 14 */	li r4, 0x14
/* 80629CC0  38 A0 00 00 */	li r5, 0
/* 80629CC4  C0 3E 01 28 */	lfs f1, 0x128(r30)
/* 80629CC8  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80629CCC  4B FF 6B FD */	bl setBck__8daB_TN_cFiUcff
/* 80629CD0  48 00 00 30 */	b lbl_80629D00
lbl_80629CD4:
/* 80629CD4  80 1C 0A 6C */	lwz r0, 0xa6c(r28)
/* 80629CD8  2C 00 00 00 */	cmpwi r0, 0
/* 80629CDC  40 82 00 24 */	bne lbl_80629D00
/* 80629CE0  38 00 00 02 */	li r0, 2
/* 80629CE4  90 1C 06 F4 */	stw r0, 0x6f4(r28)
/* 80629CE8  7F 83 E3 78 */	mr r3, r28
/* 80629CEC  38 80 00 15 */	li r4, 0x15
/* 80629CF0  38 A0 00 00 */	li r5, 0
/* 80629CF4  C0 3E 01 28 */	lfs f1, 0x128(r30)
/* 80629CF8  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80629CFC  4B FF 6B CD */	bl setBck__8daB_TN_cFiUcff
lbl_80629D00:
/* 80629D00  E3 E1 00 58 */	psq_l f31, 88(r1), 0, 0 /* qr0 */
/* 80629D04  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80629D08  39 61 00 50 */	addi r11, r1, 0x50
/* 80629D0C  4B D3 85 19 */	bl _restgpr_28
/* 80629D10  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80629D14  7C 08 03 A6 */	mtlr r0
/* 80629D18  38 21 00 60 */	addi r1, r1, 0x60
/* 80629D1C  4E 80 00 20 */	blr 