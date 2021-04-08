//
// Generated By: dol2asm
// Translation Unit: d_a_e_hb_leaf
//

#include "rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfCallBack1_c {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_McaMorf {
    /* 8000FC4C */ mDoExt_McaMorf(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                  mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int, int,
                                  int, void*, u32, u32);
    /* 80010680 */ void entryDL();
    /* 800106AC */ void modelCalc();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_hb_leaf_class {};

struct dKy_tevstr_c {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

//
// Forward References:
//

extern "C" static void daE_HB_LEAF_Draw__FP15e_hb_leaf_class();
extern "C" static void daE_HB_LEAF_Execute__FP15e_hb_leaf_class();
extern "C" static bool daE_HB_LEAF_IsDelete__FP15e_hb_leaf_class();
extern "C" static void daE_HB_LEAF_Delete__FP15e_hb_leaf_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_HB_LEAF_Create__FP10fopAc_ac_c();
extern "C" extern char const* const d_a_e_hb_leaf__stringBase0;
extern "C" extern void* g_profile_E_HB_LEAF[12];

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void* __nw__FUl();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

//
// Declarations:
//

/* 806DFF58-806DFFC0 000078 0068+00 1/0 0/0 0/0 .text daE_HB_LEAF_Draw__FP15e_hb_leaf_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_HB_LEAF_Draw(e_hb_leaf_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf/daE_HB_LEAF_Draw__FP15e_hb_leaf_class.s"
}
#pragma pop

/* 806DFFC0-806E00A0 0000E0 00E0+00 2/1 0/0 0/0 .text daE_HB_LEAF_Execute__FP15e_hb_leaf_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_HB_LEAF_Execute(e_hb_leaf_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf/daE_HB_LEAF_Execute__FP15e_hb_leaf_class.s"
}
#pragma pop

/* 806E00A0-806E00A8 0001C0 0008+00 1/0 0/0 0/0 .text daE_HB_LEAF_IsDelete__FP15e_hb_leaf_class */
static bool daE_HB_LEAF_IsDelete(e_hb_leaf_class* param_0) {
    return true;
}

/* 806E00A8-806E00D8 0001C8 0030+00 1/0 0/0 0/0 .text daE_HB_LEAF_Delete__FP15e_hb_leaf_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_HB_LEAF_Delete(e_hb_leaf_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf/daE_HB_LEAF_Delete__FP15e_hb_leaf_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 806E0290-806E0294 000000 0004+00 1/1 0/0 0/0 .rodata          @3690 */
SECTION_RODATA static f32 const lit_3690 = 1.0f;
COMPILER_STRIP_GATE(806E0290, &lit_3690);

/* 806E00D8-806E01D8 0001F8 0100+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 806E01D8-806E0288 0002F8 00B0+00 1/0 0/0 0/0 .text            daE_HB_LEAF_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_HB_LEAF_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf/daE_HB_LEAF_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 806E029C-806E02BC -00001 0020+00 1/0 0/0 0/0 .data            l_daE_HB_LEAF_Method */
SECTION_DATA static void* l_daE_HB_LEAF_Method[8] = {
    (void*)daE_HB_LEAF_Create__FP10fopAc_ac_c,
    (void*)daE_HB_LEAF_Delete__FP15e_hb_leaf_class,
    (void*)daE_HB_LEAF_Execute__FP15e_hb_leaf_class,
    (void*)daE_HB_LEAF_IsDelete__FP15e_hb_leaf_class,
    (void*)daE_HB_LEAF_Draw__FP15e_hb_leaf_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 806E02BC-806E02EC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_HB_LEAF */
SECTION_DATA extern void* g_profile_E_HB_LEAF[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01CA0000, (void*)&g_fpcLf_Method,
    (void*)0x000005C0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x008D0000, (void*)&l_daE_HB_LEAF_Method,
    (void*)0x00040000, (void*)NULL,
};

/* 806E0294-806E0299 000004 0005+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_806E0294 = "E_HB";
#pragma pop
