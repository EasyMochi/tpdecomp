//
// Generated By: dol2asm
// Translation Unit: d_a_npc_fguard
//

#include "rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct mDoExt_morf_c {
    /* 8000FB7C */ void setMorf(f32);
};

struct mDoExt_McaMorfSO {
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct Vec {};

struct daNpcFgd_c {
    /* 809BA53C */ void initPosAngle(Vec&, s16);
    /* 809BA584 */ void create();
    /* 809BA730 */ void create_init();
    /* 809BAA80 */ ~daNpcFgd_c();
};

struct J3DAnmTransformKey {};

struct J3DModel {};

struct daNpcCd2_c {
    /* 80157D00 */ void NpcCreate(int);
    /* 80157F28 */ void ObjCreate(int);
    /* 801580F0 */ void getAnmP(int, int);
    /* 80158420 */ void setAttention(int);
    /* 80158BB8 */ void loadResrc(int, int);
    /* 80158CBC */ void removeResrc(int, int);
    /* 80158D88 */ void setEnvTevCol();
    /* 80158DE4 */ void setRoomNo();
    /* 80158E28 */ void animation(int);
    /* 80158F00 */ void setAnm(J3DAnmTransformKey*, f32, f32, int, int, int);
    /* 80158F6C */ void drawShadow(f32);
    /* 80158FF0 */ void drawObj(int, J3DModel*, f32);
    /* 801590FC */ void drawNpc();
    /* 809BAE80 */ ~daNpcCd2_c();

    static u8 const m_cylDat[68];
};

struct dNpcLib_lookat_c {
    /* 80251314 */ dNpcLib_lookat_c();
    /* 809BB10C */ ~dNpcLib_lookat_c();
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 809BB284 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 809BB38C */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F40 */ void SetWallR(f32);
    /* 80075F58 */ void SetWall(f32, f32);
    /* 809BB31C */ ~dBgS_AcchCir();
};

struct dBgS {};

struct cXyz {
    /* 809BB2E0 */ ~cXyz();
};

struct csXyz {
    /* 809BB0D0 */ ~csXyz();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGPla {
    /* 809BAD3C */ ~cM3dGPla();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 809BB1F4 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 809BB23C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 809BAE28 */ ~cCcD_GStts();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct cBgS {
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

struct Z2CreatureCitizen {
    /* 802C0C10 */ Z2CreatureCitizen();
    /* 802C0C6C */ ~Z2CreatureCitizen();
};

//
// Forward References:
//

extern "C" static void createHeapCallBack__FP10fopAc_ac_c();
extern "C" void initPosAngle__10daNpcFgd_cFR3Vecs();
extern "C" static void daNpcFgd_Create__FPv();
extern "C" void create__10daNpcFgd_cFv();
extern "C" void create_init__10daNpcFgd_cFv();
extern "C" static void daNpcFgd_Delete__FPv();
extern "C" void __dt__10daNpcFgd_cFv();
extern "C" static void daNpcFgd_Execute__FPv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" static void daNpcFgd_Draw__FPv();
extern "C" static bool daNpcFgd_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" static void func_809BAE70();
extern "C" static void func_809BAE78();
extern "C" void __dt__10daNpcCd2_cFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __dt__16dNpcLib_lookat_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void setMorf__13mDoExt_morf_cFf();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_getPolygonAngle__FPC8cM3dGPlas();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void NpcCreate__10daNpcCd2_cFi();
extern "C" void ObjCreate__10daNpcCd2_cFi();
extern "C" void getAnmP__10daNpcCd2_cFii();
extern "C" void setAttention__10daNpcCd2_cFi();
extern "C" void loadResrc__10daNpcCd2_cFii();
extern "C" void removeResrc__10daNpcCd2_cFii();
extern "C" void setEnvTevCol__10daNpcCd2_cFv();
extern "C" void setRoomNo__10daNpcCd2_cFv();
extern "C" void animation__10daNpcCd2_cFi();
extern "C" void setAnm__10daNpcCd2_cFP18J3DAnmTransformKeyffiii();
extern "C" void drawShadow__10daNpcCd2_cFf();
extern "C" void drawObj__10daNpcCd2_cFiP8J3DModelf();
extern "C" void drawNpc__10daNpcCd2_cFv();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void __ct__16dNpcLib_lookat_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rndF__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void __ct__17Z2CreatureCitizenFv();
extern "C" void __dt__17Z2CreatureCitizenFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __destroy_arr();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" u8 const m_cylDat__10daNpcCd2_c[68];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 l_Cd2_HIO[16396];

//
// Declarations:
//

/* 809BA4B8-809BA53C 000078 0084+00 1/1 0/0 0/0 .text            createHeapCallBack__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/createHeapCallBack__FP10fopAc_ac_c.s"
}
#pragma pop

/* 809BA53C-809BA564 0000FC 0028+00 0/0 0/0 1/1 .text            initPosAngle__10daNpcFgd_cFR3Vecs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcFgd_c::initPosAngle(Vec& param_0, s16 param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/initPosAngle__10daNpcFgd_cFR3Vecs.s"
}
#pragma pop

/* 809BA564-809BA584 000124 0020+00 1/0 0/0 0/0 .text            daNpcFgd_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpcFgd_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/daNpcFgd_Create__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809BB440-809BB460 -00001 0020+00 1/0 0/0 0/0 .data            daNpcFgd_METHODS */
SECTION_DATA static void* daNpcFgd_METHODS[8] = {
    (void*)daNpcFgd_Create__FPv,
    (void*)daNpcFgd_Delete__FPv,
    (void*)daNpcFgd_Execute__FPv,
    (void*)daNpcFgd_IsDelete__FPv,
    (void*)daNpcFgd_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 809BB460-809BB490 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_FGUARD */
SECTION_DATA extern void* g_profile_NPC_FGUARD[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02940000, (void*)&g_fpcLf_Method,
    (void*)0x00000ADC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01990000, (void*)&daNpcFgd_METHODS,
    (void*)0x00040107, (void*)0x040E0000,
};

/* 809BB490-809BB49C 000050 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 809BB49C-809BB4A8 00005C 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 809BB4A8-809BB4B4 000068 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 809BB4B4-809BB4C0 000074 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 809BB4C0-809BB4CC 000080 000C+00 2/2 0/0 0/0 .data            __vt__16dNpcLib_lookat_c */
SECTION_DATA extern void* __vt__16dNpcLib_lookat_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16dNpcLib_lookat_cFv,
};

/* 809BB4CC-809BB4D8 00008C 000C+00 2/2 0/0 0/0 .data            __vt__10daNpcFgd_c */
SECTION_DATA extern void* __vt__10daNpcFgd_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10daNpcFgd_cFv,
};

/* 809BB4D8-809BB4E4 000098 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 809BB4E4-809BB4F0 0000A4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 809BB4F0-809BB514 0000B0 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809BAE78,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809BAE70,
};

/* 809BB514-809BB520 0000D4 000C+00 2/2 0/0 0/0 .data            __vt__10daNpcCd2_c */
SECTION_DATA extern void* __vt__10daNpcCd2_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10daNpcCd2_cFv,
};

/* 809BA584-809BA730 000144 01AC+00 1/1 0/0 0/0 .text            create__10daNpcFgd_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcFgd_c::create() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/create__10daNpcFgd_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809BB404-809BB408 000000 0004+00 1/1 0/0 0/0 .rodata          @3979 */
SECTION_RODATA static f32 const lit_3979 = -3.0f;
COMPILER_STRIP_GATE(809BB404, &lit_3979);

/* 809BB408-809BB40C 000004 0004+00 0/1 0/0 0/0 .rodata          @3980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3980 = -21.0f;
COMPILER_STRIP_GATE(809BB408, &lit_3980);
#pragma pop

/* 809BB40C-809BB410 000008 0004+00 0/1 0/0 0/0 .rodata          @3981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3981 = -50.0f;
COMPILER_STRIP_GATE(809BB40C, &lit_3981);
#pragma pop

/* 809BB410-809BB414 00000C 0004+00 0/1 0/0 0/0 .rodata          @3982 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3982 = -10.0f;
COMPILER_STRIP_GATE(809BB410, &lit_3982);
#pragma pop

/* 809BB414-809BB418 000010 0004+00 0/1 0/0 0/0 .rodata          @3983 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3983 = -90.0f;
COMPILER_STRIP_GATE(809BB414, &lit_3983);
#pragma pop

/* 809BB418-809BB41C 000014 0004+00 0/1 0/0 0/0 .rodata          @3984 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3984 = 50.0f;
COMPILER_STRIP_GATE(809BB418, &lit_3984);
#pragma pop

/* 809BB41C-809BB420 000018 0004+00 0/1 0/0 0/0 .rodata          @3985 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3985 = 290.0f;
COMPILER_STRIP_GATE(809BB41C, &lit_3985);
#pragma pop

/* 809BB420-809BB424 00001C 0004+00 0/1 0/0 0/0 .rodata          @3986 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3986 = 60.0f;
COMPILER_STRIP_GATE(809BB420, &lit_3986);
#pragma pop

/* 809BB424-809BB428 000020 0004+00 0/1 0/0 0/0 .rodata          @3987 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3987 = 1.0f;
COMPILER_STRIP_GATE(809BB424, &lit_3987);
#pragma pop

/* 809BB428-809BB42C 000024 0004+00 0/1 0/0 0/0 .rodata          @3988 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3988 = 12.0f;
COMPILER_STRIP_GATE(809BB428, &lit_3988);
#pragma pop

/* 809BB42C-809BB430 000028 0004+00 0/1 0/0 0/0 .rodata          @3989 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3989 = 5.0f;
COMPILER_STRIP_GATE(809BB42C, &lit_3989);
#pragma pop

/* 809BB430-809BB434 00002C 0004+00 0/1 0/0 0/0 .rodata          @3990 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3990[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(809BB430, &lit_3990);
#pragma pop

/* 809BA730-809BAA4C 0002F0 031C+00 1/1 0/0 0/0 .text            create_init__10daNpcFgd_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcFgd_c::create_init() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/create_init__10daNpcFgd_cFv.s"
}
#pragma pop

/* 809BAA4C-809BAA80 00060C 0034+00 1/0 0/0 0/0 .text            daNpcFgd_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpcFgd_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/daNpcFgd_Delete__FPv.s"
}
#pragma pop

/* 809BAA80-809BAB04 000640 0084+00 1/0 0/0 0/0 .text            __dt__10daNpcFgd_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcFgd_c::~daNpcFgd_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__10daNpcFgd_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809BB434-809BB438 000030 0004+00 1/1 0/0 0/0 .rodata          @4182 */
SECTION_RODATA static f32 const lit_4182 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(809BB434, &lit_4182);

/* 809BB438-809BB43C 000034 0004+00 1/1 0/0 0/0 .rodata          @4183 */
SECTION_RODATA static f32 const lit_4183 = 25.0f;
COMPILER_STRIP_GATE(809BB438, &lit_4183);

/* 809BAB04-809BAD3C 0006C4 0238+00 1/0 0/0 0/0 .text            daNpcFgd_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpcFgd_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/daNpcFgd_Execute__FPv.s"
}
#pragma pop

/* 809BAD3C-809BAD84 0008FC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809BB43C-809BB440 000038 0004+00 1/1 0/0 0/0 .rodata          @4201 */
SECTION_RODATA static f32 const lit_4201 = 40.0f;
COMPILER_STRIP_GATE(809BB43C, &lit_4201);

/* 809BAD84-809BAE20 000944 009C+00 1/0 0/0 0/0 .text            daNpcFgd_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpcFgd_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/daNpcFgd_Draw__FPv.s"
}
#pragma pop

/* 809BAE20-809BAE28 0009E0 0008+00 1/0 0/0 0/0 .text            daNpcFgd_IsDelete__FPv */
static bool daNpcFgd_IsDelete(void* param_0) {
    return true;
}

/* 809BAE28-809BAE70 0009E8 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 809BAE70-809BAE78 000A30 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_809BAE70() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/func_809BAE70.s"
}
#pragma pop

/* 809BAE78-809BAE80 000A38 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_809BAE78() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/func_809BAE78.s"
}
#pragma pop

/* 809BAE80-809BB0D0 000A40 0250+00 2/1 0/0 0/0 .text            __dt__10daNpcCd2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcCd2_c::~daNpcCd2_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__10daNpcCd2_cFv.s"
}
#pragma pop

/* 809BB0D0-809BB10C 000C90 003C+00 2/2 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__5csXyzFv.s"
}
#pragma pop

/* 809BB10C-809BB1F4 000CCC 00E8+00 1/0 0/0 0/0 .text            __dt__16dNpcLib_lookat_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dNpcLib_lookat_c::~dNpcLib_lookat_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__16dNpcLib_lookat_cFv.s"
}
#pragma pop

/* 809BB1F4-809BB23C 000DB4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 809BB23C-809BB284 000DFC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 809BB284-809BB2E0 000E44 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 809BB2E0-809BB31C 000EA0 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__4cXyzFv.s"
}
#pragma pop

/* 809BB31C-809BB38C 000EDC 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 809BB38C-809BB3FC 000F4C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop
