lbl_805380A4:
/* 805380A4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 805380A8  7C 08 02 A6 */	mflr r0
/* 805380AC  90 01 00 34 */	stw r0, 0x34(r1)
/* 805380B0  39 61 00 30 */	addi r11, r1, 0x30
/* 805380B4  4B E2 A1 19 */	bl _savegpr_25
/* 805380B8  7C 7E 1B 78 */	mr r30, r3
/* 805380BC  3C 80 80 54 */	lis r4, m__18daNpc_Besu_Param_c@ha /* 0x8053E754@ha */
/* 805380C0  3B E4 E7 54 */	addi r31, r4, m__18daNpc_Besu_Param_c@l /* 0x8053E754@l */
/* 805380C4  48 00 18 D1 */	bl selectAction__12daNpc_Besu_cFv
/* 805380C8  7F C3 F3 78 */	mr r3, r30
/* 805380CC  48 00 04 71 */	bl srchActors__12daNpc_Besu_cFv
/* 805380D0  3B A0 00 0A */	li r29, 0xa
/* 805380D4  38 7F 00 00 */	addi r3, r31, 0
/* 805380D8  AB 83 00 48 */	lha r28, 0x48(r3)
/* 805380DC  AB 63 00 4A */	lha r27, 0x4a(r3)
/* 805380E0  AB 43 00 4C */	lha r26, 0x4c(r3)
/* 805380E4  AB 23 00 4E */	lha r25, 0x4e(r3)
/* 805380E8  4B AF 95 61 */	bl daNpcKakashi_chkSwdTutorialStage__Fv
/* 805380EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 805380F0  41 82 00 1C */	beq lbl_8053810C
/* 805380F4  3B 80 00 0B */	li r28, 0xb
/* 805380F8  3B 60 00 06 */	li r27, 6
/* 805380FC  3B 40 00 0F */	li r26, 0xf
/* 80538100  3B 20 00 06 */	li r25, 6
/* 80538104  3B A0 00 00 */	li r29, 0
/* 80538108  48 00 00 58 */	b lbl_80538160
lbl_8053810C:
/* 8053810C  7F C3 F3 78 */	mr r3, r30
/* 80538110  4B FF FE C1 */	bl chkNurse__12daNpc_Besu_cFv
/* 80538114  2C 03 00 00 */	cmpwi r3, 0
/* 80538118  41 82 00 10 */	beq lbl_80538128
/* 8053811C  3B 80 00 01 */	li r28, 1
/* 80538120  3B 40 00 01 */	li r26, 1
/* 80538124  48 00 00 3C */	b lbl_80538160
lbl_80538128:
/* 80538128  88 1E 10 C4 */	lbz r0, 0x10c4(r30)
/* 8053812C  2C 00 00 0B */	cmpwi r0, 0xb
/* 80538130  41 82 00 28 */	beq lbl_80538158
/* 80538134  40 80 00 2C */	bge lbl_80538160
/* 80538138  2C 00 00 05 */	cmpwi r0, 5
/* 8053813C  40 80 00 24 */	bge lbl_80538160
/* 80538140  2C 00 00 03 */	cmpwi r0, 3
/* 80538144  40 80 00 08 */	bge lbl_8053814C
/* 80538148  48 00 00 18 */	b lbl_80538160
lbl_8053814C:
/* 8053814C  3B 80 00 05 */	li r28, 5
/* 80538150  3B 40 00 07 */	li r26, 7
/* 80538154  48 00 00 0C */	b lbl_80538160
lbl_80538158:
/* 80538158  3B 80 00 05 */	li r28, 5
/* 8053815C  3B 40 00 05 */	li r26, 5
lbl_80538160:
/* 80538160  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80538164  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80538168  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 8053816C  81 83 06 28 */	lwz r12, 0x628(r3)
/* 80538170  81 8C 01 88 */	lwz r12, 0x188(r12)
/* 80538174  7D 89 03 A6 */	mtctr r12
/* 80538178  4E 80 04 21 */	bctrl 
/* 8053817C  28 03 00 00 */	cmplwi r3, 0
/* 80538180  41 82 00 24 */	beq lbl_805381A4
/* 80538184  7F 80 07 34 */	extsh r0, r28
/* 80538188  2C 00 00 07 */	cmpwi r0, 7
/* 8053818C  40 80 00 08 */	bge lbl_80538194
/* 80538190  3B 80 00 07 */	li r28, 7
lbl_80538194:
/* 80538194  7F 40 07 34 */	extsh r0, r26
/* 80538198  2C 00 00 09 */	cmpwi r0, 9
/* 8053819C  40 80 00 08 */	bge lbl_805381A4
/* 805381A0  3B 40 00 09 */	li r26, 9
lbl_805381A4:
/* 805381A4  7F 43 07 34 */	extsh r3, r26
/* 805381A8  7F 24 07 34 */	extsh r4, r25
/* 805381AC  4B C1 48 6D */	bl daNpcT_getDistTableIdx__Fii
/* 805381B0  98 7E 05 44 */	stb r3, 0x544(r30)
/* 805381B4  88 1E 05 44 */	lbz r0, 0x544(r30)
/* 805381B8  98 1E 05 45 */	stb r0, 0x545(r30)
/* 805381BC  7F 83 07 34 */	extsh r3, r28
/* 805381C0  7F 64 07 34 */	extsh r4, r27
/* 805381C4  4B C1 48 55 */	bl daNpcT_getDistTableIdx__Fii
/* 805381C8  98 7E 05 47 */	stb r3, 0x547(r30)
/* 805381CC  93 BE 05 5C */	stw r29, 0x55c(r30)
/* 805381D0  38 7F 00 00 */	addi r3, r31, 0
/* 805381D4  C0 03 00 08 */	lfs f0, 8(r3)
/* 805381D8  D0 1E 04 EC */	stfs f0, 0x4ec(r30)
/* 805381DC  D0 1E 04 F0 */	stfs f0, 0x4f0(r30)
/* 805381E0  D0 1E 04 F4 */	stfs f0, 0x4f4(r30)
/* 805381E4  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 805381E8  FC 00 00 1E */	fctiwz f0, f0
/* 805381EC  D8 01 00 08 */	stfd f0, 8(r1)
/* 805381F0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 805381F4  98 1E 08 78 */	stb r0, 0x878(r30)
/* 805381F8  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 805381FC  D0 1E 0D EC */	stfs f0, 0xdec(r30)
/* 80538200  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80538204  D0 1E 0D F0 */	stfs f0, 0xdf0(r30)
/* 80538208  88 1E 0A 89 */	lbz r0, 0xa89(r30)
/* 8053820C  28 00 00 00 */	cmplwi r0, 0
/* 80538210  41 82 00 10 */	beq lbl_80538220
/* 80538214  C0 1F 01 04 */	lfs f0, 0x104(r31)
/* 80538218  D0 1E 0D EC */	stfs f0, 0xdec(r30)
/* 8053821C  48 00 00 20 */	b lbl_8053823C
lbl_80538220:
/* 80538220  88 1E 10 C4 */	lbz r0, 0x10c4(r30)
/* 80538224  28 00 00 05 */	cmplwi r0, 5
/* 80538228  40 82 00 14 */	bne lbl_8053823C
/* 8053822C  C0 1F 01 08 */	lfs f0, 0x108(r31)
/* 80538230  D0 1E 0D EC */	stfs f0, 0xdec(r30)
/* 80538234  C0 1F 01 0C */	lfs f0, 0x10c(r31)
/* 80538238  D0 1E 0D F0 */	stfs f0, 0xdf0(r30)
lbl_8053823C:
/* 8053823C  38 7F 00 00 */	addi r3, r31, 0
/* 80538240  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80538244  D0 1E 0D F8 */	stfs f0, 0xdf8(r30)
/* 80538248  88 1E 10 C4 */	lbz r0, 0x10c4(r30)
/* 8053824C  28 00 00 03 */	cmplwi r0, 3
/* 80538250  41 82 00 0C */	beq lbl_8053825C
/* 80538254  28 00 00 04 */	cmplwi r0, 4
/* 80538258  40 82 00 0C */	bne lbl_80538264
lbl_8053825C:
/* 8053825C  C0 1F 01 10 */	lfs f0, 0x110(r31)
/* 80538260  D0 1E 0D F8 */	stfs f0, 0xdf8(r30)
lbl_80538264:
/* 80538264  38 7E 08 A0 */	addi r3, r30, 0x8a0
/* 80538268  C0 3E 0D F0 */	lfs f1, 0xdf0(r30)
/* 8053826C  4B B3 DC D5 */	bl SetWallR__12dBgS_AcchCirFf
/* 80538270  38 7F 00 00 */	addi r3, r31, 0
/* 80538274  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80538278  D0 1E 08 D0 */	stfs f0, 0x8d0(r30)
/* 8053827C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80538280  D0 1E 0D E8 */	stfs f0, 0xde8(r30)
/* 80538284  7F C3 F3 78 */	mr r3, r30
/* 80538288  4B FF FD 49 */	bl chkNurse__12daNpc_Besu_cFv
/* 8053828C  2C 03 00 00 */	cmpwi r3, 0
/* 80538290  41 82 00 0C */	beq lbl_8053829C
/* 80538294  C0 1F 01 14 */	lfs f0, 0x114(r31)
/* 80538298  D0 1E 0D E8 */	stfs f0, 0xde8(r30)
lbl_8053829C:
/* 8053829C  38 7F 00 00 */	addi r3, r31, 0
/* 805382A0  C0 03 00 6C */	lfs f0, 0x6c(r3)
/* 805382A4  D0 1E 0A 80 */	stfs f0, 0xa80(r30)
/* 805382A8  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 805382AC  D0 1E 0A 84 */	stfs f0, 0xa84(r30)
/* 805382B0  C0 03 00 04 */	lfs f0, 4(r3)
/* 805382B4  D0 1E 05 30 */	stfs f0, 0x530(r30)
/* 805382B8  39 61 00 30 */	addi r11, r1, 0x30
/* 805382BC  4B E2 9F 5D */	bl _restgpr_25
/* 805382C0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 805382C4  7C 08 03 A6 */	mtlr r0
/* 805382C8  38 21 00 30 */	addi r1, r1, 0x30
/* 805382CC  4E 80 00 20 */	blr 