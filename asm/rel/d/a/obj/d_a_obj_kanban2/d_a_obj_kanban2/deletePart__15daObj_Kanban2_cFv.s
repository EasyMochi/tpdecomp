lbl_805822F0:
/* 805822F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 805822F4  7C 08 02 A6 */	mflr r0
/* 805822F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 805822FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80582300  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80582304  7C 7E 1B 78 */	mr r30, r3
/* 80582308  3C 60 80 58 */	lis r3, lit_3970@ha /* 0x80585620@ha */
/* 8058230C  3B E3 56 20 */	addi r31, r3, lit_3970@l /* 0x80585620@l */
/* 80582310  80 1E 06 20 */	lwz r0, 0x620(r30)
/* 80582314  28 00 00 01 */	cmplwi r0, 1
/* 80582318  41 81 01 58 */	bgt lbl_80582470
/* 8058231C  80 1E 04 A0 */	lwz r0, 0x4a0(r30)
/* 80582320  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80582324  41 82 02 64 */	beq lbl_80582588
/* 80582328  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8058232C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80582330  80 83 5D AC */	lwz r4, 0x5dac(r3)
/* 80582334  38 7E 04 D0 */	addi r3, r30, 0x4d0
/* 80582338  38 84 04 D0 */	addi r4, r4, 0x4d0
/* 8058233C  4B DC 50 61 */	bl PSVECSquareDistance
/* 80582340  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80582344  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80582348  40 81 00 58 */	ble lbl_805823A0
/* 8058234C  FC 00 08 34 */	frsqrte f0, f1
/* 80582350  C8 9F 00 38 */	lfd f4, 0x38(r31)
/* 80582354  FC 44 00 32 */	fmul f2, f4, f0
/* 80582358  C8 7F 00 40 */	lfd f3, 0x40(r31)
/* 8058235C  FC 00 00 32 */	fmul f0, f0, f0
/* 80582360  FC 01 00 32 */	fmul f0, f1, f0
/* 80582364  FC 03 00 28 */	fsub f0, f3, f0
/* 80582368  FC 02 00 32 */	fmul f0, f2, f0
/* 8058236C  FC 44 00 32 */	fmul f2, f4, f0
/* 80582370  FC 00 00 32 */	fmul f0, f0, f0
/* 80582374  FC 01 00 32 */	fmul f0, f1, f0
/* 80582378  FC 03 00 28 */	fsub f0, f3, f0
/* 8058237C  FC 02 00 32 */	fmul f0, f2, f0
/* 80582380  FC 44 00 32 */	fmul f2, f4, f0
/* 80582384  FC 00 00 32 */	fmul f0, f0, f0
/* 80582388  FC 01 00 32 */	fmul f0, f1, f0
/* 8058238C  FC 03 00 28 */	fsub f0, f3, f0
/* 80582390  FC 02 00 32 */	fmul f0, f2, f0
/* 80582394  FC 21 00 32 */	fmul f1, f1, f0
/* 80582398  FC 20 08 18 */	frsp f1, f1
/* 8058239C  48 00 00 88 */	b lbl_80582424
lbl_805823A0:
/* 805823A0  C8 1F 00 48 */	lfd f0, 0x48(r31)
/* 805823A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805823A8  40 80 00 10 */	bge lbl_805823B8
/* 805823AC  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 805823B0  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 805823B4  48 00 00 70 */	b lbl_80582424
lbl_805823B8:
/* 805823B8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 805823BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 805823C0  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 805823C4  3C 00 7F 80 */	lis r0, 0x7f80
/* 805823C8  7C 03 00 00 */	cmpw r3, r0
/* 805823CC  41 82 00 14 */	beq lbl_805823E0
/* 805823D0  40 80 00 40 */	bge lbl_80582410
/* 805823D4  2C 03 00 00 */	cmpwi r3, 0
/* 805823D8  41 82 00 20 */	beq lbl_805823F8
/* 805823DC  48 00 00 34 */	b lbl_80582410
lbl_805823E0:
/* 805823E0  54 80 02 7F */	clrlwi. r0, r4, 9
/* 805823E4  41 82 00 0C */	beq lbl_805823F0
/* 805823E8  38 00 00 01 */	li r0, 1
/* 805823EC  48 00 00 28 */	b lbl_80582414
lbl_805823F0:
/* 805823F0  38 00 00 02 */	li r0, 2
/* 805823F4  48 00 00 20 */	b lbl_80582414
lbl_805823F8:
/* 805823F8  54 80 02 7F */	clrlwi. r0, r4, 9
/* 805823FC  41 82 00 0C */	beq lbl_80582408
/* 80582400  38 00 00 05 */	li r0, 5
/* 80582404  48 00 00 10 */	b lbl_80582414
lbl_80582408:
/* 80582408  38 00 00 03 */	li r0, 3
/* 8058240C  48 00 00 08 */	b lbl_80582414
lbl_80582410:
/* 80582410  38 00 00 04 */	li r0, 4
lbl_80582414:
/* 80582414  2C 00 00 01 */	cmpwi r0, 1
/* 80582418  40 82 00 0C */	bne lbl_80582424
/* 8058241C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80582420  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80582424:
/* 80582424  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 80582428  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8058242C  40 81 00 14 */	ble lbl_80582440
/* 80582430  7F C3 F3 78 */	mr r3, r30
/* 80582434  4B A9 78 49 */	bl fopAcM_delete__FP10fopAc_ac_c
/* 80582438  38 60 00 01 */	li r3, 1
/* 8058243C  48 00 01 50 */	b lbl_8058258C
lbl_80582440:
/* 80582440  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 80582444  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80582448  40 81 01 40 */	ble lbl_80582588
/* 8058244C  80 9E 06 1C */	lwz r4, 0x61c(r30)
/* 80582450  3C 60 00 02 */	lis r3, 0x0002 /* 0x0001EE55@ha */
/* 80582454  38 03 EE 55 */	addi r0, r3, 0xEE55 /* 0x0001EE55@l */
/* 80582458  7C 80 00 39 */	and. r0, r4, r0
/* 8058245C  41 82 01 2C */	beq lbl_80582588
/* 80582460  7F C3 F3 78 */	mr r3, r30
/* 80582464  4B A9 78 19 */	bl fopAcM_delete__FP10fopAc_ac_c
/* 80582468  38 60 00 01 */	li r3, 1
/* 8058246C  48 00 01 20 */	b lbl_8058258C
lbl_80582470:
/* 80582470  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80582474  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80582478  80 83 5D AC */	lwz r4, 0x5dac(r3)
/* 8058247C  38 7E 04 D0 */	addi r3, r30, 0x4d0
/* 80582480  38 84 04 D0 */	addi r4, r4, 0x4d0
/* 80582484  4B DC 4F 19 */	bl PSVECSquareDistance
/* 80582488  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 8058248C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80582490  40 81 00 58 */	ble lbl_805824E8
/* 80582494  FC 00 08 34 */	frsqrte f0, f1
/* 80582498  C8 9F 00 38 */	lfd f4, 0x38(r31)
/* 8058249C  FC 44 00 32 */	fmul f2, f4, f0
/* 805824A0  C8 7F 00 40 */	lfd f3, 0x40(r31)
/* 805824A4  FC 00 00 32 */	fmul f0, f0, f0
/* 805824A8  FC 01 00 32 */	fmul f0, f1, f0
/* 805824AC  FC 03 00 28 */	fsub f0, f3, f0
/* 805824B0  FC 02 00 32 */	fmul f0, f2, f0
/* 805824B4  FC 44 00 32 */	fmul f2, f4, f0
/* 805824B8  FC 00 00 32 */	fmul f0, f0, f0
/* 805824BC  FC 01 00 32 */	fmul f0, f1, f0
/* 805824C0  FC 03 00 28 */	fsub f0, f3, f0
/* 805824C4  FC 02 00 32 */	fmul f0, f2, f0
/* 805824C8  FC 44 00 32 */	fmul f2, f4, f0
/* 805824CC  FC 00 00 32 */	fmul f0, f0, f0
/* 805824D0  FC 01 00 32 */	fmul f0, f1, f0
/* 805824D4  FC 03 00 28 */	fsub f0, f3, f0
/* 805824D8  FC 02 00 32 */	fmul f0, f2, f0
/* 805824DC  FC 21 00 32 */	fmul f1, f1, f0
/* 805824E0  FC 20 08 18 */	frsp f1, f1
/* 805824E4  48 00 00 88 */	b lbl_8058256C
lbl_805824E8:
/* 805824E8  C8 1F 00 48 */	lfd f0, 0x48(r31)
/* 805824EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805824F0  40 80 00 10 */	bge lbl_80582500
/* 805824F4  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 805824F8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 805824FC  48 00 00 70 */	b lbl_8058256C
lbl_80582500:
/* 80582500  D0 21 00 08 */	stfs f1, 8(r1)
/* 80582504  80 81 00 08 */	lwz r4, 8(r1)
/* 80582508  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8058250C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80582510  7C 03 00 00 */	cmpw r3, r0
/* 80582514  41 82 00 14 */	beq lbl_80582528
/* 80582518  40 80 00 40 */	bge lbl_80582558
/* 8058251C  2C 03 00 00 */	cmpwi r3, 0
/* 80582520  41 82 00 20 */	beq lbl_80582540
/* 80582524  48 00 00 34 */	b lbl_80582558
lbl_80582528:
/* 80582528  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8058252C  41 82 00 0C */	beq lbl_80582538
/* 80582530  38 00 00 01 */	li r0, 1
/* 80582534  48 00 00 28 */	b lbl_8058255C
lbl_80582538:
/* 80582538  38 00 00 02 */	li r0, 2
/* 8058253C  48 00 00 20 */	b lbl_8058255C
lbl_80582540:
/* 80582540  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80582544  41 82 00 0C */	beq lbl_80582550
/* 80582548  38 00 00 05 */	li r0, 5
/* 8058254C  48 00 00 10 */	b lbl_8058255C
lbl_80582550:
/* 80582550  38 00 00 03 */	li r0, 3
/* 80582554  48 00 00 08 */	b lbl_8058255C
lbl_80582558:
/* 80582558  38 00 00 04 */	li r0, 4
lbl_8058255C:
/* 8058255C  2C 00 00 01 */	cmpwi r0, 1
/* 80582560  40 82 00 0C */	bne lbl_8058256C
/* 80582564  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80582568  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_8058256C:
/* 8058256C  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 80582570  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80582574  40 81 00 14 */	ble lbl_80582588
/* 80582578  7F C3 F3 78 */	mr r3, r30
/* 8058257C  4B A9 77 01 */	bl fopAcM_delete__FP10fopAc_ac_c
/* 80582580  38 60 00 01 */	li r3, 1
/* 80582584  48 00 00 08 */	b lbl_8058258C
lbl_80582588:
/* 80582588  38 60 00 00 */	li r3, 0
lbl_8058258C:
/* 8058258C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80582590  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80582594  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80582598  7C 08 03 A6 */	mtlr r0
/* 8058259C  38 21 00 20 */	addi r1, r1, 0x20
/* 805825A0  4E 80 00 20 */	blr 