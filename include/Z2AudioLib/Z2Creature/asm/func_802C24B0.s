/* 802C24B0 002BF3F0  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802C24B4 002BF3F4  7C 08 02 A6 */ mflr r0
/* 802C24B8 002BF3F8  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C24BC 002BF3FC  4B FF E0 F5 */ bl Z2Creature_NS_init_X1_
/* 802C24C0 002BF400  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802C24C4 002BF404  7C 08 03 A6 */ mtlr r0
/* 802C24C8 002BF408  38 21 00 10 */ addi r1, r1, 0x10
/* 802C24CC 002BF40C  4E 80 00 20 */ blr