/* 80056C60 00053BA0  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80056C64 00053BA4  7C 08 02 A6 */ mflr r0
/* 80056C68 00053BA8  90 01 00 14 */ stw r0, 0x14(r1)
/* 80056C6C 00053BAC  7C 66 1B 78 */ mr r6, r3
/* 80056C70 00053BB0  3C 60 80 43 */ lis r3, lbl_80434AC8@ha
/* 80056C74 00053BB4  38 63 4A C8 */ addi r3, r3, lbl_80434AC8@l
/* 80056C78 00053BB8  38 86 00 10 */ addi r4, r6, 0x10
/* 80056C7C 00053BBC  38 A6 00 70 */ addi r5, r6, 0x70
/* 80056C80 00053BC0  38 C6 00 2C */ addi r6, r6, 0x2c
/* 80056C84 00053BC4  48 00 C9 ED */ bl dKyr_drawSun
/* 80056C88 00053BC8  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80056C8C 00053BCC  7C 08 03 A6 */ mtlr r0
/* 80056C90 00053BD0  38 21 00 10 */ addi r1, r1, 0x10
/* 80056C94 00053BD4  4E 80 00 20 */ blr