//
// Generated By: dol2asm
// Translation Unit: d_a_tag_Lv8Gate
//

#include "rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);

    static u8 now[48];
};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagLv8Gate_c {
    /* 80D51C58 */ void createHeap();
    /* 80D51F48 */ void execute();
};

struct dSv_event_flag_c {
    static u8 saveBitLabels[1644 + 4 /* padding */];
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
    /* 80042914 */ void setSkipProc(void*, int (*)(void*, int), int);
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

struct dAttention_c {
    /* 80070880 */ void getActionBtnB();
    /* 80073734 */ void ActionTarget(s32);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80D51D80 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void createHeap__14daTagLv8Gate_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daTagLv8Gate_Create__FP10fopAc_ac_c();
extern "C" static void daTagLv8Gate_Execute__FP14daTagLv8Gate_c();
extern "C" void execute__14daTagLv8Gate_cFv();
extern "C" static void daTagLv8Gate_Draw__FP14daTagLv8Gate_c();
extern "C" static bool daTagLv8Gate_IsDelete__FP14daTagLv8Gate_c();
extern "C" static void daTagLv8Gate_Delete__FP14daTagLv8Gate_c();
extern "C" extern char const* const d_a_tag_Lv8Gate__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void fopAcM_cancelCarryNow__FP10fopAc_ac_c();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void setObjectArchive__16dEvent_manager_cFPc();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyNowCutName__16dEvent_manager_cFi();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void getActionBtnB__12dAttention_cFv();
extern "C" void ActionTarget__12dAttention_cFl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_24();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80D51C38-80D51C58 000078 0020+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void createSolidHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D524CC-80D524D0 000000 0004+00 3/3 0/0 0/0 .rodata          @3749 */
SECTION_RODATA static f32 const lit_3749 = 1.0f;
COMPILER_STRIP_GATE(80D524CC, &lit_3749);

/* 80D52510-80D52514 -00001 0004+00 4/4 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_tag_Lv8Gate__stringBase0;

/* 80D52514-80D52534 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagLv8Gate_Method */
SECTION_DATA static void* l_daTagLv8Gate_Method[8] = {
    (void*)daTagLv8Gate_Create__FP10fopAc_ac_c,
    (void*)daTagLv8Gate_Delete__FP14daTagLv8Gate_c,
    (void*)daTagLv8Gate_Execute__FP14daTagLv8Gate_c,
    (void*)daTagLv8Gate_IsDelete__FP14daTagLv8Gate_c,
    (void*)daTagLv8Gate_Draw__FP14daTagLv8Gate_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D52534-80D52564 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_Lv8Gate */
SECTION_DATA extern void* g_profile_Tag_Lv8Gate[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02CB0000, (void*)&g_fpcLf_Method,
    (void*)0x0000057C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01080000, (void*)&l_daTagLv8Gate_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D52564-80D52570 000054 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D51C58-80D51D80 000098 0128+00 1/1 0/0 0/0 .text            createHeap__14daTagLv8Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagLv8Gate_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/createHeap__14daTagLv8Gate_cFv.s"
}
#pragma pop

/* 80D51D80-80D51DC8 0001C0 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D524D0-80D524D4 000004 0004+00 0/1 0/0 0/0 .rodata          @3805 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3805 = -100.0f;
COMPILER_STRIP_GATE(80D524D0, &lit_3805);
#pragma pop

/* 80D524D4-80D524D8 000008 0004+00 0/1 0/0 0/0 .rodata          @3806 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3806 = -50.0f;
COMPILER_STRIP_GATE(80D524D4, &lit_3806);
#pragma pop

/* 80D524D8-80D524DC 00000C 0004+00 0/1 0/0 0/0 .rodata          @3807 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3807 = 100.0f;
COMPILER_STRIP_GATE(80D524D8, &lit_3807);
#pragma pop

/* 80D524DC-80D524E0 000010 0004+00 0/1 0/0 0/0 .rodata          @3808 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3808 = 220.0f;
COMPILER_STRIP_GATE(80D524DC, &lit_3808);
#pragma pop

/* 80D51DC8-80D51F28 000208 0160+00 1/0 0/0 0/0 .text            daTagLv8Gate_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagLv8Gate_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/daTagLv8Gate_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D51F28-80D51F48 000368 0020+00 1/0 0/0 0/0 .text daTagLv8Gate_Execute__FP14daTagLv8Gate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagLv8Gate_Execute(daTagLv8Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/daTagLv8Gate_Execute__FP14daTagLv8Gate_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D524E0-80D524E4 000014 0004+00 0/1 0/0 0/0 .rodata          @3891 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3891[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80D524E0, &lit_3891);
#pragma pop

/* 80D524E4-80D524E8 000018 0004+00 0/1 0/0 0/0 .rodata          @3892 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3892 = 400.0f;
COMPILER_STRIP_GATE(80D524E4, &lit_3892);
#pragma pop

/* 80D524E8-80D524EC 00001C 0004+00 0/1 0/0 0/0 .rodata          @3893 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3893 = 1400.0f;
COMPILER_STRIP_GATE(80D524E8, &lit_3893);
#pragma pop

/* 80D524EC-80D524F0 000020 0004+00 0/1 0/0 0/0 .rodata          @3894 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3894 = -1.0f;
COMPILER_STRIP_GATE(80D524EC, &lit_3894);
#pragma pop

/* 80D51F48-80D522F0 000388 03A8+00 1/1 0/0 0/0 .text            execute__14daTagLv8Gate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagLv8Gate_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/execute__14daTagLv8Gate_cFv.s"
}
#pragma pop

/* 80D522F0-80D5246C 000730 017C+00 1/0 0/0 0/0 .text daTagLv8Gate_Draw__FP14daTagLv8Gate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagLv8Gate_Draw(daTagLv8Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/daTagLv8Gate_Draw__FP14daTagLv8Gate_c.s"
}
#pragma pop

/* 80D5246C-80D52474 0008AC 0008+00 1/0 0/0 0/0 .text daTagLv8Gate_IsDelete__FP14daTagLv8Gate_c */
static bool daTagLv8Gate_IsDelete(daTagLv8Gate_c* param_0) {
    return true;
}

/* 80D52474-80D524C4 0008B4 0050+00 1/0 0/0 0/0 .text daTagLv8Gate_Delete__FP14daTagLv8Gate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagLv8Gate_Delete(daTagLv8Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/daTagLv8Gate_Delete__FP14daTagLv8Gate_c.s"
}
#pragma pop

/* 80D524F0-80D5250E 000024 001E+00 3/2 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80D524F0 = "Lv8Gate";
SECTION_DEAD static char const* const stringBase_80D524F8 = "D_MN08";
SECTION_DEAD static char const* const stringBase_80D524FF = "LV8_GATE_ENTRY";
#pragma pop
