/**
 * @file d_a_obj_groundwater.cpp
 * 
*/

#include "d/actor/d_a_obj_groundwater.h"
#include "dol2asm.h"




//
// Forward References:
//

extern "C" void __ct__16daGrdWater_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daGrdWater_cFv();
extern "C" void CreateHeap__12daGrdWater_cFv();
extern "C" void create__12daGrdWater_cFv();
extern "C" void __ct__12daGrdWater_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void Execute__12daGrdWater_cFPPA3_A4_f();
extern "C" void init_modeWait__12daGrdWater_cFv();
extern "C" void modeWait__12daGrdWater_cFv();
extern "C" void init_modeLevelUpA__12daGrdWater_cFv();
extern "C" void modeLevelUpA__12daGrdWater_cFv();
extern "C" void init_modeLevelDownA__12daGrdWater_cFv();
extern "C" void modeLevelDownA__12daGrdWater_cFv();
extern "C" void init_modeLevelUpB__12daGrdWater_cFv();
extern "C" void modeLevelUpB__12daGrdWater_cFv();
extern "C" void init_modeLevelDownB__12daGrdWater_cFv();
extern "C" void modeLevelDownB__12daGrdWater_cFv();
extern "C" void Draw__12daGrdWater_cFv();
extern "C" void Delete__12daGrdWater_cFv();
extern "C" static void daGrdWater_Draw__FP12daGrdWater_c();
extern "C" static void daGrdWater_Execute__FP12daGrdWater_c();
extern "C" static void daGrdWater_Delete__FP12daGrdWater_c();
extern "C" static void daGrdWater_Create__FP10fopAc_ac_c();
extern "C" void __dt__16daGrdWater_HIO_cFv();
extern "C" void __sinit_d_a_obj_groundwater_cpp();
extern "C" extern char const* const d_a_obj_groundwater__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_bg_MAxx_proc__FPv();
extern "C" void __dl__FPv();
extern "C" void setEffectMtx__13J3DTexMtxInfoFPA4_f();
extern "C" void simpleCalcMaterial__12J3DModelDataFUsPA4_f();
extern "C" void calcAnmMtx__8J3DModelFv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C149E0-80C149E4 000000 0004+00 3/3 0/0 0/0 .rodata          @3642 */
SECTION_RODATA static u8 const lit_3642[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C149E0, &lit_3642);

/* 80C149FC-80C14A08 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C14A08-80C14A1C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80C14A1C-80C14A28 -00001 000C+00 0/1 0/0 0/0 .data            @3993 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3993[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__12daGrdWater_cFv,
};
#pragma pop

/* 80C14A28-80C14A34 -00001 000C+00 0/1 0/0 0/0 .data            @3994 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3994[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLevelUpA__12daGrdWater_cFv,
};
#pragma pop

/* 80C14A34-80C14A40 -00001 000C+00 0/1 0/0 0/0 .data            @3995 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3995[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLevelDownA__12daGrdWater_cFv,
};
#pragma pop

/* 80C14A40-80C14A4C -00001 000C+00 0/1 0/0 0/0 .data            @3996 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3996[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLevelUpB__12daGrdWater_cFv,
};
#pragma pop

/* 80C14A4C-80C14A58 -00001 000C+00 0/2 0/0 0/0 .data            @3997 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3997[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLevelDownB__12daGrdWater_cFv,
};
#pragma pop

/* 80C14A58-80C14A94 00005C 003C+00 1/2 0/0 0/0 .data            l_mode_func */
SECTION_DATA static u8 l_mode_func[60] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C14A94-80C14AB4 -00001 0020+00 1/0 0/0 0/0 .data            l_daGrdWater_Method */
static actor_method_class l_daGrdWater_Method = {
    (process_method_func)daGrdWater_Create__FP10fopAc_ac_c,
    (process_method_func)daGrdWater_Delete__FP12daGrdWater_c,
    (process_method_func)daGrdWater_Execute__FP12daGrdWater_c,
    0,
    (process_method_func)daGrdWater_Draw__FP12daGrdWater_c,
};

/* 80C14AB4-80C14AE4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_GRDWATER */
extern actor_process_profile_definition g_profile_GRDWATER = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_GRDWATER,          // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daGrdWater_c),   // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  489,                    // mPriority
  &l_daGrdWater_Method,   // sub_method
  0x00040000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C14AE4-80C14AF0 0000E8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C14AF0-80C14B18 0000F4 0028+00 1/1 0/0 0/0 .data            __vt__12daGrdWater_c */
SECTION_DATA extern void* __vt__12daGrdWater_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__12daGrdWater_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__12daGrdWater_cFPPA3_A4_f,
    (void*)Draw__12daGrdWater_cFv,
    (void*)Delete__12daGrdWater_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C14B18-80C14B24 00011C 000C+00 2/2 0/0 0/0 .data            __vt__16daGrdWater_HIO_c */
SECTION_DATA extern void* __vt__16daGrdWater_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daGrdWater_HIO_cFv,
};

/* 80C14B24-80C14B30 000128 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C134AC-80C134F8 0000EC 004C+00 1/1 0/0 0/0 .text            __ct__16daGrdWater_HIO_cFv */
daGrdWater_HIO_c::daGrdWater_HIO_c() {
    // NONMATCHING
}

/* 80C134F8-80C13540 000138 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
// mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" void __dt__14mDoHIO_entry_cFv() {
    // NONMATCHING
}

/* 80C13540-80C13618 000180 00D8+00 2/2 0/0 0/0 .text            setBaseMtx__12daGrdWater_cFv */
void daGrdWater_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C149E4-80C149E8 000004 0004+00 5/6 0/0 0/0 .rodata          @3712 */
SECTION_RODATA static f32 const lit_3712 = 1.0f;
COMPILER_STRIP_GATE(0x80C149E4, &lit_3712);

/* 80C149F4-80C149F4 000014 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C149F4 = "Water";
#pragma pop

/* 80C13618-80C139E4 000258 03CC+00 1/0 0/0 0/0 .text            CreateHeap__12daGrdWater_cFv */
void daGrdWater_c::CreateHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C149E8-80C149F0 000008 0008+00 5/5 0/0 0/0 .rodata          @3891 */
SECTION_RODATA static u8 const lit_3891[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C149E8, &lit_3891);

/* 80C139E4-80C13DB0 000624 03CC+00 1/1 0/0 0/0 .text            create__12daGrdWater_cFv */
void daGrdWater_c::create() {
    // NONMATCHING
}

/* 80C13DB0-80C13FA4 0009F0 01F4+00 1/1 0/0 0/0 .text            __ct__12daGrdWater_cFv */
daGrdWater_c::daGrdWater_c() {
    // NONMATCHING
}

/* 80C13FA4-80C13FEC 000BE4 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 80C13FEC-80C14194 000C2C 01A8+00 1/0 0/0 0/0 .text            Execute__12daGrdWater_cFPPA3_A4_f
 */
void daGrdWater_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* 80C14194-80C141A0 000DD4 000C+00 5/5 0/0 0/0 .text            init_modeWait__12daGrdWater_cFv */
void daGrdWater_c::init_modeWait() {
    // NONMATCHING
}

/* 80C141A0-80C141A4 000DE0 0004+00 1/0 0/0 0/0 .text            modeWait__12daGrdWater_cFv */
void daGrdWater_c::modeWait() {
    /* empty function */
}

/* 80C141A4-80C1423C 000DE4 0098+00 1/1 0/0 0/0 .text            init_modeLevelUpA__12daGrdWater_cFv
 */
void daGrdWater_c::init_modeLevelUpA() {
    // NONMATCHING
}

/* 80C1423C-80C142AC 000E7C 0070+00 1/0 0/0 0/0 .text            modeLevelUpA__12daGrdWater_cFv */
void daGrdWater_c::modeLevelUpA() {
    // NONMATCHING
}

/* 80C142AC-80C14320 000EEC 0074+00 1/1 0/0 0/0 .text init_modeLevelDownA__12daGrdWater_cFv */
void daGrdWater_c::init_modeLevelDownA() {
    // NONMATCHING
}

/* 80C14320-80C1437C 000F60 005C+00 1/0 0/0 0/0 .text            modeLevelDownA__12daGrdWater_cFv */
void daGrdWater_c::modeLevelDownA() {
    // NONMATCHING
}

/* 80C1437C-80C14414 000FBC 0098+00 1/1 0/0 0/0 .text            init_modeLevelUpB__12daGrdWater_cFv
 */
void daGrdWater_c::init_modeLevelUpB() {
    // NONMATCHING
}

/* 80C14414-80C14484 001054 0070+00 1/0 0/0 0/0 .text            modeLevelUpB__12daGrdWater_cFv */
void daGrdWater_c::modeLevelUpB() {
    // NONMATCHING
}

/* 80C14484-80C144F8 0010C4 0074+00 1/1 0/0 0/0 .text init_modeLevelDownB__12daGrdWater_cFv */
void daGrdWater_c::init_modeLevelDownB() {
    // NONMATCHING
}

/* 80C144F8-80C14554 001138 005C+00 1/0 0/0 0/0 .text            modeLevelDownB__12daGrdWater_cFv */
void daGrdWater_c::modeLevelDownB() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C149F0-80C149F4 000010 0004+00 0/1 0/0 0/0 .rodata          @4253 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4253 = -1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80C149F0, &lit_4253);
#pragma pop

/* 80C14554-80C147EC 001194 0298+00 1/0 0/0 0/0 .text            Draw__12daGrdWater_cFv */
void daGrdWater_c::Draw() {
    // NONMATCHING
}

/* 80C147EC-80C1481C 00142C 0030+00 1/0 0/0 0/0 .text            Delete__12daGrdWater_cFv */
void daGrdWater_c::Delete() {
    // NONMATCHING
}

/* 80C1481C-80C14848 00145C 002C+00 1/0 0/0 0/0 .text            daGrdWater_Draw__FP12daGrdWater_c
 */
static void daGrdWater_Draw(daGrdWater_c* param_0) {
    // NONMATCHING
}

/* 80C14848-80C14868 001488 0020+00 1/0 0/0 0/0 .text daGrdWater_Execute__FP12daGrdWater_c */
static void daGrdWater_Execute(daGrdWater_c* param_0) {
    // NONMATCHING
}

/* 80C14868-80C14888 0014A8 0020+00 1/0 0/0 0/0 .text            daGrdWater_Delete__FP12daGrdWater_c
 */
static void daGrdWater_Delete(daGrdWater_c* param_0) {
    // NONMATCHING
}

/* 80C14888-80C148A8 0014C8 0020+00 1/0 0/0 0/0 .text            daGrdWater_Create__FP10fopAc_ac_c
 */
static void daGrdWater_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80C148A8-80C14904 0014E8 005C+00 2/1 0/0 0/0 .text            __dt__16daGrdWater_HIO_cFv */
daGrdWater_HIO_c::~daGrdWater_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C14B38-80C14B44 000008 000C+00 1/1 0/0 0/0 .bss             @3636 */
static u8 lit_3636[12];

/* 80C14B44-80C14B58 000014 0014+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[20];

/* 80C14904-80C149CC 001544 00C8+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_groundwater_cpp */
void __sinit_d_a_obj_groundwater_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C14904, __sinit_d_a_obj_groundwater_cpp);
#pragma pop

/* 80C149F4-80C149F4 000014 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */