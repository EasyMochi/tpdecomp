/* 802CC4C0 002C9400  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 802CC4C4 002C9404  7C 08 02 A6 */ mflr r0
/* 802CC4C8 002C9408  90 01 00 34 */ stw r0, 0x34(r1)
/* 802CC4CC 002C940C  88 03 04 01 */ lbz r0, 0x401(r3)
/* 802CC4D0 002C9410  28 00 00 40 */ cmplwi r0, 0x40
/* 802CC4D4 002C9414  41 80 00 10 */ blt lbl_802CC4E4
/* 802CC4D8 002C9418  80 63 00 00 */ lwz r3, 0(r3)
/* 802CC4DC 002C941C  4B FD 60 BD */ bl JAISound_NS_stop_X1_
/* 802CC4E0 002C9420  48 00 02 48 */ b lbl_802CC728
lbl_802CC4E4:
/* 802CC4E4 002C9424  3C A0 80 3A */ lis r5, lbl_8039C98C@ha
/* 802CC4E8 002C9428  38 C5 C9 8C */ addi r6, r5, lbl_8039C98C@l
/* 802CC4EC 002C942C  A0 03 03 FC */ lhz r0, 0x3fc(r3)
/* 802CC4F0 002C9430  1C 00 00 0C */ mulli r0, r0, 0xc
/* 802CC4F4 002C9434  7C A6 02 14 */ add r5, r6, r0
/* 802CC4F8 002C9438  89 05 00 08 */ lbz r8, 8(r5)
/* 802CC4FC 002C943C  80 03 00 08 */ lwz r0, 8(r3)
/* 802CC500 002C9440  3C A0 00 19 */ lis r5, 0x0019660D@ha
/* 802CC504 002C9444  38 A5 66 0D */ addi r5, r5, 0x0019660D@l
/* 802CC508 002C9448  7C E0 29 D6 */ mullw r7, r0, r5
/* 802CC50C 002C944C  3C E7 3C 6F */ addis r7, r7, 0x3c6f
/* 802CC510 002C9450  38 07 F3 5F */ addi r0, r7, -3233
/* 802CC514 002C9454  90 03 00 08 */ stw r0, 8(r3)
/* 802CC518 002C9458  80 03 00 08 */ lwz r0, 8(r3)
/* 802CC51C 002C945C  54 00 BA 7E */ srwi r0, r0, 9
/* 802CC520 002C9460  64 00 3F 80 */ oris r0, r0, 0x3f80
/* 802CC524 002C9464  90 01 00 10 */ stw r0, 0x10(r1)
/* 802CC528 002C9468  C0 01 00 10 */ lfs f0, 0x10(r1)
/* 802CC52C 002C946C  C0 42 C5 34 */ lfs f2, lbl_80455F34-_SDA2_BASE_(r2)
/* 802CC530 002C9470  EC 60 10 28 */ fsubs f3, f0, f2
/* 802CC534 002C9474  C8 22 C5 48 */ lfd f1, lbl_80455F48-_SDA2_BASE_(r2)
/* 802CC538 002C9478  91 01 00 24 */ stw r8, 0x24(r1)
/* 802CC53C 002C947C  3C 00 43 30 */ lis r0, 0x4330
/* 802CC540 002C9480  90 01 00 20 */ stw r0, 0x20(r1)
/* 802CC544 002C9484  C8 01 00 20 */ lfd f0, 0x20(r1)
/* 802CC548 002C9488  EC 00 08 28 */ fsubs f0, f0, f1
/* 802CC54C 002C948C  EC 00 00 F2 */ fmuls f0, f0, f3
/* 802CC550 002C9490  FC 00 00 1E */ fctiwz f0, f0
/* 802CC554 002C9494  D8 01 00 28 */ stfd f0, 0x28(r1)
/* 802CC558 002C9498  80 E1 00 2C */ lwz r7, 0x2c(r1)
/* 802CC55C 002C949C  7C E8 07 74 */ extsb r8, r7
/* 802CC560 002C94A0  88 E3 04 01 */ lbz r7, 0x401(r3)
/* 802CC564 002C94A4  28 07 00 00 */ cmplwi r7, 0
/* 802CC568 002C94A8  41 82 01 A8 */ beq lbl_802CC710
/* 802CC56C 002C94AC  54 84 06 3F */ clrlwi. r4, r4, 0x18
/* 802CC570 002C94B0  41 82 01 A0 */ beq lbl_802CC710
/* 802CC574 002C94B4  39 00 00 00 */ li r8, 0
/* 802CC578 002C94B8  7C 83 3A 14 */ add r4, r3, r7
/* 802CC57C 002C94BC  88 84 04 01 */ lbz r4, 0x401(r4)
/* 802CC580 002C94C0  7C 84 07 74 */ extsb r4, r4
/* 802CC584 002C94C4  54 84 08 3C */ slwi r4, r4, 1
lbl_802CC588:
/* 802CC588 002C94C8  39 20 00 00 */ li r9, 0
/* 802CC58C 002C94CC  A0 E3 03 FC */ lhz r7, 0x3fc(r3)
/* 802CC590 002C94D0  1C E7 00 0C */ mulli r7, r7, 0xc
/* 802CC594 002C94D4  7C E6 3A 14 */ add r7, r6, r7
/* 802CC598 002C94D8  89 47 00 08 */ lbz r10, 8(r7)
/* 802CC59C 002C94DC  80 E3 00 08 */ lwz r7, 8(r3)
/* 802CC5A0 002C94E0  7C E7 29 D6 */ mullw r7, r7, r5
/* 802CC5A4 002C94E4  3C E7 3C 6F */ addis r7, r7, 0x3c6f
/* 802CC5A8 002C94E8  38 E7 F3 5F */ addi r7, r7, -3233
/* 802CC5AC 002C94EC  90 E3 00 08 */ stw r7, 8(r3)
/* 802CC5B0 002C94F0  80 E3 00 08 */ lwz r7, 8(r3)
/* 802CC5B4 002C94F4  54 E7 BA 7E */ srwi r7, r7, 9
/* 802CC5B8 002C94F8  64 E7 3F 80 */ oris r7, r7, 0x3f80
/* 802CC5BC 002C94FC  90 E1 00 0C */ stw r7, 0xc(r1)
/* 802CC5C0 002C9500  C0 01 00 0C */ lfs f0, 0xc(r1)
/* 802CC5C4 002C9504  EC 60 10 28 */ fsubs f3, f0, f2
/* 802CC5C8 002C9508  91 41 00 2C */ stw r10, 0x2c(r1)
/* 802CC5CC 002C950C  90 01 00 28 */ stw r0, 0x28(r1)
/* 802CC5D0 002C9510  C8 01 00 28 */ lfd f0, 0x28(r1)
/* 802CC5D4 002C9514  EC 00 08 28 */ fsubs f0, f0, f1
/* 802CC5D8 002C9518  EC 00 00 F2 */ fmuls f0, f0, f3
/* 802CC5DC 002C951C  FC 00 00 1E */ fctiwz f0, f0
/* 802CC5E0 002C9520  D8 01 00 20 */ stfd f0, 0x20(r1)
/* 802CC5E4 002C9524  80 E1 00 24 */ lwz r7, 0x24(r1)
/* 802CC5E8 002C9528  7C E7 07 74 */ extsb r7, r7
/* 802CC5EC 002C952C  39 60 00 00 */ li r11, 0
/* 802CC5F0 002C9530  89 43 04 01 */ lbz r10, 0x401(r3)
/* 802CC5F4 002C9534  7D 49 03 A6 */ mtctr r10
/* 802CC5F8 002C9538  2C 0A 00 00 */ cmpwi r10, 0
/* 802CC5FC 002C953C  40 81 00 28 */ ble lbl_802CC624
lbl_802CC600:
/* 802CC600 002C9540  39 4B 04 02 */ addi r10, r11, 0x402
/* 802CC604 002C9544  7D 43 50 AE */ lbzx r10, r3, r10
/* 802CC608 002C9548  7D 4A 07 74 */ extsb r10, r10
/* 802CC60C 002C954C  7C 0A 38 00 */ cmpw r10, r7
/* 802CC610 002C9550  40 82 00 0C */ bne lbl_802CC61C
/* 802CC614 002C9554  39 20 00 01 */ li r9, 1
/* 802CC618 002C9558  48 00 00 0C */ b lbl_802CC624
lbl_802CC61C:
/* 802CC61C 002C955C  39 6B 00 01 */ addi r11, r11, 1
/* 802CC620 002C9560  42 00 FF E0 */ bdnz lbl_802CC600
lbl_802CC624:
/* 802CC624 002C9564  55 2A 06 3F */ clrlwi. r10, r9, 0x18
/* 802CC628 002C9568  40 82 FF 60 */ bne lbl_802CC588
/* 802CC62C 002C956C  39 40 00 00 */ li r10, 0
/* 802CC630 002C9570  7D 0B 07 75 */ extsb. r11, r8
/* 802CC634 002C9574  39 81 00 14 */ addi r12, r1, 0x14
/* 802CC638 002C9578  7D 69 03 A6 */ mtctr r11
/* 802CC63C 002C957C  40 81 00 24 */ ble lbl_802CC660
lbl_802CC640:
/* 802CC640 002C9580  7D 6C 50 AE */ lbzx r11, r12, r10
/* 802CC644 002C9584  7D 6B 07 74 */ extsb r11, r11
/* 802CC648 002C9588  7C 07 58 00 */ cmpw r7, r11
/* 802CC64C 002C958C  40 82 00 0C */ bne lbl_802CC658
/* 802CC650 002C9590  39 20 00 01 */ li r9, 1
/* 802CC654 002C9594  48 00 00 0C */ b lbl_802CC660
lbl_802CC658:
/* 802CC658 002C9598  39 4A 00 02 */ addi r10, r10, 2
/* 802CC65C 002C959C  42 00 FF E4 */ bdnz lbl_802CC640
lbl_802CC660:
/* 802CC660 002C95A0  55 29 06 3F */ clrlwi. r9, r9, 0x18
/* 802CC664 002C95A4  40 82 FF 24 */ bne lbl_802CC588
/* 802CC668 002C95A8  A1 23 03 FC */ lhz r9, 0x3fc(r3)
/* 802CC66C 002C95AC  1D 49 00 0C */ mulli r10, r9, 0xc
/* 802CC670 002C95B0  3D 20 80 3A */ lis r9, lbl_8039C98C@ha
/* 802CC674 002C95B4  39 29 C9 8C */ addi r9, r9, lbl_8039C98C@l
/* 802CC678 002C95B8  7D 69 50 2E */ lwzx r11, r9, r10
/* 802CC67C 002C95BC  39 2B 00 01 */ addi r9, r11, 1
/* 802CC680 002C95C0  7D 44 48 AE */ lbzx r10, r4, r9
/* 802CC684 002C95C4  54 E9 08 3C */ slwi r9, r7, 1
/* 802CC688 002C95C8  7D 2B 48 AE */ lbzx r9, r11, r9
/* 802CC68C 002C95CC  7D 4A 48 50 */ subf r10, r10, r9
/* 802CC690 002C95D0  7D 49 FE 70 */ srawi r9, r10, 0x1f
/* 802CC694 002C95D4  7D 2A 52 78 */ xor r10, r9, r10
/* 802CC698 002C95D8  7D 49 50 50 */ subf r10, r9, r10
/* 802CC69C 002C95DC  A1 22 D1 A8 */ lhz r9, lbl_80456BA8-_SDA2_BASE_(r2)
/* 802CC6A0 002C95E0  B1 21 00 08 */ sth r9, 8(r1)
/* 802CC6A4 002C95E4  98 E1 00 08 */ stb r7, 8(r1)
/* 802CC6A8 002C95E8  99 41 00 09 */ stb r10, 9(r1)
/* 802CC6AC 002C95EC  7D 09 07 74 */ extsb r9, r8
/* 802CC6B0 002C95F0  55 29 08 3C */ slwi r9, r9, 1
/* 802CC6B4 002C95F4  39 61 00 14 */ addi r11, r1, 0x14
/* 802CC6B8 002C95F8  7D 6B 4A 14 */ add r11, r11, r9
/* 802CC6BC 002C95FC  98 EB 00 00 */ stb r7, 0(r11)
/* 802CC6C0 002C9600  99 4B 00 01 */ stb r10, 1(r11)
/* 802CC6C4 002C9604  39 08 00 01 */ addi r8, r8, 1
/* 802CC6C8 002C9608  7D 07 07 74 */ extsb r7, r8
/* 802CC6CC 002C960C  2C 07 00 05 */ cmpwi r7, 5
/* 802CC6D0 002C9610  40 82 FE B8 */ bne lbl_802CC588
/* 802CC6D4 002C9614  88 E1 00 15 */ lbz r7, 0x15(r1)
/* 802CC6D8 002C9618  89 01 00 14 */ lbz r8, 0x14(r1)
/* 802CC6DC 002C961C  38 80 00 00 */ li r4, 0
/* 802CC6E0 002C9620  38 00 00 05 */ li r0, 5
/* 802CC6E4 002C9624  7C 09 03 A6 */ mtctr r0
lbl_802CC6E8:
/* 802CC6E8 002C9628  38 C1 00 14 */ addi r6, r1, 0x14
/* 802CC6EC 002C962C  7C C6 22 14 */ add r6, r6, r4
/* 802CC6F0 002C9630  88 A6 00 01 */ lbz r5, 1(r6)
/* 802CC6F4 002C9634  54 E0 04 3E */ clrlwi r0, r7, 0x10
/* 802CC6F8 002C9638  7C 05 00 00 */ cmpw r5, r0
/* 802CC6FC 002C963C  40 80 00 0C */ bge lbl_802CC708
/* 802CC700 002C9640  7C A7 2B 78 */ mr r7, r5
/* 802CC704 002C9644  89 06 00 00 */ lbz r8, 0(r6)
lbl_802CC708:
/* 802CC708 002C9648  38 84 00 02 */ addi r4, r4, 2
/* 802CC70C 002C964C  42 00 FF DC */ bdnz lbl_802CC6E8
lbl_802CC710:
/* 802CC710 002C9650  88 03 04 01 */ lbz r0, 0x401(r3)
/* 802CC714 002C9654  7C 83 02 14 */ add r4, r3, r0
/* 802CC718 002C9658  99 04 04 02 */ stb r8, 0x402(r4)
/* 802CC71C 002C965C  88 83 04 01 */ lbz r4, 0x401(r3)
/* 802CC720 002C9660  38 04 00 01 */ addi r0, r4, 1
/* 802CC724 002C9664  98 03 04 01 */ stb r0, 0x401(r3)
lbl_802CC728:
/* 802CC728 002C9668  80 01 00 34 */ lwz r0, 0x34(r1)
/* 802CC72C 002C966C  7C 08 03 A6 */ mtlr r0
/* 802CC730 002C9670  38 21 00 30 */ addi r1, r1, 0x30
/* 802CC734 002C9674  4E 80 00 20 */ blr