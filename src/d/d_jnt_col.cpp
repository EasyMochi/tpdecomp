//
// Generated By: dol2asm
// Translation Unit: d/d_jnt_col
//

#include "d/d_jnt_col.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct csXyz {};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266B84 */ void operator*(f32) const;
    /* 80266C18 */ void operator/(f32) const;
    /* 80266F48 */ void normalizeZP();
    /* 80267128 */ void atan2sX_Z() const;
    /* 80267150 */ void atan2sY_XZ() const;

    static u8 BaseZ[12];
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CF0C */ void ZXYrotS(csXyz const&);

    static u8 now[48];
};

struct fopAc_ac_c {};

struct dJntColData_c {};

struct cM3dGLin {
    /* 80036A5C */ ~cM3dGLin();
    /* 8026F2E8 */ void SetStartEnd(cXyz const&, cXyz const&);
};

struct J3DModel {};

struct dJntCol_c {
    /* 80035C8C */ dJntCol_c();
    /* 80035CA0 */ void init(fopAc_ac_c*, dJntColData_c const*, J3DModel*, int);
    /* 80035CC8 */ void setNowLine(cM3dGLin*, cXyz const*, csXyz const*, cXyz*);
    /* 80035DC8 */ void searchNearPos(cM3dGLin const*, cXyz const*, cXyz*, int) const;
    /* 80036AEC */ void getArrowOffsetPosAndAngle(cXyz const*, csXyz const*, cXyz*, cXyz*) const;
    /* 80036C44 */ void getHitmarkPosAndAngle(cXyz const*, csXyz const*, cXyz*, csXyz*, int) const;
    /* 80036FA8 */ void setArrowPosAndAngle(cXyz const*, cXyz const*, int, cXyz*, csXyz*);
};

struct cM3dGSph {
    /* 80036AA4 */ ~cM3dGSph();
    /* 8026F664 */ void Set(cXyz const&, f32);
};

struct cM3dGPla {
    /* 8026F408 */ void crossInfLin(cXyz const&, cXyz const&, cXyz&) const;
    /* 8026F4C4 */ void SetupNP0(Vec const&, Vec const&);
};

struct cM3dGCyl {
    /* 8026F180 */ void Set(cXyz const&, f32, f32);
};

//
// Forward References:
//

extern "C" void __ct__9dJntCol_cFv();
extern "C" void init__9dJntCol_cFP10fopAc_ac_cPC13dJntColData_cP8J3DModeli();
extern "C" void setNowLine__9dJntCol_cFP8cM3dGLinPC4cXyzPC5csXyzP4cXyz();
extern "C" void searchNearPos__9dJntCol_cCFPC8cM3dGLinPC4cXyzP4cXyzi();
extern "C" void __dt__8cM3dGLinFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void getArrowOffsetPosAndAngle__9dJntCol_cCFPC4cXyzPC5csXyzP4cXyzP4cXyz();
extern "C" void getHitmarkPosAndAngle__9dJntCol_cCFPC4cXyzPC5csXyzP4cXyzP5csXyzi();
extern "C" void setArrowPosAndAngle__9dJntCol_cFPC4cXyzPC4cXyziP4cXyzP5csXyz();

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __dv__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void atan2sY_XZ__4cXyzCFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM3d_SignedLenPlaAndPos__FPC8cM3dGPlaPC3Vec();
extern "C" void cM3d_Cross_LinPla__FPC8cM3dGLinPC8cM3dGPlaP3Vecbb();
extern "C" void cM3d_Cross_LinSph_CrossPos__FRC8cM3dGSphRC8cM3dGLinP3VecP3Vec();
extern "C" void cM3d_Cross_CylLin__FPC8cM3dGCylPC8cM3dGLinP3VecP3Vec();
extern "C" void cM3d_lineVsPosSuisenCross__FPC8cM3dGLinPC3VecP3Vec();
extern "C" void cM3d_lineVsPosSuisenCross__FRC3VecRC3VecRC3VecP3Vec();
extern "C" void Set__8cM3dGCylFRC4cXyzff();
extern "C" void SetStartEnd__8cM3dGLinFRC4cXyzRC4cXyz();
extern "C" void crossInfLin__8cM3dGPlaCFRC4cXyzRC4cXyzR4cXyz();
extern "C" void SetupNP0__8cM3dGPlaFRC3VecRC3Vec();
extern "C" void Set__8cM3dGSphFRC4cXyzf();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXInverse();
extern "C" void PSMTXMultVec();
extern "C" void PSMTXMultVecSR();
extern "C" void PSVECSquareMag();
extern "C" void PSVECDotProduct();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_19();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8cM3dGPla[3];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 BaseZ__4cXyz[12];
extern "C" extern u32 __float_nan;
extern "C" extern u32 __float_max;

//
// Declarations:
//

/* 80035C8C-80035CA0 0305CC 0014+00 0/0 1/1 8/8 .text            __ct__9dJntCol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dJntCol_c::dJntCol_c() {
    nofralloc
#include "asm/d/d_jnt_col/__ct__9dJntCol_cFv.s"
}
#pragma pop

/* 80035CA0-80035CC8 0305E0 0028+00 0/0 2/2 8/8 .text
 * init__9dJntCol_cFP10fopAc_ac_cPC13dJntColData_cP8J3DModeli   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dJntCol_c::init(fopAc_ac_c* param_0, dJntColData_c const* param_1, J3DModel* param_2,
                         int param_3) {
    nofralloc
#include "asm/d/d_jnt_col/init__9dJntCol_cFP10fopAc_ac_cPC13dJntColData_cP8J3DModeli.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451D60-80451D64 000360 0004+00 1/1 0/0 0/0 .sdata2          @3655 */
SECTION_SDATA2 static f32 lit_3655 = 500.0f;

/* 80035CC8-80035DC8 030608 0100+00 2/2 0/0 0/0 .text
 * setNowLine__9dJntCol_cFP8cM3dGLinPC4cXyzPC5csXyzP4cXyz       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dJntCol_c::setNowLine(cM3dGLin* param_0, cXyz const* param_1, csXyz const* param_2,
                               cXyz* param_3) {
    nofralloc
#include "asm/d/d_jnt_col/setNowLine__9dJntCol_cFP8cM3dGLinPC4cXyzPC5csXyzP4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A78F8-803A7904 004A18 000C+00 4/4 21/21 0/0 .data            __vt__8cM3dGLin */
SECTION_DATA extern void* __vt__8cM3dGLin[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGLinFv,
};

/* 803A7904-803A7910 004A24 000C+00 2/2 10/10 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80451D64-80451D68 000364 0004+00 1/1 0/0 0/0 .sdata2          @4141 */
SECTION_SDATA2 static f32 lit_4141 = -10000000.0f;

/* 80451D68-80451D70 000368 0004+04 2/2 0/0 0/0 .sdata2          @4142 */
SECTION_SDATA2 static f32 lit_4142[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80451D70-80451D78 000370 0008+00 2/2 0/0 0/0 .sdata2          @4143 */
SECTION_SDATA2 static f64 lit_4143 = 0.5;

/* 80451D78-80451D80 000378 0008+00 2/2 0/0 0/0 .sdata2          @4144 */
SECTION_SDATA2 static f64 lit_4144 = 3.0;

/* 80451D80-80451D88 000380 0008+00 2/2 0/0 0/0 .sdata2          @4145 */
SECTION_SDATA2 static u8 lit_4145[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80451D88-80451D8C 000388 0004+00 1/1 0/0 0/0 .sdata2          @4146 */
SECTION_SDATA2 static f32 lit_4146 = 1.0f / 100.0f;

/* 80451D8C-80451D90 00038C 0004+00 2/2 0/0 0/0 .sdata2          @4147 */
SECTION_SDATA2 static f32 lit_4147 = 9.999999747378752e-05f;

/* 80451D90-80451D94 000390 0004+00 1/1 0/0 0/0 .sdata2          @4148 */
SECTION_SDATA2 static f32 lit_4148 = 0.5f;

/* 80451D94-80451D98 000394 0004+00 1/1 0/0 0/0 .sdata2          @4149 */
SECTION_SDATA2 static f32 lit_4149 = 1.0f;

/* 80035DC8-80036A5C 030708 0C94+00 2/2 0/0 0/0 .text
 * searchNearPos__9dJntCol_cCFPC8cM3dGLinPC4cXyzP4cXyzi         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dJntCol_c::searchNearPos(cM3dGLin const* param_0, cXyz const* param_1, cXyz* param_2,
                                  int param_3) const {
    nofralloc
#include "asm/d/d_jnt_col/searchNearPos__9dJntCol_cCFPC8cM3dGLinPC4cXyzP4cXyzi.s"
}
#pragma pop

/* 80036A5C-80036AA4 03139C 0048+00 1/0 3/3 0/0 .text            __dt__8cM3dGLinFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGLin::~cM3dGLin() {
    nofralloc
#include "asm/d/d_jnt_col/__dt__8cM3dGLinFv.s"
}
#pragma pop

/* 80036AA4-80036AEC 0313E4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/d/d_jnt_col/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80036AEC-80036C44 03142C 0158+00 0/0 0/0 1/1 .text
 * getArrowOffsetPosAndAngle__9dJntCol_cCFPC4cXyzPC5csXyzP4cXyzP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dJntCol_c::getArrowOffsetPosAndAngle(cXyz const* param_0, csXyz const* param_1,
                                              cXyz* param_2, cXyz* param_3) const {
    nofralloc
#include "asm/d/d_jnt_col/getArrowOffsetPosAndAngle__9dJntCol_cCFPC4cXyzPC5csXyzP4cXyzP4cXyz.s"
}
#pragma pop

/* 80036C44-80036FA8 031584 0364+00 0/0 3/3 0/0 .text
 * getHitmarkPosAndAngle__9dJntCol_cCFPC4cXyzPC5csXyzP4cXyzP5csXyzi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dJntCol_c::getHitmarkPosAndAngle(cXyz const* param_0, csXyz const* param_1, cXyz* param_2,
                                          csXyz* param_3, int param_4) const {
    nofralloc
#include "asm/d/d_jnt_col/getHitmarkPosAndAngle__9dJntCol_cCFPC4cXyzPC5csXyzP4cXyzP5csXyzi.s"
}
#pragma pop

/* 80036FA8-80037038 0318E8 0090+00 0/0 0/0 1/1 .text
 * setArrowPosAndAngle__9dJntCol_cFPC4cXyzPC4cXyziP4cXyzP5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dJntCol_c::setArrowPosAndAngle(cXyz const* param_0, cXyz const* param_1, int param_2,
                                        cXyz* param_3, csXyz* param_4) {
    nofralloc
#include "asm/d/d_jnt_col/setArrowPosAndAngle__9dJntCol_cFPC4cXyzPC4cXyziP4cXyzP5csXyz.s"
}
#pragma pop
