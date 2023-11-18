//
// Generated By: dol2asm
// Translation Unit: d_a_tag_Lv6Gate
//

// #include "rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate.h"
#include "dolphin/types.h"
#include "dol2asm.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CCC8 */ void push();
    /* 8000CD14 */ void pop();
    /* 8000CD64 */ void transS(cXyz const&);

    static u8 now[48];
};

struct J3DAnmTextureSRTKey {};

struct J3DMaterialTable {
    /* 8032F7B4 */ void removeTexMtxAnimator(J3DAnmTextureSRTKey*);
};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagLv6Gate_c {
    /* 80D4F8B8 */ void createHeap();
    /* 80D4FBD8 */ void create();
    /* 80D4FEDC */ void execute();
    /* 80D506AC */ void draw();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
    /* 80042958 */ void setSkipZev(void*, char*);
};

struct dEvent_manager_c {
    /* 80046800 */ void setObjectArchive(char*);
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047F5C */ void getMyNowCutName(int);
    /* 8004817C */ void cutEnd(int);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
    /* 80D4FE5C */ ~dBgW();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 8007933C */ ~cBgW();
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80D4FB70 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void createHeap__14daTagLv6Gate_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daTagLv6Gate_Create__FP10fopAc_ac_c();
extern "C" void create__14daTagLv6Gate_cFv();
extern "C" void __dt__4dBgWFv();
extern "C" static void daTagLv6Gate_Execute__FP14daTagLv6Gate_c();
extern "C" void execute__14daTagLv6Gate_cFv();
extern "C" static void daTagLv6Gate_Draw__FP14daTagLv6Gate_c();
extern "C" void draw__14daTagLv6Gate_cFv();
extern "C" static bool daTagLv6Gate_IsDelete__FP14daTagLv6Gate_c();
extern "C" static void daTagLv6Gate_Delete__FP14daTagLv6Gate_c();
extern "C" extern char const* const d_a_tag_Lv6Gate__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_SearchByName__FsPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FUi();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setSkipZev__14dEvt_control_cFPvPc();
extern "C" void setObjectArchive__16dEvent_manager_cFPc();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyNowCutName__16dEvent_manager_cFi();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void __dt__4cBgWFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__5csXyzFsss();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void removeTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
extern "C" void PSMTXCopy();
extern "C" void PSMTXInverse();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_24();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__4dBgW[65];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80D4F898-80D4F8B8 000078 0020+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void createSolidHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D50908-80D50914 000000 000C+00 2/2 0/0 0/0 .rodata          l_minRelative */
SECTION_RODATA static u8 const l_minRelative[12] = {
    0xC4, 0x2F, 0x00, 0x00, 0xC3, 0x96, 0x00, 0x00, 0xC4, 0xFA, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D50908, &l_minRelative);

/* 80D50914-80D50920 00000C 000C+00 0/1 0/0 0/0 .rodata          l_maxRelative */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_maxRelative[12] = {
    0x44, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x7A, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D50914, &l_maxRelative);
#pragma pop

/* 80D50920-80D50928 000018 0004+04 1/2 0/0 0/0 .rodata          @3757 */
SECTION_RODATA static f32 const lit_3757[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80D50920, &lit_3757);

/* 80D50928-80D50930 000020 0008+00 1/2 0/0 0/0 .rodata          @3759 */
SECTION_RODATA static u8 const lit_3759[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D50928, &lit_3759);

/* 80D50998-80D50998 000090 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D50998 = "Lv6Gate";
#pragma pop

/* 80D509C8-80D509CC -00001 0004+00 4/4 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_tag_Lv6Gate__stringBase0;

/* 80D509CC-80D509EC -00001 0020+00 1/0 0/0 0/0 .data            l_daTagLv6Gate_Method */
SECTION_DATA static void* l_daTagLv6Gate_Method[8] = {
    (void*)daTagLv6Gate_Create__FP10fopAc_ac_c,
    (void*)daTagLv6Gate_Delete__FP14daTagLv6Gate_c,
    (void*)daTagLv6Gate_Execute__FP14daTagLv6Gate_c,
    (void*)daTagLv6Gate_IsDelete__FP14daTagLv6Gate_c,
    (void*)daTagLv6Gate_Draw__FP14daTagLv6Gate_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D509EC-80D50A1C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_Lv6Gate */
SECTION_DATA extern void* g_profile_Tag_Lv6Gate[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02C90000, (void*)&g_fpcLf_Method,
    (void*)0x0000076C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01060000, (void*)&l_daTagLv6Gate_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D50A1C-80D50A28 000054 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D4F8B8-80D4FB70 000098 02B8+00 1/1 0/0 0/0 .text            createHeap__14daTagLv6Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagLv6Gate_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/createHeap__14daTagLv6Gate_cFv.s"
}
#pragma pop

/* 80D4FB70-80D4FBB8 000350 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80D4FBB8-80D4FBD8 000398 0020+00 1/0 0/0 0/0 .text            daTagLv6Gate_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagLv6Gate_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/daTagLv6Gate_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D50930-80D5093C 000028 000C+00 0/1 0/0 0/0 .rodata          @3803 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3803[12] = {
    0x00, 0x00, 0x00, 0x00, 0x44, 0xE1, 0x00, 0x00, 0xC5, 0xD4, 0x80, 0x00,
};
COMPILER_STRIP_GATE(0x80D50930, &lit_3803);
#pragma pop

/* 80D5093C-80D50948 000034 000C+00 0/1 0/0 0/0 .rodata          @3839 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3839[12] = {
    0x00, 0x00, 0x00, 0x00, 0x45, 0x34, 0x70, 0x00, 0xC6, 0x02, 0x28, 0x00,
};
COMPILER_STRIP_GATE(0x80D5093C, &lit_3839);
#pragma pop

/* 80D50948-80D50954 000040 000C+00 0/1 0/0 0/0 .rodata          @3847 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3847[12] = {
    0x00, 0x00, 0x00, 0x00, 0x45, 0x34, 0x70, 0x00, 0xC6, 0x02, 0x28, 0x00,
};
COMPILER_STRIP_GATE(0x80D50948, &lit_3847);
#pragma pop

/* 80D50954-80D50958 00004C 0004+00 0/1 0/0 0/0 .rodata          @3942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3942 = -50.0f;
COMPILER_STRIP_GATE(0x80D50954, &lit_3942);
#pragma pop

/* 80D50958-80D5095C 000050 0004+00 0/2 0/0 0/0 .rodata          @3943 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3943[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D50958, &lit_3943);
#pragma pop

/* 80D5095C-80D50960 000054 0004+00 0/1 0/0 0/0 .rodata          @3944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3944 = 50.0f;
COMPILER_STRIP_GATE(0x80D5095C, &lit_3944);
#pragma pop

/* 80D50960-80D50964 000058 0004+00 0/1 0/0 0/0 .rodata          @3945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3945 = 100.0f;
COMPILER_STRIP_GATE(0x80D50960, &lit_3945);
#pragma pop

/* 80D50964-80D50968 00005C 0004+00 0/2 0/0 0/0 .rodata          @3946 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3946 = 255.0f;
COMPILER_STRIP_GATE(0x80D50964, &lit_3946);
#pragma pop

/* 80D50968-80D5096C 000060 0004+00 0/2 0/0 0/0 .rodata          @3947 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3947 = 115.0f;
COMPILER_STRIP_GATE(0x80D50968, &lit_3947);
#pragma pop

/* 80D5096C-80D50970 000064 0004+00 0/1 0/0 0/0 .rodata          @3948 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3948 = 2887.0f;
COMPILER_STRIP_GATE(0x80D5096C, &lit_3948);
#pragma pop

/* 80D50970-80D50974 000068 0004+00 0/1 0/0 0/0 .rodata          @3949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3949 = -8330.0f;
COMPILER_STRIP_GATE(0x80D50970, &lit_3949);
#pragma pop

/* 80D50974-80D50978 00006C 0004+00 0/1 0/0 0/0 .rodata          @3950 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3950 = 0xC1545C15;
COMPILER_STRIP_GATE(0x80D50974, &lit_3950);
#pragma pop

/* 80D50978-80D5097C 000070 0004+00 0/1 0/0 0/0 .rodata          @3951 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3951 = 0xC62216DF;
COMPILER_STRIP_GATE(0x80D50978, &lit_3951);
#pragma pop

/* 80D4FBD8-80D4FE5C 0003B8 0284+00 1/1 0/0 0/0 .text            create__14daTagLv6Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagLv6Gate_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/create__14daTagLv6Gate_cFv.s"
}
#pragma pop

/* 80D4FE5C-80D4FEBC 00063C 0060+00 2/2 0/0 0/0 .text            __dt__4dBgWFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgW::~dBgW() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/__dt__4dBgWFv.s"
}
#pragma pop

/* 80D4FEBC-80D4FEDC 00069C 0020+00 1/0 0/0 0/0 .text daTagLv6Gate_Execute__FP14daTagLv6Gate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagLv6Gate_Execute(daTagLv6Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/daTagLv6Gate_Execute__FP14daTagLv6Gate_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5097C-80D50980 000074 0004+00 0/1 0/0 0/0 .rodata          @4155 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4155 = 78.0f;
COMPILER_STRIP_GATE(0x80D5097C, &lit_4155);
#pragma pop

/* 80D50980-80D50984 000078 0004+00 0/1 0/0 0/0 .rodata          @4156 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4156 = -1.0f;
COMPILER_STRIP_GATE(0x80D50980, &lit_4156);
#pragma pop

/* 80D50984-80D50988 00007C 0004+00 0/1 0/0 0/0 .rodata          @4157 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4157 = 0x42EBB1D1;
COMPILER_STRIP_GATE(0x80D50984, &lit_4157);
#pragma pop

/* 80D50988-80D5098C 000080 0004+00 0/1 0/0 0/0 .rodata          @4158 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4158 = 1677.0f;
COMPILER_STRIP_GATE(0x80D50988, &lit_4158);
#pragma pop

/* 80D5098C-80D50990 000084 0004+00 0/1 0/0 0/0 .rodata          @4159 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4159 = 0xC59FB6B7;
COMPILER_STRIP_GATE(0x80D5098C, &lit_4159);
#pragma pop

/* 80D50990-80D50994 000088 0004+00 0/1 0/0 0/0 .rodata          @4160 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4160 = 12.75f;
COMPILER_STRIP_GATE(0x80D50990, &lit_4160);
#pragma pop

/* 80D50994-80D50998 00008C 0004+00 0/1 0/0 0/0 .rodata          @4161 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4161 = 5.75f;
COMPILER_STRIP_GATE(0x80D50994, &lit_4161);
#pragma pop

/* 80D50998-80D50998 000090 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D509A0 = "LV6_GATE_APPEAR_SKIP";
SECTION_DEAD static char const* const stringBase_80D509B5 = "LV6_GATE_APPEAR";
#pragma pop

/* 80D4FEDC-80D5068C 0006BC 07B0+00 1/1 0/0 0/0 .text            execute__14daTagLv6Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagLv6Gate_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/execute__14daTagLv6Gate_cFv.s"
}
#pragma pop

/* 80D5068C-80D506AC 000E6C 0020+00 1/0 0/0 0/0 .text daTagLv6Gate_Draw__FP14daTagLv6Gate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagLv6Gate_Draw(daTagLv6Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/daTagLv6Gate_Draw__FP14daTagLv6Gate_c.s"
}
#pragma pop

/* 80D506AC-80D50848 000E8C 019C+00 1/1 0/0 0/0 .text            draw__14daTagLv6Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagLv6Gate_c::draw() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/draw__14daTagLv6Gate_cFv.s"
}
#pragma pop

/* 80D50848-80D50850 001028 0008+00 1/0 0/0 0/0 .text daTagLv6Gate_IsDelete__FP14daTagLv6Gate_c */
static bool daTagLv6Gate_IsDelete(daTagLv6Gate_c* param_0) {
    return true;
}

/* 80D50850-80D50900 001030 00B0+00 1/0 0/0 0/0 .text daTagLv6Gate_Delete__FP14daTagLv6Gate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagLv6Gate_Delete(daTagLv6Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv6Gate/d_a_tag_Lv6Gate/daTagLv6Gate_Delete__FP14daTagLv6Gate_c.s"
}
#pragma pop

/* 80D50998-80D50998 000090 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
