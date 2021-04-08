//
// Generated By: dol2asm
// Translation Unit: J3DSkinDeform
//

#include "JSystem/J3DGraphAnimator/J3DSkinDeform.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Vec {};

struct J3DModel {};

struct J3DVtxColorCalc {
    /* 8032E180 */ void calc(J3DModel*);
};

struct J3DVertexBuffer {};

struct J3DSkinNList {
    /* 8032C6E4 */ J3DSkinNList();
    /* 8032C85C */ void calcSkin_VtxPosF32(f32 (*)[4], void*, void*);
    /* 8032C8E4 */ void calcSkin_VtxNrmF32(f32 (*)[4], void*, void*);
};

struct J3DMtxBuffer {};

struct J3DModelData {};

struct J3DSkinDeform {
    /* 8032C96C */ J3DSkinDeform();
    /* 8032C9B0 */ void initSkinInfo(J3DModelData*);
    /* 8032CF44 */ void initMtxIndexArray(J3DModelData*);
    /* 8032D378 */ void changeFastSkinDL(J3DModelData*);
    /* 8032D5C4 */ void calcNrmMtx(J3DMtxBuffer*);
    /* 8032D738 */ void transformVtxPosNrm(J3DModelData*);
    /* 8032D87C */ void calcAnmInvJointMtx(J3DMtxBuffer*);
    /* 8032D8F4 */ void deformFastVtxPos_F32(J3DVertexBuffer*, J3DMtxBuffer*) const;
    /* 8032DA1C */ void deformFastVtxNrm_F32(J3DVertexBuffer*, J3DMtxBuffer*) const;
    /* 8032DB50 */ void deformVtxPos_F32(J3DVertexBuffer*, J3DMtxBuffer*) const;
    /* 8032DC74 */ void deformVtxPos_S16(J3DVertexBuffer*, J3DMtxBuffer*) const;
    /* 8032DDB8 */ void deformVtxNrm_F32(J3DVertexBuffer*) const;
    /* 8032DEBC */ void deformVtxNrm_S16(J3DVertexBuffer*) const;
    /* 8032DFDC */ void deform(J3DModel*);
    /* 8032E064 */ void deform(J3DVertexBuffer*, J3DMtxBuffer*);
    /* 8032E1B0 */ ~J3DSkinDeform();

    static u8 sWorkArea_WEvlpMixMtx[4096];
    static u8 sWorkArea_WEvlpMixWeight[4096];
    static u8 sWorkArea_MtxReg[2048 + 8 /* padding */];
};

struct J3DShape {
    /* 80315260 */ void makeVcdVatCmd();
};

//
// Forward References:
//

extern "C" void __ct__12J3DSkinNListFv();
extern "C" static void J3DPSWeightMTXMultVec__FPA4_ffP3VecP3Vec();
extern "C" static void J3DPSWeightMTXMultVecSR__FPA4_ffP3VecP3Vec();
extern "C" void calcSkin_VtxPosF32__12J3DSkinNListFPA4_fPvPv();
extern "C" void calcSkin_VtxNrmF32__12J3DSkinNListFPA4_fPvPv();
extern "C" void __ct__13J3DSkinDeformFv();
extern "C" void initSkinInfo__13J3DSkinDeformFP12J3DModelData();
extern "C" void initMtxIndexArray__13J3DSkinDeformFP12J3DModelData();
extern "C" void changeFastSkinDL__13J3DSkinDeformFP12J3DModelData();
extern "C" void calcNrmMtx__13J3DSkinDeformFP12J3DMtxBuffer();
extern "C" void transformVtxPosNrm__13J3DSkinDeformFP12J3DModelData();
extern "C" void calcAnmInvJointMtx__13J3DSkinDeformFP12J3DMtxBuffer();
extern "C" void deformFastVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer();
extern "C" void deformFastVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer();
extern "C" void deformVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer();
extern "C" void deformVtxPos_S16__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer();
extern "C" void deformVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBuffer();
extern "C" void deformVtxNrm_S16__13J3DSkinDeformCFP15J3DVertexBuffer();
extern "C" void deform__13J3DSkinDeformFP8J3DModel();
extern "C" void deform__13J3DSkinDeformFP15J3DVertexBufferP12J3DMtxBuffer();
extern "C" void calc__15J3DVtxColorCalcFP8J3DModel();
extern "C" void __dt__13J3DSkinDeformFv();
extern "C" extern char const* const J3DSkinDeform__stringBase0;
extern "C" u8 sWorkArea_WEvlpMixMtx__13J3DSkinDeform[4096];
extern "C" u8 sWorkArea_WEvlpMixWeight__13J3DSkinDeform[4096];
extern "C" u8 sWorkArea_MtxReg__13J3DSkinDeform[2048 + 8 /* padding */];

//
// External References:
//

SECTION_INIT void memcpy();
extern "C" void OSReport();
extern "C" void* __nwa__FUl();
extern "C" void* __nwa__FUli();
extern "C" void __dl__FPv();
extern "C" void J3DGQRSetup7__FUlUlUlUl();
extern "C" void J3DPSCalcInverseTranspose__FPA4_fPA3_f();
extern "C" void makeVcdVatCmd__8J3DShapeFv();
extern "C" void DCStoreRange();
extern "C" void PSMTXConcat();
extern "C" void PSMTXInverse();
extern "C" void PSMTXMultVec();
extern "C" void PSMTXMultVecSR();
extern "C" void __construct_new_array();
extern "C" void __save_gpr();
extern "C" void _savegpr_17();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void __restore_gpr();
extern "C" void _restgpr_17();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 PSMulUnit01[8];

//
// Declarations:
//

/* 8032C6E4-8032C704 327024 0020+00 1/1 0/0 0/0 .text            __ct__12J3DSkinNListFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DSkinNList::J3DSkinNList() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/__ct__12J3DSkinNListFv.s"
}
#pragma pop

/* 8032C704-8032C7BC 327044 00B8+00 1/1 0/0 0/0 .text J3DPSWeightMTXMultVec__FPA4_ffP3VecP3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void J3DPSWeightMTXMultVec(f32 (*param_0)[4], f32 param_1, Vec* param_2, Vec* param_3) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/J3DPSWeightMTXMultVec__FPA4_ffP3VecP3Vec.s"
}
#pragma pop

/* 8032C7BC-8032C85C 3270FC 00A0+00 1/1 0/0 0/0 .text J3DPSWeightMTXMultVecSR__FPA4_ffP3VecP3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void J3DPSWeightMTXMultVecSR(f32 (*param_0)[4], f32 param_1, Vec* param_2,
                                        Vec* param_3) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/J3DPSWeightMTXMultVecSR__FPA4_ffP3VecP3Vec.s"
}
#pragma pop

/* 8032C85C-8032C8E4 32719C 0088+00 1/1 0/0 0/0 .text calcSkin_VtxPosF32__12J3DSkinNListFPA4_fPvPv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinNList::calcSkin_VtxPosF32(f32 (*param_0)[4], void* param_1, void* param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/calcSkin_VtxPosF32__12J3DSkinNListFPA4_fPvPv.s"
}
#pragma pop

/* 8032C8E4-8032C96C 327224 0088+00 1/1 0/0 0/0 .text calcSkin_VtxNrmF32__12J3DSkinNListFPA4_fPvPv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinNList::calcSkin_VtxNrmF32(f32 (*param_0)[4], void* param_1, void* param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/calcSkin_VtxNrmF32__12J3DSkinNListFPA4_fPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CEE70-803CEE80 02BF90 0010+00 2/2 0/0 0/0 .data            __vt__13J3DSkinDeform */
SECTION_DATA extern void* __vt__13J3DSkinDeform[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)deform__13J3DSkinDeformFP15J3DVertexBufferP12J3DMtxBuffer,
    (void*)__dt__13J3DSkinDeformFv,
};

/* 8032C96C-8032C9B0 3272AC 0044+00 0/0 0/0 2/2 .text            __ct__13J3DSkinDeformFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DSkinDeform::J3DSkinDeform() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/__ct__13J3DSkinDeformFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80437218-80438218 063F38 1000+00 1/1 0/0 0/0 .bss sWorkArea_WEvlpMixMtx__13J3DSkinDeform */
u8 J3DSkinDeform::sWorkArea_WEvlpMixMtx[4096];

/* 80438218-80439218 064F38 1000+00 1/1 0/0 0/0 .bss sWorkArea_WEvlpMixWeight__13J3DSkinDeform */
u8 J3DSkinDeform::sWorkArea_WEvlpMixWeight[4096];

/* 80456468-8045646C 004A68 0004+00 1/1 0/0 0/0 .sdata2          @1110 */
SECTION_SDATA2 static f32 lit_1110 = 1.0f;

/* 8032C9B0-8032CF44 3272F0 0594+00 0/0 1/1 0/0 .text
 * initSkinInfo__13J3DSkinDeformFP12J3DModelData                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::initSkinInfo(J3DModelData* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/initSkinInfo__13J3DSkinDeformFP12J3DModelData.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2008-803A2018 02E668 0010+00 1/1 0/0 0/0 .rodata          @1142 */
SECTION_RODATA static u8 const lit_1142[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02,
};
COMPILER_STRIP_GATE(803A2008, &lit_1142);

/* 80439218-80439A20 065F38 0800+08 1/1 0/0 0/0 .bss             sWorkArea_MtxReg__13J3DSkinDeform
 */
u8 J3DSkinDeform::sWorkArea_MtxReg[2048 + 8 /* padding */];

/* 8032CF44-8032D378 327884 0434+00 0/0 1/1 0/0 .text
 * initMtxIndexArray__13J3DSkinDeformFP12J3DModelData           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::initMtxIndexArray(J3DModelData* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/initMtxIndexArray__13J3DSkinDeformFP12J3DModelData.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2018-803A2028 02E678 0010+00 1/1 0/0 0/0 .rodata          @1270 */
SECTION_RODATA static u8 const lit_1270[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02,
};
COMPILER_STRIP_GATE(803A2018, &lit_1270);

/* 8032D378-8032D5C4 327CB8 024C+00 0/0 1/1 0/0 .text
 * changeFastSkinDL__13J3DSkinDeformFP12J3DModelData            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::changeFastSkinDL(J3DModelData* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/changeFastSkinDL__13J3DSkinDeformFP12J3DModelData.s"
}
#pragma pop

/* 8032D5C4-8032D738 327F04 0174+00 1/1 0/0 0/0 .text calcNrmMtx__13J3DSkinDeformFP12J3DMtxBuffer
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::calcNrmMtx(J3DMtxBuffer* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/calcNrmMtx__13J3DSkinDeformFP12J3DMtxBuffer.s"
}
#pragma pop

/* 8032D738-8032D87C 328078 0144+00 0/0 1/1 0/0 .text
 * transformVtxPosNrm__13J3DSkinDeformFP12J3DModelData          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::transformVtxPosNrm(J3DModelData* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/transformVtxPosNrm__13J3DSkinDeformFP12J3DModelData.s"
}
#pragma pop

/* 8032D87C-8032D8F4 3281BC 0078+00 1/1 0/0 0/0 .text
 * calcAnmInvJointMtx__13J3DSkinDeformFP12J3DMtxBuffer          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::calcAnmInvJointMtx(J3DMtxBuffer* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/calcAnmInvJointMtx__13J3DSkinDeformFP12J3DMtxBuffer.s"
}
#pragma pop

/* 8032D8F4-8032DA1C 328234 0128+00 1/1 0/0 0/0 .text
 * deformFastVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deformFastVtxPos_F32(J3DVertexBuffer* param_0,
                                             J3DMtxBuffer* param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deformFastVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045646C-80456470 004A6C 0004+00 1/1 0/0 0/0 .sdata2          @1578 */
SECTION_SDATA2 static u8 lit_1578[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8032DA1C-8032DB50 32835C 0134+00 1/1 0/0 0/0 .text
 * deformFastVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deformFastVtxNrm_F32(J3DVertexBuffer* param_0,
                                             J3DMtxBuffer* param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deformFastVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer.s"
}
#pragma pop

/* 8032DB50-8032DC74 328490 0124+00 1/1 0/0 0/0 .text
 * deformVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deformVtxPos_F32(J3DVertexBuffer* param_0, J3DMtxBuffer* param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deformVtxPos_F32__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer.s"
}
#pragma pop

/* 8032DC74-8032DDB8 3285B4 0144+00 1/1 0/0 0/0 .text
 * deformVtxPos_S16__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deformVtxPos_S16(J3DVertexBuffer* param_0, J3DMtxBuffer* param_1) const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deformVtxPos_S16__13J3DSkinDeformCFP15J3DVertexBufferP12J3DMtxBuffer.s"
}
#pragma pop

/* 8032DDB8-8032DEBC 3286F8 0104+00 1/1 0/0 0/0 .text
 * deformVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBuffer        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deformVtxNrm_F32(J3DVertexBuffer* param_0) const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deformVtxNrm_F32__13J3DSkinDeformCFP15J3DVertexBuffer.s"
}
#pragma pop

/* 8032DEBC-8032DFDC 3287FC 0120+00 1/1 0/0 0/0 .text
 * deformVtxNrm_S16__13J3DSkinDeformCFP15J3DVertexBuffer        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deformVtxNrm_S16(J3DVertexBuffer* param_0) const {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deformVtxNrm_S16__13J3DSkinDeformCFP15J3DVertexBuffer.s"
}
#pragma pop

/* 8032DFDC-8032E064 32891C 0088+00 0/0 1/1 0/0 .text            deform__13J3DSkinDeformFP8J3DModel
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deform(J3DModel* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deform__13J3DSkinDeformFP8J3DModel.s"
}
#pragma pop

/* 8032E064-8032E180 3289A4 011C+00 1/0 0/0 0/0 .text
 * deform__13J3DSkinDeformFP15J3DVertexBufferP12J3DMtxBuffer    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DSkinDeform::deform(J3DVertexBuffer* param_0, J3DMtxBuffer* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/deform__13J3DSkinDeformFP15J3DVertexBufferP12J3DMtxBuffer.s"
}
#pragma pop

/* 8032E180-8032E1B0 328AC0 0030+00 0/0 1/1 0/0 .text            calc__15J3DVtxColorCalcFP8J3DModel
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DVtxColorCalc::calc(J3DModel* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/calc__15J3DVtxColorCalcFP8J3DModel.s"
}
#pragma pop

/* 8032E1B0-8032E1F8 328AF0 0048+00 1/0 0/0 0/0 .text            __dt__13J3DSkinDeformFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DSkinDeform::~J3DSkinDeform() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DSkinDeform/__dt__13J3DSkinDeformFv.s"
}
#pragma pop

/* 803A2028-803A2068 02E688 003A+06 1/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_803A2028 =
    " Invlid Data : CPU Pipeline process GX_INDEX16 D"
    "ata Only\n";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803A2062 = "\0\0\0\0\0";
#pragma pop
