/* 80016394 000132D4  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 80016398 000132D8  7C 08 02 A6 */ mflr r0
/* 8001639C 000132DC  90 01 00 24 */ stw r0, 0x24(r1)
/* 800163A0 000132E0  39 61 00 20 */ addi r11, r1, 0x20
/* 800163A4 000132E4  48 34 BE 35 */ bl _savegpr_28
/* 800163A8 000132E8  7C 7C 1B 78 */ mr r28, r3
/* 800163AC 000132EC  7C 9D 23 78 */ mr r29, r4
/* 800163B0 000132F0  7C BE 2B 78 */ mr r30, r5
/* 800163B4 000132F4  4B FF 89 FD */ bl mDoExt_getCommandHeap
/* 800163B8 000132F8  7C 64 1B 78 */ mr r4, r3
/* 800163BC 000132FC  38 60 00 28 */ li r3, 0x28
/* 800163C0 00013300  38 A0 FF FC */ li r5, -4
/* 800163C4 00013304  48 2B 88 D5 */ bl __nw__FUlP7JKRHeapi
/* 800163C8 00013308  7C 7F 1B 79 */ or. r31, r3, r3
/* 800163CC 0001330C  41 82 00 10 */ beq lbl_800163DC
/* 800163D0 00013310  7F A4 EB 78 */ mr r4, r29
/* 800163D4 00013314  4B FF FF 65 */ bl mDoDvdThd_toMainRam_c
/* 800163D8 00013318  7C 7F 1B 78 */ mr r31, r3
lbl_800163DC:
/* 800163DC 0001331C  28 1F 00 00 */ cmplwi r31, 0
/* 800163E0 00013320  41 82 00 60 */ beq lbl_80016440
/* 800163E4 00013324  7F 83 E3 78 */ mr r3, r28
/* 800163E8 00013328  4B FF F4 F5 */ bl my_DVDConvertPathToEntrynum
/* 800163EC 0001332C  90 7F 00 18 */ stw r3, 0x18(r31)
/* 800163F0 00013330  80 1F 00 18 */ lwz r0, 0x18(r31)
/* 800163F4 00013334  2C 00 FF FF */ cmpwi r0, -1
/* 800163F8 00013338  40 82 00 34 */ bne lbl_8001642C
/* 800163FC 0001333C  38 00 00 01 */ li r0, 1
/* 80016400 00013340  98 1F 00 0C */ stb r0, 0xc(r31)
/* 80016404 00013344  28 1F 00 00 */ cmplwi r31, 0
/* 80016408 00013348  41 82 00 1C */ beq lbl_80016424
/* 8001640C 0001334C  7F E3 FB 78 */ mr r3, r31
/* 80016410 00013350  38 80 00 01 */ li r4, 1
/* 80016414 00013354  81 9F 00 10 */ lwz r12, 0x10(r31)
/* 80016418 00013358  81 8C 00 08 */ lwz r12, 8(r12)
/* 8001641C 0001335C  7D 89 03 A6 */ mtctr r12
/* 80016420 00013360  4E 80 04 21 */ bctrl
lbl_80016424:
/* 80016424 00013364  3B E0 00 00 */ li r31, 0
/* 80016428 00013368  48 00 00 18 */ b lbl_80016440
lbl_8001642C:
/* 8001642C 0001336C  93 DF 00 24 */ stw r30, 0x24(r31)
/* 80016430 00013370  3C 60 80 3E */ lis r3, lbl_803DEC60@ha
/* 80016434 00013374  38 63 EC 60 */ addi r3, r3, lbl_803DEC60@l
/* 80016438 00013378  7F E4 FB 78 */ mr r4, r31
/* 8001643C 0001337C  4B FF F5 A9 */ bl mDoDvdThd_param_c_NS_addition
lbl_80016440:
/* 80016440 00013380  7F E3 FB 78 */ mr r3, r31
/* 80016444 00013384  39 61 00 20 */ addi r11, r1, 0x20
/* 80016448 00013388  48 34 BD DD */ bl _restgpr_28
/* 8001644C 0001338C  80 01 00 24 */ lwz r0, 0x24(r1)
/* 80016450 00013390  7C 08 03 A6 */ mtlr r0
/* 80016454 00013394  38 21 00 20 */ addi r1, r1, 0x20
/* 80016458 00013398  4E 80 00 20 */ blr