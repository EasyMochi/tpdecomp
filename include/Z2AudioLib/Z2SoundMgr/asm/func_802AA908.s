/* 802AA908 002A7848  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802AA90C 002A784C  7C 08 02 A6 */ mflr r0
/* 802AA910 002A7850  90 01 00 14 */ stw r0, 0x14(r1)
/* 802AA914 002A7854  93 E1 00 0C */ stw r31, 0xc(r1)
/* 802AA918 002A7858  7C 7F 1B 78 */ mr r31, r3
/* 802AA91C 002A785C  38 7F 00 04 */ addi r3, r31, 4
/* 802AA920 002A7860  4B FF 5A 39 */ bl JAISeMgr_NS_initParams
/* 802AA924 002A7864  C0 42 BE 38 */ lfs f2, lbl_80455838-_SDA2_BASE_(r2)
/* 802AA928 002A7868  D0 5F 07 3C */ stfs f2, 0x73c(r31)
/* 802AA92C 002A786C  D0 5F 07 44 */ stfs f2, 0x744(r31)
/* 802AA930 002A7870  C0 22 BE 44 */ lfs f1, lbl_80455844-_SDA2_BASE_(r2)
/* 802AA934 002A7874  D0 3F 07 40 */ stfs f1, 0x740(r31)
/* 802AA938 002A7878  C0 02 BE 50 */ lfs f0, lbl_80455850-_SDA2_BASE_(r2)
/* 802AA93C 002A787C  D0 1F 07 48 */ stfs f0, 0x748(r31)
/* 802AA940 002A7880  D0 3F 07 4C */ stfs f1, 0x74c(r31)
/* 802AA944 002A7884  D0 3F 07 50 */ stfs f1, 0x750(r31)
/* 802AA948 002A7888  38 00 00 00 */ li r0, 0
/* 802AA94C 002A788C  90 1F 07 58 */ stw r0, 0x758(r31)
/* 802AA950 002A7890  D0 3F 07 54 */ stfs f1, 0x754(r31)
/* 802AA954 002A7894  D0 3F 07 5C */ stfs f1, 0x75c(r31)
/* 802AA958 002A7898  90 1F 07 64 */ stw r0, 0x764(r31)
/* 802AA95C 002A789C  D0 3F 07 60 */ stfs f1, 0x760(r31)
/* 802AA960 002A78A0  D0 3F 07 68 */ stfs f1, 0x768(r31)
/* 802AA964 002A78A4  90 1F 07 70 */ stw r0, 0x770(r31)
/* 802AA968 002A78A8  D0 3F 07 6C */ stfs f1, 0x76c(r31)
/* 802AA96C 002A78AC  D0 3F 07 74 */ stfs f1, 0x774(r31)
/* 802AA970 002A78B0  90 1F 07 7C */ stw r0, 0x77c(r31)
/* 802AA974 002A78B4  D0 3F 07 78 */ stfs f1, 0x778(r31)
/* 802AA978 002A78B8  D0 3F 07 80 */ stfs f1, 0x780(r31)
/* 802AA97C 002A78BC  90 1F 07 88 */ stw r0, 0x788(r31)
/* 802AA980 002A78C0  D0 3F 07 84 */ stfs f1, 0x784(r31)
/* 802AA984 002A78C4  D0 5F 07 A0 */ stfs f2, 0x7a0(r31)
/* 802AA988 002A78C8  D0 5F 07 A8 */ stfs f2, 0x7a8(r31)
/* 802AA98C 002A78CC  D0 3F 07 A4 */ stfs f1, 0x7a4(r31)
/* 802AA990 002A78D0  D0 1F 07 AC */ stfs f0, 0x7ac(r31)
/* 802AA994 002A78D4  D0 3F 07 B0 */ stfs f1, 0x7b0(r31)
/* 802AA998 002A78D8  D0 3F 07 B4 */ stfs f1, 0x7b4(r31)
/* 802AA99C 002A78DC  90 1F 07 BC */ stw r0, 0x7bc(r31)
/* 802AA9A0 002A78E0  D0 3F 07 B8 */ stfs f1, 0x7b8(r31)
/* 802AA9A4 002A78E4  D0 3F 07 C0 */ stfs f1, 0x7c0(r31)
/* 802AA9A8 002A78E8  90 1F 07 C8 */ stw r0, 0x7c8(r31)
/* 802AA9AC 002A78EC  D0 3F 07 C4 */ stfs f1, 0x7c4(r31)
/* 802AA9B0 002A78F0  D0 3F 07 CC */ stfs f1, 0x7cc(r31)
/* 802AA9B4 002A78F4  90 1F 07 D4 */ stw r0, 0x7d4(r31)
/* 802AA9B8 002A78F8  D0 3F 07 D0 */ stfs f1, 0x7d0(r31)
/* 802AA9BC 002A78FC  D0 3F 07 D8 */ stfs f1, 0x7d8(r31)
/* 802AA9C0 002A7900  90 1F 07 E0 */ stw r0, 0x7e0(r31)
/* 802AA9C4 002A7904  D0 3F 07 DC */ stfs f1, 0x7dc(r31)
/* 802AA9C8 002A7908  D0 3F 07 E4 */ stfs f1, 0x7e4(r31)
/* 802AA9CC 002A790C  90 1F 07 EC */ stw r0, 0x7ec(r31)
/* 802AA9D0 002A7910  D0 3F 07 E8 */ stfs f1, 0x7e8(r31)
/* 802AA9D4 002A7914  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 802AA9D8 002A7918  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802AA9DC 002A791C  7C 08 03 A6 */ mtlr r0
/* 802AA9E0 002A7920  38 21 00 10 */ addi r1, r1, 0x10
/* 802AA9E4 002A7924  4E 80 00 20 */ blr