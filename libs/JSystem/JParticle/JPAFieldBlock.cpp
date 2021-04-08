//
// Generated By: dol2asm
// Translation Unit: JPAFieldBlock
//

#include "JSystem/JParticle/JPAFieldBlock.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JPABaseParticle {};

struct JPAEmitterWorkData {};

struct JKRHeap {};

struct JPAFieldBlock {
    /* 8027D088 */ JPAFieldBlock(u8 const*, JKRHeap*);
    /* 8027D0C0 */ void init(JKRHeap*);
};

struct JPAFieldVortex {
    /* 8027C56C */ void prepare(JPAEmitterWorkData*, JPAFieldBlock*);
    /* 8027C674 */ void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*);
    /* 8027D564 */ ~JPAFieldVortex();
};

struct JPAFieldSpin {
    /* 8027CE64 */ void prepare(JPAEmitterWorkData*, JPAFieldBlock*);
    /* 8027CFA8 */ void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*);
    /* 8027D3F4 */ ~JPAFieldSpin();
};

struct JPAFieldRandom {
    /* 8027CCCC */ void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*);
    /* 8027D4AC */ ~JPAFieldRandom();
};

struct JPAFieldNewton {
    /* 8027C36C */ void prepare(JPAEmitterWorkData*, JPAFieldBlock*);
    /* 8027C3E0 */ void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*);
    /* 8027D5C0 */ ~JPAFieldNewton();
};

struct JPAFieldMagnet {
    /* 8027C24C */ void prepare(JPAEmitterWorkData*, JPAFieldBlock*);
    /* 8027C29C */ void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*);
    /* 8027D61C */ ~JPAFieldMagnet();
};

struct JPAFieldGravity {
    /* 8027BFB4 */ void prepare(JPAEmitterWorkData*, JPAFieldBlock*);
    /* 8027C054 */ void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*);
    /* 8027D6D4 */ ~JPAFieldGravity();
};

struct JPAFieldDrag {
    /* 8027CDE4 */ void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*);
    /* 8027D450 */ ~JPAFieldDrag();
};

struct JPAFieldConvection {
    /* 8027C814 */ void prepare(JPAEmitterWorkData*, JPAFieldBlock*);
    /* 8027CA94 */ void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*);
    /* 8027D508 */ ~JPAFieldConvection();
};

struct JPAFieldBase {
    /* 80276A8C */ void prepare(JPAEmitterWorkData*, JPAFieldBlock*);
    /* 8027BDEC */ void calcAffect(JPAFieldBlock*, JPABaseParticle*);
    /* 8027BF18 */ void calcFadeAffect(JPAFieldBlock*, f32) const;
    /* 8027D3AC */ ~JPAFieldBase();
};

struct JPAFieldAir {
    /* 8027C07C */ void prepare(JPAEmitterWorkData*, JPAFieldBlock*);
    /* 8027C1B8 */ void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*);
    /* 8027D678 */ ~JPAFieldAir();
};

//
// Forward References:
//

extern "C" void calcAffect__12JPAFieldBaseFP13JPAFieldBlockP15JPABaseParticle();
extern "C" void calcFadeAffect__12JPAFieldBaseCFP13JPAFieldBlockf();
extern "C" void prepare__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlock();
extern "C" void calc__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle();
extern "C" void prepare__11JPAFieldAirFP18JPAEmitterWorkDataP13JPAFieldBlock();
extern "C" void calc__11JPAFieldAirFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle();
extern "C" void prepare__14JPAFieldMagnetFP18JPAEmitterWorkDataP13JPAFieldBlock();
extern "C" void calc__14JPAFieldMagnetFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle();
extern "C" void prepare__14JPAFieldNewtonFP18JPAEmitterWorkDataP13JPAFieldBlock();
extern "C" void calc__14JPAFieldNewtonFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle();
extern "C" void prepare__14JPAFieldVortexFP18JPAEmitterWorkDataP13JPAFieldBlock();
extern "C" void calc__14JPAFieldVortexFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle();
extern "C" void prepare__18JPAFieldConvectionFP18JPAEmitterWorkDataP13JPAFieldBlock();
extern "C" void
calc__18JPAFieldConvectionFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle();
extern "C" void calc__14JPAFieldRandomFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle();
extern "C" void calc__12JPAFieldDragFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle();
extern "C" void prepare__12JPAFieldSpinFP18JPAEmitterWorkDataP13JPAFieldBlock();
extern "C" void calc__12JPAFieldSpinFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle();
extern "C" void __ct__13JPAFieldBlockFPCUcP7JKRHeap();
extern "C" void init__13JPAFieldBlockFP7JKRHeap();
extern "C" void __dt__12JPAFieldBaseFv();
extern "C" void __dt__12JPAFieldSpinFv();
extern "C" void __dt__12JPAFieldDragFv();
extern "C" void __dt__14JPAFieldRandomFv();
extern "C" void __dt__18JPAFieldConvectionFv();
extern "C" void __dt__14JPAFieldVortexFv();
extern "C" void __dt__14JPAFieldNewtonFv();
extern "C" void __dt__14JPAFieldMagnetFv();
extern "C" void __dt__11JPAFieldAirFv();
extern "C" void __dt__15JPAFieldGravityFv();

//
// External References:
//

extern "C" void prepare__12JPAFieldBaseFP18JPAEmitterWorkDataP13JPAFieldBlock();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void PSMTXRotAxisRad();
extern "C" void PSMTXMultVecSR();
extern "C" void PSVECMag();
extern "C" void PSVECCrossProduct();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern u32 __float_epsilon;

//
// Declarations:
//

/* 8027BDEC-8027BF18 27672C 012C+00 8/8 0/0 0/0 .text
 * calcAffect__12JPAFieldBaseFP13JPAFieldBlockP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldBase::calcAffect(JPAFieldBlock* param_0, JPABaseParticle* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calcAffect__12JPAFieldBaseFP13JPAFieldBlockP15JPABaseParticle.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455338-8045533C 003938 0004+00 6/6 0/0 0/0 .sdata2          @2353 */
SECTION_SDATA2 static f32 lit_2353 = 1.0f;

/* 8045533C-80455340 00393C 0004+00 11/11 0/0 0/0 .sdata2          @2354 */
SECTION_SDATA2 static u8 lit_2354[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8027BF18-8027BFB4 276858 009C+00 2/2 0/0 0/0 .text
 * calcFadeAffect__12JPAFieldBaseCFP13JPAFieldBlockf            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldBase::calcFadeAffect(JPAFieldBlock* param_0, f32 param_1) const {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calcFadeAffect__12JPAFieldBaseCFP13JPAFieldBlockf.s"
}
#pragma pop

/* 8027BFB4-8027C054 2768F4 00A0+00 1/0 0/0 0/0 .text
 * prepare__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldGravity::prepare(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/prepare__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlock.s"
}
#pragma pop

/* 8027C054-8027C07C 276994 0028+00 1/0 0/0 0/0 .text
 * calc__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldGravity::calc(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1,
                               JPABaseParticle* param_2) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calc__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455340-80455344 003940 0004+00 8/8 0/0 0/0 .sdata2          @2459 */
SECTION_SDATA2 static f32 lit_2459 = 32.0f;

/* 80455344-80455348 003944 0004+00 9/9 0/0 0/0 .sdata2          @2460 */
SECTION_SDATA2 static f32 lit_2460 = 0.5f;

/* 80455348-8045534C 003948 0004+00 8/8 0/0 0/0 .sdata2          @2461 */
SECTION_SDATA2 static f32 lit_2461 = 3.0f;

/* 8027C07C-8027C1B8 2769BC 013C+00 1/0 0/0 0/0 .text
 * prepare__11JPAFieldAirFP18JPAEmitterWorkDataP13JPAFieldBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldAir::prepare(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/prepare__11JPAFieldAirFP18JPAEmitterWorkDataP13JPAFieldBlock.s"
}
#pragma pop

/* 8027C1B8-8027C24C 276AF8 0094+00 1/0 0/0 0/0 .text
 * calc__11JPAFieldAirFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldAir::calc(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1,
                           JPABaseParticle* param_2) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calc__11JPAFieldAirFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle.s"
}
#pragma pop

/* 8027C24C-8027C29C 276B8C 0050+00 1/0 0/0 0/0 .text
 * prepare__14JPAFieldMagnetFP18JPAEmitterWorkDataP13JPAFieldBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldMagnet::prepare(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/prepare__14JPAFieldMagnetFP18JPAEmitterWorkDataP13JPAFieldBlock.s"
}
#pragma pop

/* 8027C29C-8027C36C 276BDC 00D0+00 1/0 0/0 0/0 .text
 * calc__14JPAFieldMagnetFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldMagnet::calc(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1,
                              JPABaseParticle* param_2) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calc__14JPAFieldMagnetFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle.s"
}
#pragma pop

/* 8027C36C-8027C3E0 276CAC 0074+00 1/0 0/0 0/0 .text
 * prepare__14JPAFieldNewtonFP18JPAEmitterWorkDataP13JPAFieldBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldNewton::prepare(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/prepare__14JPAFieldNewtonFP18JPAEmitterWorkDataP13JPAFieldBlock.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045534C-80455350 00394C 0004+00 1/1 0/0 0/0 .sdata2          @2656 */
SECTION_SDATA2 static f32 lit_2656 = 10.0f;

/* 8027C3E0-8027C56C 276D20 018C+00 1/0 0/0 0/0 .text
 * calc__14JPAFieldNewtonFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldNewton::calc(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1,
                              JPABaseParticle* param_2) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calc__14JPAFieldNewtonFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle.s"
}
#pragma pop

/* 8027C56C-8027C674 276EAC 0108+00 1/0 0/0 0/0 .text
 * prepare__14JPAFieldVortexFP18JPAEmitterWorkDataP13JPAFieldBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldVortex::prepare(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/prepare__14JPAFieldVortexFP18JPAEmitterWorkDataP13JPAFieldBlock.s"
}
#pragma pop

/* 8027C674-8027C814 276FB4 01A0+00 1/0 0/0 0/0 .text
 * calc__14JPAFieldVortexFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldVortex::calc(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1,
                              JPABaseParticle* param_2) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calc__14JPAFieldVortexFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle.s"
}
#pragma pop

/* 8027C814-8027CA94 277154 0280+00 1/0 0/0 0/0 .text
 * prepare__18JPAFieldConvectionFP18JPAEmitterWorkDataP13JPAFieldBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldConvection::prepare(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/prepare__18JPAFieldConvectionFP18JPAEmitterWorkDataP13JPAFieldBlock.s"
}
#pragma pop

/* 8027CA94-8027CCCC 2773D4 0238+00 1/0 0/0 0/0 .text
 * calc__18JPAFieldConvectionFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldConvection::calc(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1,
                                  JPABaseParticle* param_2) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calc__18JPAFieldConvectionFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle.s"
}
#pragma pop

/* 8027CCCC-8027CDE4 27760C 0118+00 1/0 0/0 0/0 .text
 * calc__14JPAFieldRandomFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldRandom::calc(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1,
                              JPABaseParticle* param_2) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calc__14JPAFieldRandomFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle.s"
}
#pragma pop

/* 8027CDE4-8027CE64 277724 0080+00 1/0 0/0 0/0 .text
 * calc__12JPAFieldDragFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldDrag::calc(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1,
                            JPABaseParticle* param_2) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calc__12JPAFieldDragFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle.s"
}
#pragma pop

/* 8027CE64-8027CFA8 2777A4 0144+00 1/0 0/0 0/0 .text
 * prepare__12JPAFieldSpinFP18JPAEmitterWorkDataP13JPAFieldBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldSpin::prepare(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/prepare__12JPAFieldSpinFP18JPAEmitterWorkDataP13JPAFieldBlock.s"
}
#pragma pop

/* 8027CFA8-8027D088 2778E8 00E0+00 1/0 0/0 0/0 .text
 * calc__12JPAFieldSpinFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldSpin::calc(JPAEmitterWorkData* param_0, JPAFieldBlock* param_1,
                            JPABaseParticle* param_2) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/calc__12JPAFieldSpinFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle.s"
}
#pragma pop

/* 8027D088-8027D0C0 2779C8 0038+00 0/0 1/1 0/0 .text            __ct__13JPAFieldBlockFPCUcP7JKRHeap
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldBlock::JPAFieldBlock(u8 const* param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__ct__13JPAFieldBlockFPCUcP7JKRHeap.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C44A8-803C44CC -00001 0024+00 1/1 0/0 0/0 .data            @3259 */
SECTION_DATA static void* lit_3259[9] = {
    (void*)(((char*)init__13JPAFieldBlockFP7JKRHeap) + 0xFC),
    (void*)(((char*)init__13JPAFieldBlockFP7JKRHeap) + 0x130),
    (void*)(((char*)init__13JPAFieldBlockFP7JKRHeap) + 0x164),
    (void*)(((char*)init__13JPAFieldBlockFP7JKRHeap) + 0x198),
    (void*)(((char*)init__13JPAFieldBlockFP7JKRHeap) + 0x1CC),
    (void*)(((char*)init__13JPAFieldBlockFP7JKRHeap) + 0x200),
    (void*)(((char*)init__13JPAFieldBlockFP7JKRHeap) + 0x234),
    (void*)(((char*)init__13JPAFieldBlockFP7JKRHeap) + 0x268),
    (void*)(((char*)init__13JPAFieldBlockFP7JKRHeap) + 0x29C),
};

/* 803C44CC-803C44E0 0215EC 0014+00 11/11 0/0 0/0 .data            __vt__12JPAFieldBase */
SECTION_DATA extern void* __vt__12JPAFieldBase[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12JPAFieldBaseFv,
    (void*)prepare__12JPAFieldBaseFP18JPAEmitterWorkDataP13JPAFieldBlock,
    (void*)NULL,
};

/* 803C44E0-803C44F4 021600 0014+00 2/2 0/0 0/0 .data            __vt__12JPAFieldSpin */
SECTION_DATA extern void* __vt__12JPAFieldSpin[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12JPAFieldSpinFv,
    (void*)prepare__12JPAFieldSpinFP18JPAEmitterWorkDataP13JPAFieldBlock,
    (void*)calc__12JPAFieldSpinFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle,
};

/* 803C44F4-803C4508 021614 0014+00 2/2 0/0 0/0 .data            __vt__12JPAFieldDrag */
SECTION_DATA extern void* __vt__12JPAFieldDrag[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12JPAFieldDragFv,
    (void*)prepare__12JPAFieldBaseFP18JPAEmitterWorkDataP13JPAFieldBlock,
    (void*)calc__12JPAFieldDragFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle,
};

/* 803C4508-803C451C 021628 0014+00 2/2 0/0 0/0 .data            __vt__14JPAFieldRandom */
SECTION_DATA extern void* __vt__14JPAFieldRandom[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14JPAFieldRandomFv,
    (void*)prepare__12JPAFieldBaseFP18JPAEmitterWorkDataP13JPAFieldBlock,
    (void*)calc__14JPAFieldRandomFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle,
};

/* 803C451C-803C4530 02163C 0014+00 2/2 0/0 0/0 .data            __vt__18JPAFieldConvection */
SECTION_DATA extern void* __vt__18JPAFieldConvection[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18JPAFieldConvectionFv,
    (void*)prepare__18JPAFieldConvectionFP18JPAEmitterWorkDataP13JPAFieldBlock,
    (void*)calc__18JPAFieldConvectionFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle,
};

/* 803C4530-803C4544 021650 0014+00 2/2 0/0 0/0 .data            __vt__14JPAFieldVortex */
SECTION_DATA extern void* __vt__14JPAFieldVortex[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14JPAFieldVortexFv,
    (void*)prepare__14JPAFieldVortexFP18JPAEmitterWorkDataP13JPAFieldBlock,
    (void*)calc__14JPAFieldVortexFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle,
};

/* 803C4544-803C4558 021664 0014+00 2/2 0/0 0/0 .data            __vt__14JPAFieldNewton */
SECTION_DATA extern void* __vt__14JPAFieldNewton[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14JPAFieldNewtonFv,
    (void*)prepare__14JPAFieldNewtonFP18JPAEmitterWorkDataP13JPAFieldBlock,
    (void*)calc__14JPAFieldNewtonFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle,
};

/* 803C4558-803C456C 021678 0014+00 2/2 0/0 0/0 .data            __vt__14JPAFieldMagnet */
SECTION_DATA extern void* __vt__14JPAFieldMagnet[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14JPAFieldMagnetFv,
    (void*)prepare__14JPAFieldMagnetFP18JPAEmitterWorkDataP13JPAFieldBlock,
    (void*)calc__14JPAFieldMagnetFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle,
};

/* 803C456C-803C4580 02168C 0014+00 2/2 0/0 0/0 .data            __vt__11JPAFieldAir */
SECTION_DATA extern void* __vt__11JPAFieldAir[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11JPAFieldAirFv,
    (void*)prepare__11JPAFieldAirFP18JPAEmitterWorkDataP13JPAFieldBlock,
    (void*)calc__11JPAFieldAirFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle,
};

/* 803C4580-803C4598 0216A0 0014+04 2/2 0/0 0/0 .data            __vt__15JPAFieldGravity */
SECTION_DATA extern void* __vt__15JPAFieldGravity[5 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15JPAFieldGravityFv,
    (void*)prepare__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlock,
    (void*)calc__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle,
    /* padding */
    NULL,
};

/* 8027D0C0-8027D3AC 277A00 02EC+00 2/1 0/0 0/0 .text            init__13JPAFieldBlockFP7JKRHeap */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAFieldBlock::init(JKRHeap* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/init__13JPAFieldBlockFP7JKRHeap.s"
}
#pragma pop

/* 8027D3AC-8027D3F4 277CEC 0048+00 1/0 0/0 0/0 .text            __dt__12JPAFieldBaseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldBase::~JPAFieldBase() {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__dt__12JPAFieldBaseFv.s"
}
#pragma pop

/* 8027D3F4-8027D450 277D34 005C+00 1/0 0/0 0/0 .text            __dt__12JPAFieldSpinFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldSpin::~JPAFieldSpin() {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__dt__12JPAFieldSpinFv.s"
}
#pragma pop

/* 8027D450-8027D4AC 277D90 005C+00 1/0 0/0 0/0 .text            __dt__12JPAFieldDragFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldDrag::~JPAFieldDrag() {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__dt__12JPAFieldDragFv.s"
}
#pragma pop

/* 8027D4AC-8027D508 277DEC 005C+00 1/0 0/0 0/0 .text            __dt__14JPAFieldRandomFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldRandom::~JPAFieldRandom() {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__dt__14JPAFieldRandomFv.s"
}
#pragma pop

/* 8027D508-8027D564 277E48 005C+00 1/0 0/0 0/0 .text            __dt__18JPAFieldConvectionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldConvection::~JPAFieldConvection() {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__dt__18JPAFieldConvectionFv.s"
}
#pragma pop

/* 8027D564-8027D5C0 277EA4 005C+00 1/0 0/0 0/0 .text            __dt__14JPAFieldVortexFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldVortex::~JPAFieldVortex() {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__dt__14JPAFieldVortexFv.s"
}
#pragma pop

/* 8027D5C0-8027D61C 277F00 005C+00 1/0 0/0 0/0 .text            __dt__14JPAFieldNewtonFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldNewton::~JPAFieldNewton() {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__dt__14JPAFieldNewtonFv.s"
}
#pragma pop

/* 8027D61C-8027D678 277F5C 005C+00 1/0 0/0 0/0 .text            __dt__14JPAFieldMagnetFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldMagnet::~JPAFieldMagnet() {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__dt__14JPAFieldMagnetFv.s"
}
#pragma pop

/* 8027D678-8027D6D4 277FB8 005C+00 1/0 0/0 0/0 .text            __dt__11JPAFieldAirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldAir::~JPAFieldAir() {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__dt__11JPAFieldAirFv.s"
}
#pragma pop

/* 8027D6D4-8027D730 278014 005C+00 1/0 0/0 0/0 .text            __dt__15JPAFieldGravityFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAFieldGravity::~JPAFieldGravity() {
    nofralloc
#include "asm/JSystem/JParticle/JPAFieldBlock/__dt__15JPAFieldGravityFv.s"
}
#pragma pop
