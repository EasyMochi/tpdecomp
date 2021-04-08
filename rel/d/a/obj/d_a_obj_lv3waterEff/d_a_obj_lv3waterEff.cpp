//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv3waterEff
//

#include "rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjWaterEff_c {
    /* 80C5C4F8 */ void Create();
    /* 80C5C5DC */ void create();
    /* 80C5C6B0 */ void execute();
    /* 80C5C7B8 */ void _delete();
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct cXyz {
    /* 80C5C670 */ ~cXyz();
    /* 80C5C6AC */ cXyz();
};

struct csXyz {};

struct dKy_tevstr_c {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" void Create__15daObjWaterEff_cFv();
extern "C" void create__15daObjWaterEff_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void execute__15daObjWaterEff_cFv();
extern "C" void _delete__15daObjWaterEff_cFv();
extern "C" static void daObjWaterEff_Execute__FP15daObjWaterEff_c();
extern "C" static void daObjWaterEff_Delete__FP15daObjWaterEff_c();
extern "C" static void daObjWaterEff_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_Obj_WaterEff[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dKy_camera_water_in_status_check__Fv();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_25();
extern "C" void _restgpr_25();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C5C878-80C5C880 000000 0008+00 1/1 0/0 0/0 .rodata          l_eff_id */
SECTION_RODATA static u8 const l_eff_id[8] = {
    0x86, 0xD2, 0x86, 0xD3, 0x86, 0xD4, 0x86, 0xD5,
};
COMPILER_STRIP_GATE(80C5C878, &l_eff_id);

/* 80C5C880-80C5C884 000008 0004+00 1/2 0/0 0/0 .rodata          @3637 */
SECTION_RODATA static f32 const lit_3637 = 1.0f;
COMPILER_STRIP_GATE(80C5C880, &lit_3637);

/* 80C5C884-80C5C888 00000C 0004+00 0/1 0/0 0/0 .rodata          @3638 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3638 = 14420.0f;
COMPILER_STRIP_GATE(80C5C884, &lit_3638);
#pragma pop

/* 80C5C888-80C5C88C 000010 0004+00 0/1 0/0 0/0 .rodata          @3639 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3639 = -1100.0f;
COMPILER_STRIP_GATE(80C5C888, &lit_3639);
#pragma pop

/* 80C5C88C-80C5C890 000014 0004+00 0/1 0/0 0/0 .rodata          @3640 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3640 = -4950.0f;
COMPILER_STRIP_GATE(80C5C88C, &lit_3640);
#pragma pop

/* 80C5C890-80C5C894 000018 0004+00 0/1 0/0 0/0 .rodata          @3641 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3641 = 12585.0f;
COMPILER_STRIP_GATE(80C5C890, &lit_3641);
#pragma pop

/* 80C5C894-80C5C898 00001C 0004+00 0/1 0/0 0/0 .rodata          @3642 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3642 = -550.0f;
COMPILER_STRIP_GATE(80C5C894, &lit_3642);
#pragma pop

/* 80C5C898-80C5C89C 000020 0004+00 0/1 0/0 0/0 .rodata          @3643 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3643 = -2390.0f;
COMPILER_STRIP_GATE(80C5C898, &lit_3643);
#pragma pop

/* 80C5C4F8-80C5C5DC 000078 00E4+00 1/1 0/0 0/0 .text            Create__15daObjWaterEff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWaterEff_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff/Create__15daObjWaterEff_cFv.s"
}
#pragma pop

/* 80C5C5DC-80C5C670 00015C 0094+00 1/1 0/0 0/0 .text            create__15daObjWaterEff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWaterEff_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff/func_80C5C5DC.s"
}
#pragma pop

/* 80C5C670-80C5C6AC 0001F0 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff/__dt__4cXyzFv.s"
}
#pragma pop

/* 80C5C6AC-80C5C6B0 00022C 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* ############################################################################################## */
/* 80C5C89C-80C5C8A0 000024 0004+00 1/1 0/0 0/0 .rodata          @3710 */
SECTION_RODATA static f32 const lit_3710 = -1.0f;
COMPILER_STRIP_GATE(80C5C89C, &lit_3710);

/* 80C5C6B0-80C5C7B8 000230 0108+00 1/1 0/0 0/0 .text            execute__15daObjWaterEff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWaterEff_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff/execute__15daObjWaterEff_cFv.s"
}
#pragma pop

/* 80C5C7B8-80C5C810 000338 0058+00 1/1 0/0 0/0 .text            _delete__15daObjWaterEff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWaterEff_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff/_delete__15daObjWaterEff_cFv.s"
}
#pragma pop

/* 80C5C810-80C5C830 000390 0020+00 1/0 0/0 0/0 .text daObjWaterEff_Execute__FP15daObjWaterEff_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjWaterEff_Execute(daObjWaterEff_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff/daObjWaterEff_Execute__FP15daObjWaterEff_c.s"
}
#pragma pop

/* 80C5C830-80C5C850 0003B0 0020+00 1/0 0/0 0/0 .text daObjWaterEff_Delete__FP15daObjWaterEff_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjWaterEff_Delete(daObjWaterEff_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff/daObjWaterEff_Delete__FP15daObjWaterEff_c.s"
}
#pragma pop

/* 80C5C850-80C5C870 0003D0 0020+00 1/0 0/0 0/0 .text daObjWaterEff_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjWaterEff_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff/daObjWaterEff_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5C8A0-80C5C8C0 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjWaterEff_Method */
SECTION_DATA static void* l_daObjWaterEff_Method[8] = {
    (void*)daObjWaterEff_Create__FP10fopAc_ac_c,
    (void*)daObjWaterEff_Delete__FP15daObjWaterEff_c,
    (void*)daObjWaterEff_Execute__FP15daObjWaterEff_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C5C8C0-80C5C8F0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_WaterEff */
SECTION_DATA extern void* g_profile_Obj_WaterEff[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x017F0000, (void*)&g_fpcLf_Method,
    (void*)0x00000594, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x022B0000, (void*)&l_daObjWaterEff_Method,
    (void*)0x00040100, (void*)0x000E0000,
};
