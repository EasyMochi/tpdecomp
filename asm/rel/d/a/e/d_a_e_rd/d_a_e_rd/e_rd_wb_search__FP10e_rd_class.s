lbl_80508B98:
/* 80508B98  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 80508B9C  7C 08 02 A6 */	mflr r0
/* 80508BA0  90 01 01 24 */	stw r0, 0x124(r1)
/* 80508BA4  DB E1 01 10 */	stfd f31, 0x110(r1)
/* 80508BA8  F3 E1 01 18 */	psq_st f31, 280(r1), 0, 0 /* qr0 */
/* 80508BAC  DB C1 01 00 */	stfd f30, 0x100(r1)
/* 80508BB0  F3 C1 01 08 */	psq_st f30, 264(r1), 0, 0 /* qr0 */
/* 80508BB4  39 61 01 00 */	addi r11, r1, 0x100
/* 80508BB8  4B E5 96 15 */	bl _savegpr_25
/* 80508BBC  7C 7D 1B 78 */	mr r29, r3
/* 80508BC0  3C 60 80 52 */	lis r3, lit_4208@ha /* 0x80518584@ha */
/* 80508BC4  3B C3 85 84 */	addi r30, r3, lit_4208@l /* 0x80518584@l */
/* 80508BC8  C3 DE 00 04 */	lfs f30, 4(r30)
/* 80508BCC  3B 40 00 00 */	li r26, 0
/* 80508BD0  80 1D 09 8C */	lwz r0, 0x98c(r29)
/* 80508BD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80508BD8  3C 60 80 02 */	lis r3, fpcSch_JudgeByID__FPvPv@ha /* 0x80023590@ha */
/* 80508BDC  38 63 35 90 */	addi r3, r3, fpcSch_JudgeByID__FPvPv@l /* 0x80023590@l */
/* 80508BE0  38 81 00 14 */	addi r4, r1, 0x14
/* 80508BE4  4B B1 0C 15 */	bl fopAcIt_Judge__FPFPvPv_PvPv
/* 80508BE8  7C 7F 1B 79 */	or. r31, r3, r3
/* 80508BEC  40 82 00 0C */	bne lbl_80508BF8
/* 80508BF0  3B 40 00 01 */	li r26, 1
/* 80508BF4  48 00 00 A8 */	b lbl_80508C9C
lbl_80508BF8:
/* 80508BF8  A8 1F 06 90 */	lha r0, 0x690(r31)
/* 80508BFC  2C 00 00 16 */	cmpwi r0, 0x16
/* 80508C00  41 82 00 1C */	beq lbl_80508C1C
/* 80508C04  2C 00 00 15 */	cmpwi r0, 0x15
/* 80508C08  41 82 00 14 */	beq lbl_80508C1C
/* 80508C0C  2C 00 00 17 */	cmpwi r0, 0x17
/* 80508C10  41 82 00 0C */	beq lbl_80508C1C
/* 80508C14  2C 00 00 18 */	cmpwi r0, 0x18
/* 80508C18  40 82 00 0C */	bne lbl_80508C24
lbl_80508C1C:
/* 80508C1C  3B 40 00 01 */	li r26, 1
/* 80508C20  48 00 00 7C */	b lbl_80508C9C
lbl_80508C24:
/* 80508C24  A8 1D 05 B4 */	lha r0, 0x5b4(r29)
/* 80508C28  2C 00 00 03 */	cmpwi r0, 3
/* 80508C2C  41 81 00 70 */	bgt lbl_80508C9C
/* 80508C30  3B 20 00 00 */	li r25, 0
/* 80508C34  3B 80 00 00 */	li r28, 0
lbl_80508C38:
/* 80508C38  3B 7C 0D 58 */	addi r27, r28, 0xd58
/* 80508C3C  7F 7D DA 14 */	add r27, r29, r27
/* 80508C40  7F 63 DB 78 */	mr r3, r27
/* 80508C44  4B B7 BA 15 */	bl ChkCoHit__12dCcD_GObjInfFv
/* 80508C48  28 03 00 00 */	cmplwi r3, 0
/* 80508C4C  41 82 00 30 */	beq lbl_80508C7C
/* 80508C50  7F 63 DB 78 */	mr r3, r27
/* 80508C54  4B B7 BA 9D */	bl GetCoHitObj__12dCcD_GObjInfFv
/* 80508C58  4B D5 AD F1 */	bl GetAc__8cCcD_ObjFv
/* 80508C5C  28 03 00 00 */	cmplwi r3, 0
/* 80508C60  41 82 00 1C */	beq lbl_80508C7C
/* 80508C64  7C 03 F8 40 */	cmplw r3, r31
/* 80508C68  41 82 00 14 */	beq lbl_80508C7C
/* 80508C6C  A8 03 00 08 */	lha r0, 8(r3)
/* 80508C70  2C 00 00 EF */	cmpwi r0, 0xef
/* 80508C74  40 82 00 08 */	bne lbl_80508C7C
/* 80508C78  3B 40 00 01 */	li r26, 1
lbl_80508C7C:
/* 80508C7C  3B 39 00 01 */	addi r25, r25, 1
/* 80508C80  2C 19 00 02 */	cmpwi r25, 2
/* 80508C84  3B 9C 01 38 */	addi r28, r28, 0x138
/* 80508C88  40 81 FF B0 */	ble lbl_80508C38
/* 80508C8C  80 1D 0B 70 */	lwz r0, 0xb70(r29)
/* 80508C90  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80508C94  41 82 00 08 */	beq lbl_80508C9C
/* 80508C98  3B 40 00 01 */	li r26, 1
lbl_80508C9C:
/* 80508C9C  7F 40 07 75 */	extsb. r0, r26
/* 80508CA0  41 82 00 1C */	beq lbl_80508CBC
/* 80508CA4  38 00 00 00 */	li r0, 0
/* 80508CA8  B0 1D 09 72 */	sth r0, 0x972(r29)
/* 80508CAC  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80508CB0  7F A3 EB 78 */	mr r3, r29
/* 80508CB4  4B FF D2 9D */	bl ride_off__FP10e_rd_class
/* 80508CB8  48 00 09 C0 */	b lbl_80509678
lbl_80508CBC:
/* 80508CBC  A8 1D 05 B4 */	lha r0, 0x5b4(r29)
/* 80508CC0  2C 00 00 02 */	cmpwi r0, 2
/* 80508CC4  41 80 00 20 */	blt lbl_80508CE4
/* 80508CC8  A8 1F 06 90 */	lha r0, 0x690(r31)
/* 80508CCC  2C 00 00 01 */	cmpwi r0, 1
/* 80508CD0  41 82 00 14 */	beq lbl_80508CE4
/* 80508CD4  38 00 00 01 */	li r0, 1
/* 80508CD8  B0 1F 06 90 */	sth r0, 0x690(r31)
/* 80508CDC  38 00 00 00 */	li r0, 0
/* 80508CE0  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
lbl_80508CE4:
/* 80508CE4  A8 1D 05 B4 */	lha r0, 0x5b4(r29)
/* 80508CE8  28 00 00 06 */	cmplwi r0, 6
/* 80508CEC  41 81 09 60 */	bgt lbl_8050964C
/* 80508CF0  3C 60 80 52 */	lis r3, lit_6346@ha /* 0x80518AA4@ha */
/* 80508CF4  38 63 8A A4 */	addi r3, r3, lit_6346@l /* 0x80518AA4@l */
/* 80508CF8  54 00 10 3A */	slwi r0, r0, 2
/* 80508CFC  7C 03 00 2E */	lwzx r0, r3, r0
/* 80508D00  7C 09 03 A6 */	mtctr r0
/* 80508D04  4E 80 04 20 */	bctr 
lbl_80508D08:
/* 80508D08  7F A3 EB 78 */	mr r3, r29
/* 80508D0C  38 80 00 40 */	li r4, 0x40
/* 80508D10  C0 3E 00 58 */	lfs f1, 0x58(r30)
/* 80508D14  38 A0 00 02 */	li r5, 2
/* 80508D18  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80508D1C  4B FF BE B9 */	bl anm_init__FP10e_rd_classifUcf
/* 80508D20  38 00 00 01 */	li r0, 1
/* 80508D24  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80508D28  C0 3E 00 C0 */	lfs f1, 0xc0(r30)
/* 80508D2C  4B D5 EC 29 */	bl cM_rndF__Ff
/* 80508D30  C0 1E 00 C0 */	lfs f0, 0xc0(r30)
/* 80508D34  EC 00 08 2A */	fadds f0, f0, f1
/* 80508D38  FC 00 00 1E */	fctiwz f0, f0
/* 80508D3C  D8 01 00 D8 */	stfd f0, 0xd8(r1)
/* 80508D40  80 01 00 DC */	lwz r0, 0xdc(r1)
/* 80508D44  B0 1D 09 90 */	sth r0, 0x990(r29)
lbl_80508D48:
/* 80508D48  38 00 00 0B */	li r0, 0xb
/* 80508D4C  98 1D 09 C8 */	stb r0, 0x9c8(r29)
/* 80508D50  A8 1D 09 90 */	lha r0, 0x990(r29)
/* 80508D54  2C 00 00 00 */	cmpwi r0, 0
/* 80508D58  40 82 08 F4 */	bne lbl_8050964C
/* 80508D5C  38 00 00 02 */	li r0, 2
/* 80508D60  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80508D64  C0 3F 05 2C */	lfs f1, 0x52c(r31)
/* 80508D68  C0 1E 00 54 */	lfs f0, 0x54(r30)
/* 80508D6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80508D70  40 81 00 68 */	ble lbl_80508DD8
/* 80508D74  7F A3 EB 78 */	mr r3, r29
/* 80508D78  38 80 00 3C */	li r4, 0x3c
/* 80508D7C  C0 3E 00 4C */	lfs f1, 0x4c(r30)
/* 80508D80  38 A0 00 02 */	li r5, 2
/* 80508D84  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80508D88  4B FF BE 4D */	bl anm_init__FP10e_rd_classifUcf
/* 80508D8C  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070037@ha */
/* 80508D90  38 03 00 37 */	addi r0, r3, 0x0037 /* 0x00070037@l */
/* 80508D94  90 01 00 20 */	stw r0, 0x20(r1)
/* 80508D98  38 7D 05 D4 */	addi r3, r29, 0x5d4
/* 80508D9C  38 81 00 20 */	addi r4, r1, 0x20
/* 80508DA0  38 A0 FF FF */	li r5, -1
/* 80508DA4  81 9D 05 D4 */	lwz r12, 0x5d4(r29)
/* 80508DA8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80508DAC  7D 89 03 A6 */	mtctr r12
/* 80508DB0  4E 80 04 21 */	bctrl 
/* 80508DB4  C0 3E 00 CC */	lfs f1, 0xcc(r30)
/* 80508DB8  4B D5 EB 9D */	bl cM_rndF__Ff
/* 80508DBC  C0 1E 00 64 */	lfs f0, 0x64(r30)
/* 80508DC0  EC 00 08 2A */	fadds f0, f0, f1
/* 80508DC4  FC 00 00 1E */	fctiwz f0, f0
/* 80508DC8  D8 01 00 D8 */	stfd f0, 0xd8(r1)
/* 80508DCC  80 01 00 DC */	lwz r0, 0xdc(r1)
/* 80508DD0  B0 1D 09 90 */	sth r0, 0x990(r29)
/* 80508DD4  48 00 08 78 */	b lbl_8050964C
lbl_80508DD8:
/* 80508DD8  38 00 00 0A */	li r0, 0xa
/* 80508DDC  B0 1D 09 90 */	sth r0, 0x990(r29)
/* 80508DE0  48 00 08 6C */	b lbl_8050964C
lbl_80508DE4:
/* 80508DE4  38 61 00 9C */	addi r3, r1, 0x9c
/* 80508DE8  38 9F 04 D0 */	addi r4, r31, 0x4d0
/* 80508DEC  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 80508DF0  4B D5 DD 45 */	bl __mi__4cXyzCFRC3Vec
/* 80508DF4  C0 21 00 9C */	lfs f1, 0x9c(r1)
/* 80508DF8  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 80508DFC  C0 01 00 A0 */	lfs f0, 0xa0(r1)
/* 80508E00  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80508E04  C0 41 00 A4 */	lfs f2, 0xa4(r1)
/* 80508E08  D0 41 00 D4 */	stfs f2, 0xd4(r1)
/* 80508E0C  4B D5 E8 69 */	bl cM_atan2s__Fff
/* 80508E10  7C 64 1B 78 */	mr r4, r3
/* 80508E14  38 7D 04 DE */	addi r3, r29, 0x4de
/* 80508E18  38 A0 00 04 */	li r5, 4
/* 80508E1C  38 C0 08 00 */	li r6, 0x800
/* 80508E20  4B D6 77 E9 */	bl cLib_addCalcAngleS2__FPssss
/* 80508E24  38 00 00 0B */	li r0, 0xb
/* 80508E28  98 1D 09 C8 */	stb r0, 0x9c8(r29)
/* 80508E2C  A8 1D 09 90 */	lha r0, 0x990(r29)
/* 80508E30  2C 00 00 00 */	cmpwi r0, 0
/* 80508E34  40 82 08 18 */	bne lbl_8050964C
/* 80508E38  C0 3F 05 2C */	lfs f1, 0x52c(r31)
/* 80508E3C  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80508E40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80508E44  40 80 08 08 */	bge lbl_8050964C
/* 80508E48  3C 60 80 45 */	lis r3, calc_mtx@ha /* 0x80450768@ha */
/* 80508E4C  38 63 07 68 */	addi r3, r3, calc_mtx@l /* 0x80450768@l */
/* 80508E50  80 63 00 00 */	lwz r3, 0(r3)
/* 80508E54  A8 9F 04 E6 */	lha r4, 0x4e6(r31)
/* 80508E58  4B B0 35 85 */	bl mDoMtx_YrotS__FPA4_fs
/* 80508E5C  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80508E60  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80508E64  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80508E68  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80508E6C  88 1D 09 BE */	lbz r0, 0x9be(r29)
/* 80508E70  2C 00 00 01 */	cmpwi r0, 1
/* 80508E74  40 82 00 10 */	bne lbl_80508E84
/* 80508E78  C0 1E 00 CC */	lfs f0, 0xcc(r30)
/* 80508E7C  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 80508E80  48 00 00 0C */	b lbl_80508E8C
lbl_80508E84:
/* 80508E84  C0 1E 00 F8 */	lfs f0, 0xf8(r30)
/* 80508E88  D0 01 00 D4 */	stfs f0, 0xd4(r1)
lbl_80508E8C:
/* 80508E8C  38 61 00 CC */	addi r3, r1, 0xcc
/* 80508E90  38 81 00 C0 */	addi r4, r1, 0xc0
/* 80508E94  4B D6 80 59 */	bl MtxPosition__FP4cXyzP4cXyz
/* 80508E98  38 61 00 90 */	addi r3, r1, 0x90
/* 80508E9C  38 9F 04 D0 */	addi r4, r31, 0x4d0
/* 80508EA0  38 A1 00 C0 */	addi r5, r1, 0xc0
/* 80508EA4  4B D5 DC 41 */	bl __pl__4cXyzCFRC3Vec
/* 80508EA8  38 61 00 84 */	addi r3, r1, 0x84
/* 80508EAC  38 81 00 90 */	addi r4, r1, 0x90
/* 80508EB0  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 80508EB4  4B D5 DC 81 */	bl __mi__4cXyzCFRC3Vec
/* 80508EB8  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 80508EBC  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 80508EC0  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 80508EC4  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 80508EC8  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 80508ECC  D0 01 00 BC */	stfs f0, 0xbc(r1)
/* 80508ED0  C0 1E 00 E0 */	lfs f0, 0xe0(r30)
/* 80508ED4  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80508ED8  38 61 00 CC */	addi r3, r1, 0xcc
/* 80508EDC  38 81 00 C0 */	addi r4, r1, 0xc0
/* 80508EE0  4B D6 80 0D */	bl MtxPosition__FP4cXyzP4cXyz
/* 80508EE4  38 61 00 78 */	addi r3, r1, 0x78
/* 80508EE8  38 9F 04 D0 */	addi r4, r31, 0x4d0
/* 80508EEC  38 A1 00 C0 */	addi r5, r1, 0xc0
/* 80508EF0  4B D5 DB F5 */	bl __pl__4cXyzCFRC3Vec
/* 80508EF4  38 61 00 6C */	addi r3, r1, 0x6c
/* 80508EF8  38 81 00 78 */	addi r4, r1, 0x78
/* 80508EFC  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 80508F00  4B D5 DC 35 */	bl __mi__4cXyzCFRC3Vec
/* 80508F04  C0 01 00 6C */	lfs f0, 0x6c(r1)
/* 80508F08  D0 01 00 A8 */	stfs f0, 0xa8(r1)
/* 80508F0C  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80508F10  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 80508F14  C0 01 00 74 */	lfs f0, 0x74(r1)
/* 80508F18  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 80508F1C  38 61 00 B4 */	addi r3, r1, 0xb4
/* 80508F20  4B E3 E2 19 */	bl PSVECSquareMag
/* 80508F24  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80508F28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80508F2C  40 81 00 58 */	ble lbl_80508F84
/* 80508F30  FC 00 08 34 */	frsqrte f0, f1
/* 80508F34  C8 9E 00 10 */	lfd f4, 0x10(r30)
/* 80508F38  FC 44 00 32 */	fmul f2, f4, f0
/* 80508F3C  C8 7E 00 18 */	lfd f3, 0x18(r30)
/* 80508F40  FC 00 00 32 */	fmul f0, f0, f0
/* 80508F44  FC 01 00 32 */	fmul f0, f1, f0
/* 80508F48  FC 03 00 28 */	fsub f0, f3, f0
/* 80508F4C  FC 02 00 32 */	fmul f0, f2, f0
/* 80508F50  FC 44 00 32 */	fmul f2, f4, f0
/* 80508F54  FC 00 00 32 */	fmul f0, f0, f0
/* 80508F58  FC 01 00 32 */	fmul f0, f1, f0
/* 80508F5C  FC 03 00 28 */	fsub f0, f3, f0
/* 80508F60  FC 02 00 32 */	fmul f0, f2, f0
/* 80508F64  FC 44 00 32 */	fmul f2, f4, f0
/* 80508F68  FC 00 00 32 */	fmul f0, f0, f0
/* 80508F6C  FC 01 00 32 */	fmul f0, f1, f0
/* 80508F70  FC 03 00 28 */	fsub f0, f3, f0
/* 80508F74  FC 02 00 32 */	fmul f0, f2, f0
/* 80508F78  FF E1 00 32 */	fmul f31, f1, f0
/* 80508F7C  FF E0 F8 18 */	frsp f31, f31
/* 80508F80  48 00 00 90 */	b lbl_80509010
lbl_80508F84:
/* 80508F84  C8 1E 00 20 */	lfd f0, 0x20(r30)
/* 80508F88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80508F8C  40 80 00 10 */	bge lbl_80508F9C
/* 80508F90  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80508F94  C3 E3 0A E0 */	lfs f31, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80508F98  48 00 00 78 */	b lbl_80509010
lbl_80508F9C:
/* 80508F9C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80508FA0  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80508FA4  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80508FA8  3C 00 7F 80 */	lis r0, 0x7f80
/* 80508FAC  7C 03 00 00 */	cmpw r3, r0
/* 80508FB0  41 82 00 14 */	beq lbl_80508FC4
/* 80508FB4  40 80 00 40 */	bge lbl_80508FF4
/* 80508FB8  2C 03 00 00 */	cmpwi r3, 0
/* 80508FBC  41 82 00 20 */	beq lbl_80508FDC
/* 80508FC0  48 00 00 34 */	b lbl_80508FF4
lbl_80508FC4:
/* 80508FC4  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80508FC8  41 82 00 0C */	beq lbl_80508FD4
/* 80508FCC  38 00 00 01 */	li r0, 1
/* 80508FD0  48 00 00 28 */	b lbl_80508FF8
lbl_80508FD4:
/* 80508FD4  38 00 00 02 */	li r0, 2
/* 80508FD8  48 00 00 20 */	b lbl_80508FF8
lbl_80508FDC:
/* 80508FDC  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80508FE0  41 82 00 0C */	beq lbl_80508FEC
/* 80508FE4  38 00 00 05 */	li r0, 5
/* 80508FE8  48 00 00 10 */	b lbl_80508FF8
lbl_80508FEC:
/* 80508FEC  38 00 00 03 */	li r0, 3
/* 80508FF0  48 00 00 08 */	b lbl_80508FF8
lbl_80508FF4:
/* 80508FF4  38 00 00 04 */	li r0, 4
lbl_80508FF8:
/* 80508FF8  2C 00 00 01 */	cmpwi r0, 1
/* 80508FFC  40 82 00 10 */	bne lbl_8050900C
/* 80509000  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80509004  C3 E3 0A E0 */	lfs f31, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80509008  48 00 00 08 */	b lbl_80509010
lbl_8050900C:
/* 8050900C  FF E0 08 90 */	fmr f31, f1
lbl_80509010:
/* 80509010  38 61 00 A8 */	addi r3, r1, 0xa8
/* 80509014  4B E3 E1 25 */	bl PSVECSquareMag
/* 80509018  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8050901C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80509020  40 81 00 58 */	ble lbl_80509078
/* 80509024  FC 00 08 34 */	frsqrte f0, f1
/* 80509028  C8 9E 00 10 */	lfd f4, 0x10(r30)
/* 8050902C  FC 44 00 32 */	fmul f2, f4, f0
/* 80509030  C8 7E 00 18 */	lfd f3, 0x18(r30)
/* 80509034  FC 00 00 32 */	fmul f0, f0, f0
/* 80509038  FC 01 00 32 */	fmul f0, f1, f0
/* 8050903C  FC 03 00 28 */	fsub f0, f3, f0
/* 80509040  FC 02 00 32 */	fmul f0, f2, f0
/* 80509044  FC 44 00 32 */	fmul f2, f4, f0
/* 80509048  FC 00 00 32 */	fmul f0, f0, f0
/* 8050904C  FC 01 00 32 */	fmul f0, f1, f0
/* 80509050  FC 03 00 28 */	fsub f0, f3, f0
/* 80509054  FC 02 00 32 */	fmul f0, f2, f0
/* 80509058  FC 44 00 32 */	fmul f2, f4, f0
/* 8050905C  FC 00 00 32 */	fmul f0, f0, f0
/* 80509060  FC 01 00 32 */	fmul f0, f1, f0
/* 80509064  FC 03 00 28 */	fsub f0, f3, f0
/* 80509068  FC 02 00 32 */	fmul f0, f2, f0
/* 8050906C  FC 21 00 32 */	fmul f1, f1, f0
/* 80509070  FC 20 08 18 */	frsp f1, f1
/* 80509074  48 00 00 88 */	b lbl_805090FC
lbl_80509078:
/* 80509078  C8 1E 00 20 */	lfd f0, 0x20(r30)
/* 8050907C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80509080  40 80 00 10 */	bge lbl_80509090
/* 80509084  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80509088  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 8050908C  48 00 00 70 */	b lbl_805090FC
lbl_80509090:
/* 80509090  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80509094  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80509098  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8050909C  3C 00 7F 80 */	lis r0, 0x7f80
/* 805090A0  7C 03 00 00 */	cmpw r3, r0
/* 805090A4  41 82 00 14 */	beq lbl_805090B8
/* 805090A8  40 80 00 40 */	bge lbl_805090E8
/* 805090AC  2C 03 00 00 */	cmpwi r3, 0
/* 805090B0  41 82 00 20 */	beq lbl_805090D0
/* 805090B4  48 00 00 34 */	b lbl_805090E8
lbl_805090B8:
/* 805090B8  54 80 02 7F */	clrlwi. r0, r4, 9
/* 805090BC  41 82 00 0C */	beq lbl_805090C8
/* 805090C0  38 00 00 01 */	li r0, 1
/* 805090C4  48 00 00 28 */	b lbl_805090EC
lbl_805090C8:
/* 805090C8  38 00 00 02 */	li r0, 2
/* 805090CC  48 00 00 20 */	b lbl_805090EC
lbl_805090D0:
/* 805090D0  54 80 02 7F */	clrlwi. r0, r4, 9
/* 805090D4  41 82 00 0C */	beq lbl_805090E0
/* 805090D8  38 00 00 05 */	li r0, 5
/* 805090DC  48 00 00 10 */	b lbl_805090EC
lbl_805090E0:
/* 805090E0  38 00 00 03 */	li r0, 3
/* 805090E4  48 00 00 08 */	b lbl_805090EC
lbl_805090E8:
/* 805090E8  38 00 00 04 */	li r0, 4
lbl_805090EC:
/* 805090EC  2C 00 00 01 */	cmpwi r0, 1
/* 805090F0  40 82 00 0C */	bne lbl_805090FC
/* 805090F4  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 805090F8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_805090FC:
/* 805090FC  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 80509100  40 80 00 38 */	bge lbl_80509138
/* 80509104  38 00 00 00 */	li r0, 0
/* 80509108  98 1D 09 BD */	stb r0, 0x9bd(r29)
/* 8050910C  38 61 00 60 */	addi r3, r1, 0x60
/* 80509110  38 81 00 B4 */	addi r4, r1, 0xb4
/* 80509114  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 80509118  4B D5 D9 CD */	bl __pl__4cXyzCFRC3Vec
/* 8050911C  C0 01 00 60 */	lfs f0, 0x60(r1)
/* 80509120  D0 01 00 C0 */	stfs f0, 0xc0(r1)
/* 80509124  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 80509128  D0 01 00 C4 */	stfs f0, 0xc4(r1)
/* 8050912C  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 80509130  D0 01 00 C8 */	stfs f0, 0xc8(r1)
/* 80509134  48 00 00 34 */	b lbl_80509168
lbl_80509138:
/* 80509138  38 00 00 01 */	li r0, 1
/* 8050913C  98 1D 09 BD */	stb r0, 0x9bd(r29)
/* 80509140  38 61 00 54 */	addi r3, r1, 0x54
/* 80509144  38 81 00 A8 */	addi r4, r1, 0xa8
/* 80509148  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 8050914C  4B D5 D9 99 */	bl __pl__4cXyzCFRC3Vec
/* 80509150  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80509154  D0 01 00 C0 */	stfs f0, 0xc0(r1)
/* 80509158  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 8050915C  D0 01 00 C4 */	stfs f0, 0xc4(r1)
/* 80509160  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 80509164  D0 01 00 C8 */	stfs f0, 0xc8(r1)
lbl_80509168:
/* 80509168  38 61 00 48 */	addi r3, r1, 0x48
/* 8050916C  38 81 00 C0 */	addi r4, r1, 0xc0
/* 80509170  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 80509174  4B D5 D9 C1 */	bl __mi__4cXyzCFRC3Vec
/* 80509178  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 8050917C  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 80509180  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80509184  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80509188  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 8050918C  D0 41 00 D4 */	stfs f2, 0xd4(r1)
/* 80509190  4B D5 E4 E5 */	bl cM_atan2s__Fff
/* 80509194  B0 7D 05 CC */	sth r3, 0x5cc(r29)
/* 80509198  38 00 00 03 */	li r0, 3
/* 8050919C  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 805091A0  7F A3 EB 78 */	mr r3, r29
/* 805091A4  38 80 00 32 */	li r4, 0x32
/* 805091A8  C0 3E 00 54 */	lfs f1, 0x54(r30)
/* 805091AC  38 A0 00 02 */	li r5, 2
/* 805091B0  C0 5E 00 FC */	lfs f2, 0xfc(r30)
/* 805091B4  4B FF BA 21 */	bl anm_init__FP10e_rd_classifUcf
/* 805091B8  48 00 04 94 */	b lbl_8050964C
lbl_805091BC:
/* 805091BC  C0 3E 00 FC */	lfs f1, 0xfc(r30)
/* 805091C0  3C 60 80 52 */	lis r3, l_HIO@ha /* 0x80519194@ha */
/* 805091C4  38 63 91 94 */	addi r3, r3, l_HIO@l /* 0x80519194@l */
/* 805091C8  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 805091CC  EF C1 00 32 */	fmuls f30, f1, f0
/* 805091D0  3C 60 80 45 */	lis r3, calc_mtx@ha /* 0x80450768@ha */
/* 805091D4  38 63 07 68 */	addi r3, r3, calc_mtx@l /* 0x80450768@l */
/* 805091D8  80 63 00 00 */	lwz r3, 0(r3)
/* 805091DC  A8 9F 04 E6 */	lha r4, 0x4e6(r31)
/* 805091E0  4B B0 31 FD */	bl mDoMtx_YrotS__FPA4_fs
/* 805091E4  88 1D 09 BD */	lbz r0, 0x9bd(r29)
/* 805091E8  7C 00 07 75 */	extsb. r0, r0
/* 805091EC  40 82 00 0C */	bne lbl_805091F8
/* 805091F0  C0 1E 00 00 */	lfs f0, 0(r30)
/* 805091F4  48 00 00 08 */	b lbl_805091FC
lbl_805091F8:
/* 805091F8  C0 1E 00 E0 */	lfs f0, 0xe0(r30)
lbl_805091FC:
/* 805091FC  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80509200  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80509204  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80509208  88 1D 09 BE */	lbz r0, 0x9be(r29)
/* 8050920C  2C 00 00 01 */	cmpwi r0, 1
/* 80509210  40 82 00 10 */	bne lbl_80509220
/* 80509214  C0 1E 00 CC */	lfs f0, 0xcc(r30)
/* 80509218  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 8050921C  48 00 00 0C */	b lbl_80509228
lbl_80509220:
/* 80509220  C0 1E 00 F8 */	lfs f0, 0xf8(r30)
/* 80509224  D0 01 00 D4 */	stfs f0, 0xd4(r1)
lbl_80509228:
/* 80509228  38 61 00 CC */	addi r3, r1, 0xcc
/* 8050922C  38 81 00 C0 */	addi r4, r1, 0xc0
/* 80509230  4B D6 7C BD */	bl MtxPosition__FP4cXyzP4cXyz
/* 80509234  38 61 00 C0 */	addi r3, r1, 0xc0
/* 80509238  38 9F 04 D0 */	addi r4, r31, 0x4d0
/* 8050923C  7C 65 1B 78 */	mr r5, r3
/* 80509240  4B E3 DE 51 */	bl PSVECAdd
/* 80509244  38 61 00 3C */	addi r3, r1, 0x3c
/* 80509248  38 81 00 C0 */	addi r4, r1, 0xc0
/* 8050924C  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 80509250  4B D5 D8 E5 */	bl __mi__4cXyzCFRC3Vec
/* 80509254  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 80509258  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 8050925C  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80509260  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80509264  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 80509268  D0 41 00 D4 */	stfs f2, 0xd4(r1)
/* 8050926C  4B D5 E4 09 */	bl cM_atan2s__Fff
/* 80509270  B0 7D 05 CC */	sth r3, 0x5cc(r29)
/* 80509274  38 7D 04 DE */	addi r3, r29, 0x4de
/* 80509278  A8 9D 05 CC */	lha r4, 0x5cc(r29)
/* 8050927C  38 A0 00 02 */	li r5, 2
/* 80509280  38 C0 04 00 */	li r6, 0x400
/* 80509284  4B D6 73 85 */	bl cLib_addCalcAngleS2__FPssss
/* 80509288  38 61 00 30 */	addi r3, r1, 0x30
/* 8050928C  38 81 00 C0 */	addi r4, r1, 0xc0
/* 80509290  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 80509294  4B D5 D8 A1 */	bl __mi__4cXyzCFRC3Vec
/* 80509298  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8050929C  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 805092A0  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 805092A4  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 805092A8  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 805092AC  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 805092B0  C0 1E 00 04 */	lfs f0, 4(r30)
/* 805092B4  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 805092B8  38 61 00 CC */	addi r3, r1, 0xcc
/* 805092BC  4B E3 DE 7D */	bl PSVECSquareMag
/* 805092C0  C0 1E 00 04 */	lfs f0, 4(r30)
/* 805092C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805092C8  40 81 00 58 */	ble lbl_80509320
/* 805092CC  FC 00 08 34 */	frsqrte f0, f1
/* 805092D0  C8 9E 00 10 */	lfd f4, 0x10(r30)
/* 805092D4  FC 44 00 32 */	fmul f2, f4, f0
/* 805092D8  C8 7E 00 18 */	lfd f3, 0x18(r30)
/* 805092DC  FC 00 00 32 */	fmul f0, f0, f0
/* 805092E0  FC 01 00 32 */	fmul f0, f1, f0
/* 805092E4  FC 03 00 28 */	fsub f0, f3, f0
/* 805092E8  FC 02 00 32 */	fmul f0, f2, f0
/* 805092EC  FC 44 00 32 */	fmul f2, f4, f0
/* 805092F0  FC 00 00 32 */	fmul f0, f0, f0
/* 805092F4  FC 01 00 32 */	fmul f0, f1, f0
/* 805092F8  FC 03 00 28 */	fsub f0, f3, f0
/* 805092FC  FC 02 00 32 */	fmul f0, f2, f0
/* 80509300  FC 44 00 32 */	fmul f2, f4, f0
/* 80509304  FC 00 00 32 */	fmul f0, f0, f0
/* 80509308  FC 01 00 32 */	fmul f0, f1, f0
/* 8050930C  FC 03 00 28 */	fsub f0, f3, f0
/* 80509310  FC 02 00 32 */	fmul f0, f2, f0
/* 80509314  FC 21 00 32 */	fmul f1, f1, f0
/* 80509318  FC 20 08 18 */	frsp f1, f1
/* 8050931C  48 00 00 88 */	b lbl_805093A4
lbl_80509320:
/* 80509320  C8 1E 00 20 */	lfd f0, 0x20(r30)
/* 80509324  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80509328  40 80 00 10 */	bge lbl_80509338
/* 8050932C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80509330  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80509334  48 00 00 70 */	b lbl_805093A4
lbl_80509338:
/* 80509338  D0 21 00 08 */	stfs f1, 8(r1)
/* 8050933C  80 81 00 08 */	lwz r4, 8(r1)
/* 80509340  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80509344  3C 00 7F 80 */	lis r0, 0x7f80
/* 80509348  7C 03 00 00 */	cmpw r3, r0
/* 8050934C  41 82 00 14 */	beq lbl_80509360
/* 80509350  40 80 00 40 */	bge lbl_80509390
/* 80509354  2C 03 00 00 */	cmpwi r3, 0
/* 80509358  41 82 00 20 */	beq lbl_80509378
/* 8050935C  48 00 00 34 */	b lbl_80509390
lbl_80509360:
/* 80509360  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80509364  41 82 00 0C */	beq lbl_80509370
/* 80509368  38 00 00 01 */	li r0, 1
/* 8050936C  48 00 00 28 */	b lbl_80509394
lbl_80509370:
/* 80509370  38 00 00 02 */	li r0, 2
/* 80509374  48 00 00 20 */	b lbl_80509394
lbl_80509378:
/* 80509378  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8050937C  41 82 00 0C */	beq lbl_80509388
/* 80509380  38 00 00 05 */	li r0, 5
/* 80509384  48 00 00 10 */	b lbl_80509394
lbl_80509388:
/* 80509388  38 00 00 03 */	li r0, 3
/* 8050938C  48 00 00 08 */	b lbl_80509394
lbl_80509390:
/* 80509390  38 00 00 04 */	li r0, 4
lbl_80509394:
/* 80509394  2C 00 00 01 */	cmpwi r0, 1
/* 80509398  40 82 00 0C */	bne lbl_805093A4
/* 8050939C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 805093A0  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_805093A4:
/* 805093A4  C0 1E 01 00 */	lfs f0, 0x100(r30)
/* 805093A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805093AC  40 80 02 A0 */	bge lbl_8050964C
/* 805093B0  38 00 00 04 */	li r0, 4
/* 805093B4  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 805093B8  88 1D 09 BE */	lbz r0, 0x9be(r29)
/* 805093BC  2C 00 00 01 */	cmpwi r0, 1
/* 805093C0  40 82 00 20 */	bne lbl_805093E0
/* 805093C4  7F A3 EB 78 */	mr r3, r29
/* 805093C8  38 80 00 04 */	li r4, 4
/* 805093CC  C0 3E 00 A8 */	lfs f1, 0xa8(r30)
/* 805093D0  38 A0 00 00 */	li r5, 0
/* 805093D4  C0 5E 00 08 */	lfs f2, 8(r30)
/* 805093D8  4B FF B7 FD */	bl anm_init__FP10e_rd_classifUcf
/* 805093DC  48 00 02 70 */	b lbl_8050964C
lbl_805093E0:
/* 805093E0  7F A3 EB 78 */	mr r3, r29
/* 805093E4  38 80 00 40 */	li r4, 0x40
/* 805093E8  C0 3E 00 54 */	lfs f1, 0x54(r30)
/* 805093EC  38 A0 00 02 */	li r5, 2
/* 805093F0  C0 5E 00 08 */	lfs f2, 8(r30)
/* 805093F4  4B FF B7 E1 */	bl anm_init__FP10e_rd_classifUcf
/* 805093F8  38 00 00 0A */	li r0, 0xa
/* 805093FC  B0 1D 09 90 */	sth r0, 0x990(r29)
/* 80509400  48 00 02 4C */	b lbl_8050964C
lbl_80509404:
/* 80509404  3C 60 80 45 */	lis r3, calc_mtx@ha /* 0x80450768@ha */
/* 80509408  38 63 07 68 */	addi r3, r3, calc_mtx@l /* 0x80450768@l */
/* 8050940C  80 63 00 00 */	lwz r3, 0(r3)
/* 80509410  A8 9F 04 E6 */	lha r4, 0x4e6(r31)
/* 80509414  4B B0 2F C9 */	bl mDoMtx_YrotS__FPA4_fs
/* 80509418  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8050941C  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80509420  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80509424  88 1D 09 BE */	lbz r0, 0x9be(r29)
/* 80509428  2C 00 00 01 */	cmpwi r0, 1
/* 8050942C  40 82 00 10 */	bne lbl_8050943C
/* 80509430  C0 1E 00 CC */	lfs f0, 0xcc(r30)
/* 80509434  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 80509438  48 00 00 0C */	b lbl_80509444
lbl_8050943C:
/* 8050943C  C0 1E 01 04 */	lfs f0, 0x104(r30)
/* 80509440  D0 01 00 D4 */	stfs f0, 0xd4(r1)
lbl_80509444:
/* 80509444  38 61 00 CC */	addi r3, r1, 0xcc
/* 80509448  38 9D 05 C0 */	addi r4, r29, 0x5c0
/* 8050944C  4B D6 7A A1 */	bl MtxPosition__FP4cXyzP4cXyz
/* 80509450  38 7D 05 C0 */	addi r3, r29, 0x5c0
/* 80509454  38 9F 04 D0 */	addi r4, r31, 0x4d0
/* 80509458  7C 65 1B 78 */	mr r5, r3
/* 8050945C  4B E3 DC 35 */	bl PSVECAdd
/* 80509460  38 61 00 24 */	addi r3, r1, 0x24
/* 80509464  38 9D 05 C0 */	addi r4, r29, 0x5c0
/* 80509468  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 8050946C  4B D5 D6 C9 */	bl __mi__4cXyzCFRC3Vec
/* 80509470  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80509474  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 80509478  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8050947C  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80509480  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80509484  D0 41 00 D4 */	stfs f2, 0xd4(r1)
/* 80509488  4B D5 E1 ED */	bl cM_atan2s__Fff
/* 8050948C  7C 64 07 34 */	extsh r4, r3
/* 80509490  38 7D 04 DE */	addi r3, r29, 0x4de
/* 80509494  38 A0 00 02 */	li r5, 2
/* 80509498  38 C0 10 00 */	li r6, 0x1000
/* 8050949C  4B D6 71 6D */	bl cLib_addCalcAngleS2__FPssss
/* 805094A0  88 1D 05 BC */	lbz r0, 0x5bc(r29)
/* 805094A4  28 00 00 00 */	cmplwi r0, 0
/* 805094A8  41 82 00 B0 */	beq lbl_80509558
/* 805094AC  88 1D 09 BE */	lbz r0, 0x9be(r29)
/* 805094B0  2C 00 00 01 */	cmpwi r0, 1
/* 805094B4  40 82 00 A4 */	bne lbl_80509558
/* 805094B8  80 7D 05 D0 */	lwz r3, 0x5d0(r29)
/* 805094BC  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 805094C0  FC 00 00 1E */	fctiwz f0, f0
/* 805094C4  D8 01 00 D8 */	stfd f0, 0xd8(r1)
/* 805094C8  80 01 00 DC */	lwz r0, 0xdc(r1)
/* 805094CC  2C 00 00 0B */	cmpwi r0, 0xb
/* 805094D0  40 82 00 0C */	bne lbl_805094DC
/* 805094D4  38 00 00 01 */	li r0, 1
/* 805094D8  98 1D 05 BD */	stb r0, 0x5bd(r29)
lbl_805094DC:
/* 805094DC  80 7D 05 D0 */	lwz r3, 0x5d0(r29)
/* 805094E0  38 80 00 01 */	li r4, 1
/* 805094E4  88 03 00 11 */	lbz r0, 0x11(r3)
/* 805094E8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 805094EC  40 82 00 18 */	bne lbl_80509504
/* 805094F0  C0 3E 00 04 */	lfs f1, 4(r30)
/* 805094F4  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 805094F8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 805094FC  41 82 00 08 */	beq lbl_80509504
/* 80509500  38 80 00 00 */	li r4, 0
lbl_80509504:
/* 80509504  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80509508  41 82 01 44 */	beq lbl_8050964C
/* 8050950C  38 00 00 05 */	li r0, 5
/* 80509510  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80509514  7F A3 EB 78 */	mr r3, r29
/* 80509518  38 80 00 18 */	li r4, 0x18
/* 8050951C  C0 3E 00 A8 */	lfs f1, 0xa8(r30)
/* 80509520  38 A0 00 00 */	li r5, 0
/* 80509524  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80509528  4B FF B6 AD */	bl anm_init__FP10e_rd_classifUcf
/* 8050952C  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070038@ha */
/* 80509530  38 03 00 38 */	addi r0, r3, 0x0038 /* 0x00070038@l */
/* 80509534  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80509538  38 7D 05 D4 */	addi r3, r29, 0x5d4
/* 8050953C  38 81 00 1C */	addi r4, r1, 0x1c
/* 80509540  38 A0 FF FF */	li r5, -1
/* 80509544  81 9D 05 D4 */	lwz r12, 0x5d4(r29)
/* 80509548  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8050954C  7D 89 03 A6 */	mtctr r12
/* 80509550  4E 80 04 21 */	bctrl 
/* 80509554  48 00 00 F8 */	b lbl_8050964C
lbl_80509558:
/* 80509558  A8 1D 09 90 */	lha r0, 0x990(r29)
/* 8050955C  2C 00 00 00 */	cmpwi r0, 0
/* 80509560  40 82 00 EC */	bne lbl_8050964C
/* 80509564  38 00 00 05 */	li r0, 5
/* 80509568  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 8050956C  7F A3 EB 78 */	mr r3, r29
/* 80509570  38 80 00 18 */	li r4, 0x18
/* 80509574  C0 3E 00 A8 */	lfs f1, 0xa8(r30)
/* 80509578  38 A0 00 00 */	li r5, 0
/* 8050957C  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80509580  4B FF B6 55 */	bl anm_init__FP10e_rd_classifUcf
/* 80509584  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070038@ha */
/* 80509588  38 03 00 38 */	addi r0, r3, 0x0038 /* 0x00070038@l */
/* 8050958C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80509590  38 7D 05 D4 */	addi r3, r29, 0x5d4
/* 80509594  38 81 00 18 */	addi r4, r1, 0x18
/* 80509598  38 A0 FF FF */	li r5, -1
/* 8050959C  81 9D 05 D4 */	lwz r12, 0x5d4(r29)
/* 805095A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 805095A4  7D 89 03 A6 */	mtctr r12
/* 805095A8  4E 80 04 21 */	bctrl 
/* 805095AC  48 00 00 A0 */	b lbl_8050964C
lbl_805095B0:
/* 805095B0  80 7D 05 D0 */	lwz r3, 0x5d0(r29)
/* 805095B4  38 80 00 01 */	li r4, 1
/* 805095B8  88 03 00 11 */	lbz r0, 0x11(r3)
/* 805095BC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 805095C0  40 82 00 18 */	bne lbl_805095D8
/* 805095C4  C0 3E 00 04 */	lfs f1, 4(r30)
/* 805095C8  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 805095CC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 805095D0  41 82 00 08 */	beq lbl_805095D8
/* 805095D4  38 80 00 00 */	li r4, 0
lbl_805095D8:
/* 805095D8  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 805095DC  41 82 00 70 */	beq lbl_8050964C
/* 805095E0  38 00 00 06 */	li r0, 6
/* 805095E4  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 805095E8  7F A3 EB 78 */	mr r3, r29
/* 805095EC  38 80 00 19 */	li r4, 0x19
/* 805095F0  C0 3E 00 58 */	lfs f1, 0x58(r30)
/* 805095F4  38 A0 00 00 */	li r5, 0
/* 805095F8  C0 5E 00 08 */	lfs f2, 8(r30)
/* 805095FC  4B FF B5 D9 */	bl anm_init__FP10e_rd_classifUcf
/* 80509600  38 00 00 01 */	li r0, 1
/* 80509604  98 1D 09 BC */	stb r0, 0x9bc(r29)
/* 80509608  C0 1E 00 64 */	lfs f0, 0x64(r30)
/* 8050960C  D0 1D 09 C4 */	stfs f0, 0x9c4(r29)
/* 80509610  38 00 00 14 */	li r0, 0x14
/* 80509614  B0 1D 09 96 */	sth r0, 0x996(r29)
/* 80509618  48 00 00 34 */	b lbl_8050964C
lbl_8050961C:
/* 8050961C  C0 3D 09 C0 */	lfs f1, 0x9c0(r29)
/* 80509620  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80509624  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80509628  4C 40 13 82 */	cror 2, 0, 2
/* 8050962C  40 82 00 20 */	bne lbl_8050964C
/* 80509630  38 00 00 0C */	li r0, 0xc
/* 80509634  B0 1D 09 72 */	sth r0, 0x972(r29)
/* 80509638  38 60 00 00 */	li r3, 0
/* 8050963C  B0 7D 05 B4 */	sth r3, 0x5b4(r29)
/* 80509640  38 00 00 04 */	li r0, 4
/* 80509644  B0 1F 06 90 */	sth r0, 0x690(r31)
/* 80509648  B0 7F 05 B4 */	sth r3, 0x5b4(r31)
lbl_8050964C:
/* 8050964C  38 7D 05 2C */	addi r3, r29, 0x52c
/* 80509650  FC 20 F0 90 */	fmr f1, f30
/* 80509654  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80509658  C0 7E 00 4C */	lfs f3, 0x4c(r30)
/* 8050965C  4B D6 63 E1 */	bl cLib_addCalc2__FPffff
/* 80509660  C0 1F 05 38 */	lfs f0, 0x538(r31)
/* 80509664  D0 1D 09 D4 */	stfs f0, 0x9d4(r29)
/* 80509668  C0 1F 05 3C */	lfs f0, 0x53c(r31)
/* 8050966C  D0 1D 09 D8 */	stfs f0, 0x9d8(r29)
/* 80509670  C0 1F 05 40 */	lfs f0, 0x540(r31)
/* 80509674  D0 1D 09 DC */	stfs f0, 0x9dc(r29)
lbl_80509678:
/* 80509678  E3 E1 01 18 */	psq_l f31, 280(r1), 0, 0 /* qr0 */
/* 8050967C  CB E1 01 10 */	lfd f31, 0x110(r1)
/* 80509680  E3 C1 01 08 */	psq_l f30, 264(r1), 0, 0 /* qr0 */
/* 80509684  CB C1 01 00 */	lfd f30, 0x100(r1)
/* 80509688  39 61 01 00 */	addi r11, r1, 0x100
/* 8050968C  4B E5 8B 8D */	bl _restgpr_25
/* 80509690  80 01 01 24 */	lwz r0, 0x124(r1)
/* 80509694  7C 08 03 A6 */	mtlr r0
/* 80509698  38 21 01 20 */	addi r1, r1, 0x120
/* 8050969C  4E 80 00 20 */	blr 