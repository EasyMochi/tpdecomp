//
// Generated By: dol2asm
// Translation Unit: d_a_scene_exit
//

#include "rel/d/a/d_a_scene_exit/d_a_scene_exit.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/com/d_com_inf_game.h"
#include "m_Do/m_Do_mtx.h"

//
// Forward References:
//

extern "C" void checkWork__8daScex_cFv();
extern "C" static void daScex_Create__FP10fopAc_ac_c();
extern "C" static void daScex_Execute__FP8daScex_c();
extern "C" void execute__8daScex_cFv();
extern "C" extern void* g_profile_SCENE_EXIT[13];

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80485838-80485974 000078 013C+00 1/1 0/0 0/0 .text            checkWork__8daScex_cFv */
int daScex_c::checkWork() {
    if (getArg1() == 0xFF || getArg1() == 0 || getArg1() == 3) {
        if (i_fopAcM_isSwitch(this, getSwNo())) {
            return 0;
        }
    } else if ((getArg1() == 1 || getArg1() == 2 || getArg1() == 4) && getSwNo() != 0xFF) {
        if (!i_fopAcM_isSwitch(this, getSwNo())) {
            return 0;
        }
    }

    u16 offBit = getOffEventBit();
    if (offBit != 0x0FFF && i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[offBit])) {
        return 0;
    }

    u16 onBit = getOnEventBit();
    if (onBit != 0x0FFF && !i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[onBit])) {
        return 0;
    }

    return 1;
}

/* ############################################################################################## */
/* 80485C98-80485C9C 000000 0004+00 2/2 0/0 0/0 .rodata          @3758 */
SECTION_RODATA static f32 const lit_3758 = 75.0f;
COMPILER_STRIP_GATE(0x80485C98, &lit_3758);

/* 80485C9C-80485CA0 000004 0004+00 1/1 0/0 0/0 .rodata          @3759 */
SECTION_RODATA static f32 const lit_3759 = 150.0f;
COMPILER_STRIP_GATE(0x80485C9C, &lit_3759);

/* 80485974-80485A30 0001B4 00BC+00 1/0 0/0 0/0 .text            daScex_Create__FP10fopAc_ac_c */
// matches with literals
#ifdef NONMATCHING
static int daScex_Create(fopAc_ac_c* ac) {
    if (!fopAcM_CheckCondition(ac, 8)) {
        new (ac) daScex_c();
        fopAcM_OnCondition(ac, 8);
    }
    daScex_c* scex = static_cast<daScex_c*>(ac);

    mDoMtx_stack_c::transS(scex->mCurrent.mPosition.x, scex->mCurrent.mPosition.y, scex->mCurrent.mPosition.z);
    mDoMtx_stack_c::YrotM(scex->mCollisionRot.y);
    PSMTXInverse(mDoMtx_stack_c::get(), scex->mMatrix);
    scex->mScale.x *= 75.0f;
    scex->mScale.z *= 75.0f;
    scex->mScale.y *= 150.0f;

    return 4;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daScex_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_scene_exit/d_a_scene_exit/daScex_Create__FP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* 80485A30-80485A50 000270 0020+00 1/0 0/0 0/0 .text            daScex_Execute__FP8daScex_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daScex_Execute(daScex_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_scene_exit/d_a_scene_exit/daScex_Execute__FP8daScex_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80485CA0-80485CA4 000008 0004+00 0/1 0/0 0/0 .rodata          @3840 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3840[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80485CA0, &lit_3840);
#pragma pop

/* 80485CA4-80485CA8 00000C 0004+00 0/1 0/0 0/0 .rodata          @3841 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3841 = 1.0f;
COMPILER_STRIP_GATE(0x80485CA4, &lit_3841);
#pragma pop

/* 80485CA8-80485CAC 000010 0004+00 0/1 0/0 0/0 .rodata          @3842 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3842 = -1.0f;
COMPILER_STRIP_GATE(0x80485CA8, &lit_3842);
#pragma pop

/* 80485A50-80485C90 000290 0240+00 1/1 0/0 0/0 .text            execute__8daScex_cFv */
// regalloc
#ifdef NONMATCHING
int daScex_c::execute() {
    Vec spC;
    daPy_py_c* player = daPy_getPlayerActorClass();

    if (checkWork()) {
        PSMTXMultVec(mMatrix, &player->mCurrent.mPosition, &spC);

        if (spC.y >= 0.0f && spC.y <= mScale.y && fabsf(spC.x) <= mScale.x && fabsf(spC.z) <= mScale.z) {
            switch (getArg1()) {
            case 0xFF:
            case 1:
                player->onSceneChangeArea(getArg0(), ((fopAcM_GetParam(this) >> 0x10) & 0xFF), this);
                break;
            case 2:
            case 0:
                player->onSceneChangeAreaJump(getArg0(), ((fopAcM_GetParam(this) >> 0x10) & 0xFF), this);
                break;
            case 3:
            case 4:
                player->onSceneChangeAreaJump(getArg0(), ((fopAcM_GetParam(this) >> 0x10) & 0xFF), this);
                break;
            }
        }
    }

    if (mSceneChangeOK && player->checkSceneChangeAreaStart()) {
        if ((getArg1() == 3 || getArg1() == 4) && field_0x598 == 0) {
            mDoAud_seStart(Z2SE_FORCE_BACK, NULL, 0, 0);
            player->voiceStart(Z2SE_WL_V_FALL_TO_RESTART);
            field_0x598 = 1;
        }

        if (getArg1() == 0xFF || getArg1() == 0 || getArg1() == 3) {
            if (getSwNo() != 0xFF) {
                i_fopAcM_onSwitch(this, getSwNo());
            }
        }
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daScex_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_scene_exit/d_a_scene_exit/execute__8daScex_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80485CAC-80485CCC -00001 0020+00 1/0 0/0 0/0 .data            l_daScex_Method */
SECTION_DATA static void* l_daScex_Method[8] = {
    (void*)daScex_Create__FP10fopAc_ac_c,
    (void*)NULL,
    (void*)daScex_Execute__FP8daScex_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80485CCC-80485D00 -00001 0034+00 0/0 0/0 1/0 .data            g_profile_SCENE_EXIT */
SECTION_DATA extern void* g_profile_SCENE_EXIT[13] = {
    (void*)0xFFFFFFFD, (void*)0x000AFFFD,
    (void*)0x030C0000, (void*)&g_fpcLf_Method,
    (void*)0x0000059C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02F90000, (void*)&l_daScex_Method,
    (void*)0x00060000, (void*)0x05000000,
    (void*)NULL,
};
