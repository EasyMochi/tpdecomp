/* 8026E12C 0026B06C  94 21 FF 50 */ stwu r1, -0xb0(r1)
/* 8026E130 0026B070  7C 08 02 A6 */ mflr r0
/* 8026E134 0026B074  90 01 00 B4 */ stw r0, 0xb4(r1)
/* 8026E138 0026B078  DB E1 00 A0 */ stfd f31, 0xa0(r1)
/* 8026E13C 0026B07C  F3 E1 00 A8 */ psq_st f31, 168(r1), 0, 0
/* 8026E140 0026B080  39 61 00 A0 */ addi r11, r1, 0xa0
/* 8026E144 0026B084  48 0F 40 99 */ bl _savegpr_29
/* 8026E148 0026B088  7C 7D 1B 78 */ mr r29, r3
/* 8026E14C 0026B08C  7C 9E 23 78 */ mr r30, r4
/* 8026E150 0026B090  7C BF 2B 78 */ mr r31, r5
/* 8026E154 0026B094  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 8026E158 0026B098  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 8026E15C 0026B09C  90 01 00 84 */ stw r0, 0x84(r1)
/* 8026E160 0026B0A0  38 61 00 74 */ addi r3, r1, 0x74
/* 8026E164 0026B0A4  7F A4 EB 78 */ mr r4, r29
/* 8026E168 0026B0A8  48 00 14 E1 */ bl SetC__8cM3dGSphFRC4cXyz
/* 8026E16C 0026B0AC  38 61 00 74 */ addi r3, r1, 0x74
/* 8026E170 0026B0B0  C0 3D 00 1C */ lfs f1, 0x1c(r29)
/* 8026E174 0026B0B4  48 00 15 95 */ bl SetR__8cM3dGSphFf
/* 8026E178 0026B0B8  38 61 00 74 */ addi r3, r1, 0x74
/* 8026E17C 0026B0BC  7F C4 F3 78 */ mr r4, r30
/* 8026E180 0026B0C0  7F E5 FB 78 */ mr r5, r31
/* 8026E184 0026B0C4  4B FF DD 81 */ bl cM3d_Cross_SphTri__FPC8cM3dGSphPC8cM3dGTriP3Vec
/* 8026E188 0026B0C8  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8026E18C 0026B0CC  41 82 00 18 */ beq lbl_8026E1A4
/* 8026E190 0026B0D0  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 8026E194 0026B0D4  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 8026E198 0026B0D8  90 01 00 84 */ stw r0, 0x84(r1)
/* 8026E19C 0026B0DC  38 60 00 01 */ li r3, 1
/* 8026E1A0 0026B0E0  48 00 03 3C */ b lbl_8026E4DC
lbl_8026E1A4:
/* 8026E1A4 0026B0E4  38 61 00 74 */ addi r3, r1, 0x74
/* 8026E1A8 0026B0E8  38 9D 00 0C */ addi r4, r29, 0xc
/* 8026E1AC 0026B0EC  48 00 14 9D */ bl SetC__8cM3dGSphFRC4cXyz
/* 8026E1B0 0026B0F0  38 61 00 74 */ addi r3, r1, 0x74
/* 8026E1B4 0026B0F4  C0 3D 00 1C */ lfs f1, 0x1c(r29)
/* 8026E1B8 0026B0F8  48 00 15 51 */ bl SetR__8cM3dGSphFf
/* 8026E1BC 0026B0FC  38 61 00 74 */ addi r3, r1, 0x74
/* 8026E1C0 0026B100  7F C4 F3 78 */ mr r4, r30
/* 8026E1C4 0026B104  7F E5 FB 78 */ mr r5, r31
/* 8026E1C8 0026B108  4B FF DD 3D */ bl cM3d_Cross_SphTri__FPC8cM3dGSphPC8cM3dGTriP3Vec
/* 8026E1CC 0026B10C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8026E1D0 0026B110  41 82 00 18 */ beq lbl_8026E1E8
/* 8026E1D4 0026B114  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 8026E1D8 0026B118  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 8026E1DC 0026B11C  90 01 00 84 */ stw r0, 0x84(r1)
/* 8026E1E0 0026B120  38 60 00 01 */ li r3, 1
/* 8026E1E4 0026B124  48 00 02 F8 */ b lbl_8026E4DC
lbl_8026E1E8:
/* 8026E1E8 0026B128  7F A3 EB 78 */ mr r3, r29
/* 8026E1EC 0026B12C  7F C4 F3 78 */ mr r4, r30
/* 8026E1F0 0026B130  7F E5 FB 78 */ mr r5, r31
/* 8026E1F4 0026B134  38 C0 00 01 */ li r6, 1
/* 8026E1F8 0026B138  38 E0 00 01 */ li r7, 1
/* 8026E1FC 0026B13C  4B FF AD 39 */ bl cM3d_Cross_LinPla__FPC8cM3dGLinPC8cM3dGPlaP3Vecbb
/* 8026E200 0026B140  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8026E204 0026B144  40 82 00 18 */ bne lbl_8026E21C
/* 8026E208 0026B148  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 8026E20C 0026B14C  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 8026E210 0026B150  90 01 00 84 */ stw r0, 0x84(r1)
/* 8026E214 0026B154  38 60 00 00 */ li r3, 0
/* 8026E218 0026B158  48 00 02 C4 */ b lbl_8026E4DC
lbl_8026E21C:
/* 8026E21C 0026B15C  7F C3 F3 78 */ mr r3, r30
/* 8026E220 0026B160  7F E4 FB 78 */ mr r4, r31
/* 8026E224 0026B164  4B FF CF 59 */ bl cM3d_Cross_LinTri_Easy__FPC8cM3dGTriPC3Vec
/* 8026E228 0026B168  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8026E22C 0026B16C  41 82 00 18 */ beq lbl_8026E244
/* 8026E230 0026B170  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 8026E234 0026B174  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 8026E238 0026B178  90 01 00 84 */ stw r0, 0x84(r1)
/* 8026E23C 0026B17C  38 60 00 01 */ li r3, 1
/* 8026E240 0026B180  48 00 02 9C */ b lbl_8026E4DC
lbl_8026E244:
/* 8026E244 0026B184  3C 60 80 3A */ lis r3, lbl_803A78F8@ha
/* 8026E248 0026B188  38 03 78 F8 */ addi r0, r3, lbl_803A78F8@l
/* 8026E24C 0026B18C  90 01 00 70 */ stw r0, 0x70(r1)
/* 8026E250 0026B190  38 61 00 58 */ addi r3, r1, 0x58
/* 8026E254 0026B194  38 9E 00 14 */ addi r4, r30, 0x14
/* 8026E258 0026B198  38 BE 00 20 */ addi r5, r30, 0x20
/* 8026E25C 0026B19C  48 00 10 C1 */ bl SetStartEnd__8cM3dGLinFRC3VecRC3Vec
/* 8026E260 0026B1A0  7F A3 EB 78 */ mr r3, r29
/* 8026E264 0026B1A4  38 81 00 58 */ addi r4, r1, 0x58
/* 8026E268 0026B1A8  38 A1 00 0C */ addi r5, r1, 0xc
/* 8026E26C 0026B1AC  38 C1 00 08 */ addi r6, r1, 8
/* 8026E270 0026B1B0  4B FF A9 ED */ bl cM3d_Check_LinLin__FPC8cM3dGLinPC8cM3dGLinPfPf
/* 8026E274 0026B1B4  2C 03 00 02 */ cmpwi r3, 2
/* 8026E278 0026B1B8  41 80 00 A8 */ blt lbl_8026E320
/* 8026E27C 0026B1BC  C0 21 00 0C */ lfs f1, 0xc(r1)
/* 8026E280 0026B1C0  C0 42 B7 18 */ lfs f2, lbl_80455118-_SDA2_BASE_(r2)
/* 8026E284 0026B1C4  FC 01 10 40 */ fcmpo cr0, f1, f2
/* 8026E288 0026B1C8  40 81 00 98 */ ble lbl_8026E320
/* 8026E28C 0026B1CC  C0 02 B7 38 */ lfs f0, lbl_80455138-_SDA2_BASE_(r2)
/* 8026E290 0026B1D0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8026E294 0026B1D4  40 80 00 8C */ bge lbl_8026E320
/* 8026E298 0026B1D8  C3 E1 00 08 */ lfs f31, 8(r1)
/* 8026E29C 0026B1DC  FC 1F 10 40 */ fcmpo cr0, f31, f2
/* 8026E2A0 0026B1E0  40 81 00 80 */ ble lbl_8026E320
/* 8026E2A4 0026B1E4  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 8026E2A8 0026B1E8  40 80 00 78 */ bge lbl_8026E320
/* 8026E2AC 0026B1EC  7F A3 EB 78 */ mr r3, r29
/* 8026E2B0 0026B1F0  38 81 00 40 */ addi r4, r1, 0x40
/* 8026E2B4 0026B1F4  48 00 10 9D */ bl CalcPos__8cM3dGLinCFP3Vecf
/* 8026E2B8 0026B1F8  38 61 00 58 */ addi r3, r1, 0x58
/* 8026E2BC 0026B1FC  38 81 00 4C */ addi r4, r1, 0x4c
/* 8026E2C0 0026B200  FC 20 F8 90 */ fmr f1, f31
/* 8026E2C4 0026B204  48 00 10 8D */ bl CalcPos__8cM3dGLinCFP3Vecf
/* 8026E2C8 0026B208  38 61 00 40 */ addi r3, r1, 0x40
/* 8026E2CC 0026B20C  38 81 00 4C */ addi r4, r1, 0x4c
/* 8026E2D0 0026B210  7F E5 FB 78 */ mr r5, r31
/* 8026E2D4 0026B214  48 0D 8D BD */ bl PSVECAdd
/* 8026E2D8 0026B218  7F E3 FB 78 */ mr r3, r31
/* 8026E2DC 0026B21C  7F E4 FB 78 */ mr r4, r31
/* 8026E2E0 0026B220  C0 22 B7 C4 */ lfs f1, lbl_804551C4-_SDA2_BASE_(r2)
/* 8026E2E4 0026B224  48 0D 8D F5 */ bl PSVECScale
/* 8026E2E8 0026B228  38 61 00 40 */ addi r3, r1, 0x40
/* 8026E2EC 0026B22C  38 81 00 4C */ addi r4, r1, 0x4c
/* 8026E2F0 0026B230  48 0D 90 D5 */ bl PSVECDistance
/* 8026E2F4 0026B234  C0 1D 00 1C */ lfs f0, 0x1c(r29)
/* 8026E2F8 0026B238  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8026E2FC 0026B23C  40 80 00 24 */ bge lbl_8026E320
/* 8026E300 0026B240  3C 60 80 3A */ lis r3, lbl_803A78F8@ha
/* 8026E304 0026B244  38 03 78 F8 */ addi r0, r3, lbl_803A78F8@l
/* 8026E308 0026B248  90 01 00 70 */ stw r0, 0x70(r1)
/* 8026E30C 0026B24C  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 8026E310 0026B250  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 8026E314 0026B254  90 01 00 84 */ stw r0, 0x84(r1)
/* 8026E318 0026B258  38 60 00 01 */ li r3, 1
/* 8026E31C 0026B25C  48 00 01 C0 */ b lbl_8026E4DC
lbl_8026E320:
/* 8026E320 0026B260  38 61 00 58 */ addi r3, r1, 0x58
/* 8026E324 0026B264  38 9E 00 20 */ addi r4, r30, 0x20
/* 8026E328 0026B268  38 BE 00 2C */ addi r5, r30, 0x2c
/* 8026E32C 0026B26C  48 00 0F F1 */ bl SetStartEnd__8cM3dGLinFRC3VecRC3Vec
/* 8026E330 0026B270  7F A3 EB 78 */ mr r3, r29
/* 8026E334 0026B274  38 81 00 58 */ addi r4, r1, 0x58
/* 8026E338 0026B278  38 A1 00 0C */ addi r5, r1, 0xc
/* 8026E33C 0026B27C  38 C1 00 08 */ addi r6, r1, 8
/* 8026E340 0026B280  4B FF A9 1D */ bl cM3d_Check_LinLin__FPC8cM3dGLinPC8cM3dGLinPfPf
/* 8026E344 0026B284  2C 03 00 02 */ cmpwi r3, 2
/* 8026E348 0026B288  41 80 00 A8 */ blt lbl_8026E3F0
/* 8026E34C 0026B28C  C0 21 00 0C */ lfs f1, 0xc(r1)
/* 8026E350 0026B290  C0 42 B7 18 */ lfs f2, lbl_80455118-_SDA2_BASE_(r2)
/* 8026E354 0026B294  FC 01 10 40 */ fcmpo cr0, f1, f2
/* 8026E358 0026B298  40 81 00 98 */ ble lbl_8026E3F0
/* 8026E35C 0026B29C  C0 02 B7 38 */ lfs f0, lbl_80455138-_SDA2_BASE_(r2)
/* 8026E360 0026B2A0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8026E364 0026B2A4  40 80 00 8C */ bge lbl_8026E3F0
/* 8026E368 0026B2A8  C3 E1 00 08 */ lfs f31, 8(r1)
/* 8026E36C 0026B2AC  FC 1F 10 40 */ fcmpo cr0, f31, f2
/* 8026E370 0026B2B0  40 81 00 80 */ ble lbl_8026E3F0
/* 8026E374 0026B2B4  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 8026E378 0026B2B8  40 80 00 78 */ bge lbl_8026E3F0
/* 8026E37C 0026B2BC  7F A3 EB 78 */ mr r3, r29
/* 8026E380 0026B2C0  38 81 00 28 */ addi r4, r1, 0x28
/* 8026E384 0026B2C4  48 00 0F CD */ bl CalcPos__8cM3dGLinCFP3Vecf
/* 8026E388 0026B2C8  38 61 00 58 */ addi r3, r1, 0x58
/* 8026E38C 0026B2CC  38 81 00 34 */ addi r4, r1, 0x34
/* 8026E390 0026B2D0  FC 20 F8 90 */ fmr f1, f31
/* 8026E394 0026B2D4  48 00 0F BD */ bl CalcPos__8cM3dGLinCFP3Vecf
/* 8026E398 0026B2D8  38 61 00 28 */ addi r3, r1, 0x28
/* 8026E39C 0026B2DC  38 81 00 34 */ addi r4, r1, 0x34
/* 8026E3A0 0026B2E0  7F E5 FB 78 */ mr r5, r31
/* 8026E3A4 0026B2E4  48 0D 8C ED */ bl PSVECAdd
/* 8026E3A8 0026B2E8  7F E3 FB 78 */ mr r3, r31
/* 8026E3AC 0026B2EC  7F E4 FB 78 */ mr r4, r31
/* 8026E3B0 0026B2F0  C0 22 B7 C4 */ lfs f1, lbl_804551C4-_SDA2_BASE_(r2)
/* 8026E3B4 0026B2F4  48 0D 8D 25 */ bl PSVECScale
/* 8026E3B8 0026B2F8  38 61 00 28 */ addi r3, r1, 0x28
/* 8026E3BC 0026B2FC  38 81 00 34 */ addi r4, r1, 0x34
/* 8026E3C0 0026B300  48 0D 90 05 */ bl PSVECDistance
/* 8026E3C4 0026B304  C0 1D 00 1C */ lfs f0, 0x1c(r29)
/* 8026E3C8 0026B308  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8026E3CC 0026B30C  40 80 00 24 */ bge lbl_8026E3F0
/* 8026E3D0 0026B310  3C 60 80 3A */ lis r3, lbl_803A78F8@ha
/* 8026E3D4 0026B314  38 03 78 F8 */ addi r0, r3, lbl_803A78F8@l
/* 8026E3D8 0026B318  90 01 00 70 */ stw r0, 0x70(r1)
/* 8026E3DC 0026B31C  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 8026E3E0 0026B320  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 8026E3E4 0026B324  90 01 00 84 */ stw r0, 0x84(r1)
/* 8026E3E8 0026B328  38 60 00 01 */ li r3, 1
/* 8026E3EC 0026B32C  48 00 00 F0 */ b lbl_8026E4DC
lbl_8026E3F0:
/* 8026E3F0 0026B330  38 61 00 58 */ addi r3, r1, 0x58
/* 8026E3F4 0026B334  38 9E 00 2C */ addi r4, r30, 0x2c
/* 8026E3F8 0026B338  38 BE 00 14 */ addi r5, r30, 0x14
/* 8026E3FC 0026B33C  48 00 0F 21 */ bl SetStartEnd__8cM3dGLinFRC3VecRC3Vec
/* 8026E400 0026B340  7F A3 EB 78 */ mr r3, r29
/* 8026E404 0026B344  38 81 00 58 */ addi r4, r1, 0x58
/* 8026E408 0026B348  38 A1 00 0C */ addi r5, r1, 0xc
/* 8026E40C 0026B34C  38 C1 00 08 */ addi r6, r1, 8
/* 8026E410 0026B350  4B FF A8 4D */ bl cM3d_Check_LinLin__FPC8cM3dGLinPC8cM3dGLinPfPf
/* 8026E414 0026B354  2C 03 00 02 */ cmpwi r3, 2
/* 8026E418 0026B358  41 80 00 A8 */ blt lbl_8026E4C0
/* 8026E41C 0026B35C  C0 21 00 0C */ lfs f1, 0xc(r1)
/* 8026E420 0026B360  C0 42 B7 18 */ lfs f2, lbl_80455118-_SDA2_BASE_(r2)
/* 8026E424 0026B364  FC 01 10 40 */ fcmpo cr0, f1, f2
/* 8026E428 0026B368  40 81 00 98 */ ble lbl_8026E4C0
/* 8026E42C 0026B36C  C0 02 B7 38 */ lfs f0, lbl_80455138-_SDA2_BASE_(r2)
/* 8026E430 0026B370  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8026E434 0026B374  40 80 00 8C */ bge lbl_8026E4C0
/* 8026E438 0026B378  C3 E1 00 08 */ lfs f31, 8(r1)
/* 8026E43C 0026B37C  FC 1F 10 40 */ fcmpo cr0, f31, f2
/* 8026E440 0026B380  40 81 00 80 */ ble lbl_8026E4C0
/* 8026E444 0026B384  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 8026E448 0026B388  40 80 00 78 */ bge lbl_8026E4C0
/* 8026E44C 0026B38C  7F A3 EB 78 */ mr r3, r29
/* 8026E450 0026B390  38 81 00 10 */ addi r4, r1, 0x10
/* 8026E454 0026B394  48 00 0E FD */ bl CalcPos__8cM3dGLinCFP3Vecf
/* 8026E458 0026B398  38 61 00 58 */ addi r3, r1, 0x58
/* 8026E45C 0026B39C  38 81 00 1C */ addi r4, r1, 0x1c
/* 8026E460 0026B3A0  FC 20 F8 90 */ fmr f1, f31
/* 8026E464 0026B3A4  48 00 0E ED */ bl CalcPos__8cM3dGLinCFP3Vecf
/* 8026E468 0026B3A8  38 61 00 10 */ addi r3, r1, 0x10
/* 8026E46C 0026B3AC  38 81 00 1C */ addi r4, r1, 0x1c
/* 8026E470 0026B3B0  7F E5 FB 78 */ mr r5, r31
/* 8026E474 0026B3B4  48 0D 8C 1D */ bl PSVECAdd
/* 8026E478 0026B3B8  7F E3 FB 78 */ mr r3, r31
/* 8026E47C 0026B3BC  7F E4 FB 78 */ mr r4, r31
/* 8026E480 0026B3C0  C0 22 B7 C4 */ lfs f1, lbl_804551C4-_SDA2_BASE_(r2)
/* 8026E484 0026B3C4  48 0D 8C 55 */ bl PSVECScale
/* 8026E488 0026B3C8  38 61 00 10 */ addi r3, r1, 0x10
/* 8026E48C 0026B3CC  38 81 00 1C */ addi r4, r1, 0x1c
/* 8026E490 0026B3D0  48 0D 8F 35 */ bl PSVECDistance
/* 8026E494 0026B3D4  C0 1D 00 1C */ lfs f0, 0x1c(r29)
/* 8026E498 0026B3D8  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8026E49C 0026B3DC  40 80 00 24 */ bge lbl_8026E4C0
/* 8026E4A0 0026B3E0  3C 60 80 3A */ lis r3, lbl_803A78F8@ha
/* 8026E4A4 0026B3E4  38 03 78 F8 */ addi r0, r3, lbl_803A78F8@l
/* 8026E4A8 0026B3E8  90 01 00 70 */ stw r0, 0x70(r1)
/* 8026E4AC 0026B3EC  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 8026E4B0 0026B3F0  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 8026E4B4 0026B3F4  90 01 00 84 */ stw r0, 0x84(r1)
/* 8026E4B8 0026B3F8  38 60 00 01 */ li r3, 1
/* 8026E4BC 0026B3FC  48 00 00 20 */ b lbl_8026E4DC
lbl_8026E4C0:
/* 8026E4C0 0026B400  3C 60 80 3A */ lis r3, lbl_803A78F8@ha
/* 8026E4C4 0026B404  38 03 78 F8 */ addi r0, r3, lbl_803A78F8@l
/* 8026E4C8 0026B408  90 01 00 70 */ stw r0, 0x70(r1)
/* 8026E4CC 0026B40C  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 8026E4D0 0026B410  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 8026E4D4 0026B414  90 01 00 84 */ stw r0, 0x84(r1)
/* 8026E4D8 0026B418  38 60 00 00 */ li r3, 0
lbl_8026E4DC:
/* 8026E4DC 0026B41C  E3 E1 00 A8 */ psq_l f31, 168(r1), 0, 0
/* 8026E4E0 0026B420  CB E1 00 A0 */ lfd f31, 0xa0(r1)
/* 8026E4E4 0026B424  39 61 00 A0 */ addi r11, r1, 0xa0
/* 8026E4E8 0026B428  48 0F 3D 41 */ bl _restgpr_29
/* 8026E4EC 0026B42C  80 01 00 B4 */ lwz r0, 0xb4(r1)
/* 8026E4F0 0026B430  7C 08 03 A6 */ mtlr r0
/* 8026E4F4 0026B434  38 21 00 B0 */ addi r1, r1, 0xb0
/* 8026E4F8 0026B438  4E 80 00 20 */ blr