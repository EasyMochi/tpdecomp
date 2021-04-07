//
// Generated By: dol2asm
// Translation Unit: d_a_tag_waterfall
//

#include "rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct cXyz {};

struct daTagWaterFall_c {
    /* 80D64680 */ bool draw();
    /* 80D64724 */ void getEllipseY(f32);
    /* 80D64768 */ void checkHitWaterFall(cXyz);
    /* 80D6486C */ void checkHitWaterFallCamera();
    /* 80D648B4 */ void execute();
    /* 80D64AE0 */ void _delete();
    /* 80D64B20 */ void create();
};

struct daTagWaterFall_HIO_c {
    /* 80D6462C */ daTagWaterFall_HIO_c();
    /* 80D64CDC */ ~daTagWaterFall_HIO_c();
};

//
// Forward References:
//

extern "C" void __ct__20daTagWaterFall_HIO_cFv();
extern "C" bool draw__16daTagWaterFall_cFv();
extern "C" static void daTagWaterFall_Draw__FP16daTagWaterFall_c();
extern "C" static void s_waterfall__FPvPv();
extern "C" void getEllipseY__16daTagWaterFall_cFf();
extern "C" void checkHitWaterFall__16daTagWaterFall_cF4cXyz();
extern "C" void checkHitWaterFallCamera__16daTagWaterFall_cFv();
extern "C" void execute__16daTagWaterFall_cFv();
extern "C" static void daTagWaterFall_Execute__FP16daTagWaterFall_c();
extern "C" static bool daTagWaterFall_IsDelete__FP16daTagWaterFall_c();
extern "C" void _delete__16daTagWaterFall_cFv();
extern "C" static void daTagWaterFall_Delete__FP16daTagWaterFall_c();
extern "C" void create__16daTagWaterFall_cFv();
extern "C" static void daTagWaterFall_Create__FP16daTagWaterFall_c();
extern "C" void __dt__20daTagWaterFall_HIO_cFv();
extern "C" void __sinit_d_a_tag_waterfall_cpp();

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcM_IsCreating__FUi();
extern "C" void dKy_fog_startendz_set__Ffff();
extern "C" void dKy_custom_colset__FUcUcf();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dl__FPv();
extern "C" void PSMTXMultVec();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D64D74-80D64D78 000000 0004+00 4/4 0/0 0/0 .rodata          @3758 */
SECTION_RODATA static u8 const lit_3758[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80D64D74, &lit_3758);

/* 80D64D78-80D64D7C 000004 0004+00 0/1 0/0 0/0 .rodata          @3759 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3759 = 10000.0f;
COMPILER_STRIP_GATE(80D64D78, &lit_3759);
#pragma pop

/* 80D64D7C-80D64D80 000008 0004+00 0/1 0/0 0/0 .rodata          @3760 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3760 = 3.0f;
COMPILER_STRIP_GATE(80D64D7C, &lit_3760);
#pragma pop

/* 80D64D94-80D64D98 000000 0004+00 2/2 0/0 0/0 .data            m_master_id */
SECTION_DATA static u32 m_master_id = 0xFFFFFFFF;

/* 80D64D98-80D64DB8 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagWaterFall_Method */
SECTION_DATA static void* l_daTagWaterFall_Method[8] = {
    (void*)daTagWaterFall_Create__FP16daTagWaterFall_c,
    (void*)daTagWaterFall_Delete__FP16daTagWaterFall_c,
    (void*)daTagWaterFall_Execute__FP16daTagWaterFall_c,
    (void*)daTagWaterFall_IsDelete__FP16daTagWaterFall_c,
    (void*)daTagWaterFall_Draw__FP16daTagWaterFall_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D64DB8-80D64DE8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_WaterFall */
SECTION_DATA extern void* g_profile_Tag_WaterFall[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01F80000, (void*)&g_fpcLf_Method,
    (void*)0x00000584, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00C60000, (void*)&l_daTagWaterFall_Method,
    (void*)0x00044000, (void*)NULL,
};

/* 80D64DE8-80D64DF4 000054 000C+00 2/2 0/0 0/0 .data            __vt__20daTagWaterFall_HIO_c */
SECTION_DATA extern void* __vt__20daTagWaterFall_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__20daTagWaterFall_HIO_cFv,
};

/* 80D6462C-80D64680 0000EC 0054+00 1/1 0/0 0/0 .text            __ct__20daTagWaterFall_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagWaterFall_HIO_c::daTagWaterFall_HIO_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/__ct__20daTagWaterFall_HIO_cFv.s"
}
#pragma pop

/* 80D64680-80D64688 000140 0008+00 1/1 0/0 0/0 .text            draw__16daTagWaterFall_cFv */
bool daTagWaterFall_c::draw() {
    return true;
}

/* 80D64688-80D646A8 000148 0020+00 1/0 0/0 0/0 .text daTagWaterFall_Draw__FP16daTagWaterFall_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagWaterFall_Draw(daTagWaterFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/daTagWaterFall_Draw__FP16daTagWaterFall_c.s"
}
#pragma pop

/* 80D646A8-80D64724 000168 007C+00 1/1 0/0 0/0 .text            s_waterfall__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_waterfall(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/s_waterfall__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D64D80-80D64D84 00000C 0004+00 2/2 0/0 0/0 .rodata          @3803 */
SECTION_RODATA static f32 const lit_3803 = 1.0f;
COMPILER_STRIP_GATE(80D64D80, &lit_3803);

/* 80D64724-80D64768 0001E4 0044+00 1/1 0/0 0/0 .text            getEllipseY__16daTagWaterFall_cFf
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::getEllipseY(f32 param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/getEllipseY__16daTagWaterFall_cFf.s"
}
#pragma pop

/* 80D64768-80D6486C 000228 0104+00 1/1 0/0 2/2 .text checkHitWaterFall__16daTagWaterFall_cF4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::checkHitWaterFall(cXyz param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/checkHitWaterFall__16daTagWaterFall_cF4cXyz.s"
}
#pragma pop

/* 80D6486C-80D648B4 00032C 0048+00 1/1 0/0 0/0 .text
 * checkHitWaterFallCamera__16daTagWaterFall_cFv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::checkHitWaterFallCamera() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/checkHitWaterFallCamera__16daTagWaterFall_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D64E00-80D64E04 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80D64E00[4];

/* 80D64E04-80D64E10 00000C 000C+00 1/1 0/0 0/0 .bss             @3753 */
static u8 lit_3753[12];

/* 80D64E10-80D64E34 000018 0024+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[36];

/* 80D648B4-80D64AB8 000374 0204+00 1/1 0/0 0/0 .text            execute__16daTagWaterFall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/execute__16daTagWaterFall_cFv.s"
}
#pragma pop

/* 80D64AB8-80D64AD8 000578 0020+00 1/0 0/0 0/0 .text daTagWaterFall_Execute__FP16daTagWaterFall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagWaterFall_Execute(daTagWaterFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/daTagWaterFall_Execute__FP16daTagWaterFall_c.s"
}
#pragma pop

/* 80D64AD8-80D64AE0 000598 0008+00 1/0 0/0 0/0 .text
 * daTagWaterFall_IsDelete__FP16daTagWaterFall_c                */
static bool daTagWaterFall_IsDelete(daTagWaterFall_c* param_0) {
    return true;
}

/* 80D64AE0-80D64B00 0005A0 0020+00 1/1 0/0 0/0 .text            _delete__16daTagWaterFall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::_delete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/_delete__16daTagWaterFall_cFv.s"
}
#pragma pop

/* 80D64B00-80D64B20 0005C0 0020+00 1/0 0/0 0/0 .text daTagWaterFall_Delete__FP16daTagWaterFall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagWaterFall_Delete(daTagWaterFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/daTagWaterFall_Delete__FP16daTagWaterFall_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D64D84-80D64D8C 000010 0008+00 1/1 0/0 0/0 .rodata          @3959 */
SECTION_RODATA static u8 const lit_3959[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D64D84, &lit_3959);

/* 80D64D8C-80D64D94 000018 0008+00 1/1 0/0 0/0 .rodata          @3960 */
SECTION_RODATA static u8 const lit_3960[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D64D8C, &lit_3960);

/* 80D64B20-80D64CBC 0005E0 019C+00 1/1 0/0 0/0 .text            create__16daTagWaterFall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/create__16daTagWaterFall_cFv.s"
}
#pragma pop

/* 80D64CBC-80D64CDC 00077C 0020+00 1/0 0/0 0/0 .text daTagWaterFall_Create__FP16daTagWaterFall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagWaterFall_Create(daTagWaterFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/daTagWaterFall_Create__FP16daTagWaterFall_c.s"
}
#pragma pop

/* 80D64CDC-80D64D24 00079C 0048+00 2/1 0/0 0/0 .text            __dt__20daTagWaterFall_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagWaterFall_HIO_c::~daTagWaterFall_HIO_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/__dt__20daTagWaterFall_HIO_cFv.s"
}
#pragma pop

/* 80D64D24-80D64D60 0007E4 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_tag_waterfall_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_tag_waterfall_cpp() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/__sinit_d_a_tag_waterfall_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80D64D24 = (void*)__sinit_d_a_tag_waterfall_cpp;
#pragma pop