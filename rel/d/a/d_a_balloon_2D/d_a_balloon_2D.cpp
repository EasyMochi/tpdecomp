//
// Generated By: dol2asm
// Translation Unit: d_a_balloon_2D
//

#include "rel/d/a/d_a_balloon_2D/d_a_balloon_2D.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoHIO_entry_c {
    /* 80655404 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct cXyz {};

struct daBalloon2D_c {
    struct c_list {
        /* 806534CC */ void draw();
        /* 8065544C */ ~c_list();
    };

    struct CHeadScore {
        /* 80655304 */ ~CHeadScore();
        /* 80655340 */ CHeadScore();
    };

    /* 80653538 */ void createHeap();
    /* 80653D24 */ void create();
    /* 80653DB4 */ void destroy();
    /* 80653E10 */ void draw();
    /* 80653EC0 */ void execute();
    /* 80653F04 */ void drawMeter();
    /* 80653F58 */ void setComboCount(u8, u8);
    /* 80653FC0 */ void setScoreCount(u32);
    /* 80653FEC */ void addScoreCount(cXyz*, u32, u8);
    /* 806540B4 */ void initiate();
    /* 806540B8 */ void update();
    /* 806540BC */ void setComboNum(u8);
    /* 806541B4 */ void setBalloonSize(u8);
    /* 80654258 */ void setScoreNum(int);
    /* 80654440 */ void setAllAlpha();
    /* 8065464C */ void setComboAlpha();
    /* 80654730 */ void drawAddScore();
    /* 80654E8C */ void setHIO(bool);
    /* 80655494 */ ~daBalloon2D_c();
};

struct daBalloon2D_HIO_c {
    /* 806553A8 */ ~daBalloon2D_HIO_c();
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C1E4 */ void getResInfo(char const*, dRes_info_c*, int);
};

struct dMsgObject_c {
    /* 8023822C */ void getStatus();
};

struct JMSMesgEntry_c {};

struct dMeter2Info_c {
    /* 8021C544 */ void getStringKanji(u32, char*, JMSMesgEntry_c*);
};

struct dDlst_base_c {
    /* 806553A4 */ void draw();
};

struct dDlst_list_c {
    /* 80056794 */ void set(dDlst_base_c**&, dDlst_base_c**&, dDlst_base_c*);
};

struct Vec {};

struct ResTIMG {};

struct JKRExpHeap {};

struct JKRArchive {};

struct J2DTextBox {
    /* 80300658 */ void getStringPtr() const;
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
};

struct J2DPicture {
    /* 802FC708 */ J2DPicture(ResTIMG const*);
};

struct CPaneMgrAlpha {
    /* 802555C8 */ void show();
    /* 80255608 */ void hide();
    /* 802557D0 */ void setAlphaRate(f32);
    /* 80255828 */ void getAlphaRate();
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 802545B0 */ void paneTrans(f32, f32);
};

//
// Forward References:
//

extern "C" void draw__Q213daBalloon2D_c6c_listFv();
extern "C" static void daBalloon2D_createHeap__FP10fopAc_ac_c();
extern "C" void createHeap__13daBalloon2D_cFv();
extern "C" void create__13daBalloon2D_cFv();
extern "C" void destroy__13daBalloon2D_cFv();
extern "C" void draw__13daBalloon2D_cFv();
extern "C" void execute__13daBalloon2D_cFv();
extern "C" void drawMeter__13daBalloon2D_cFv();
extern "C" void setComboCount__13daBalloon2D_cFUcUc();
extern "C" void setScoreCount__13daBalloon2D_cFUl();
extern "C" void addScoreCount__13daBalloon2D_cFP4cXyzUlUc();
extern "C" void initiate__13daBalloon2D_cFv();
extern "C" void update__13daBalloon2D_cFv();
extern "C" void setComboNum__13daBalloon2D_cFUc();
extern "C" void setBalloonSize__13daBalloon2D_cFUc();
extern "C" void setScoreNum__13daBalloon2D_cFi();
extern "C" void setAllAlpha__13daBalloon2D_cFv();
extern "C" void setComboAlpha__13daBalloon2D_cFv();
extern "C" void drawAddScore__13daBalloon2D_cFv();
extern "C" void setHIO__13daBalloon2D_cFb();
extern "C" static void daBalloon2D_create__FP13daBalloon2D_c();
extern "C" void __dt__Q213daBalloon2D_c10CHeadScoreFv();
extern "C" void __ct__Q213daBalloon2D_c10CHeadScoreFv();
extern "C" static void daBalloon2D_destroy__FP13daBalloon2D_c();
extern "C" static void daBalloon2D_execute__FP13daBalloon2D_c();
extern "C" static void daBalloon2D_draw__FP13daBalloon2D_c();
extern "C" void draw__12dDlst_base_cFv();
extern "C" void __dt__17daBalloon2D_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void __dt__Q213daBalloon2D_c6c_listFv();
extern "C" void __dt__13daBalloon2D_cFv();
extern "C" void __sinit_d_a_balloon_2D_cpp();
extern "C" extern char const* const d_a_balloon_2D__stringBase0;

//
// External References:
//

SECTION_INIT void memcpy();
extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getResInfo__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void getStringKanji__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void dMeter2Info_getNumberTextureName__Fi();
extern "C" void dMeter2Info_getPlusTextureName__Fv();
extern "C" void getStatus__12dMsgObject_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void show__13CPaneMgrAlphaFv();
extern "C" void hide__13CPaneMgrAlphaFv();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void getAlphaRate__13CPaneMgrAlphaFv();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void __ct__10J2DPictureFPC7ResTIMG();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_23();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();

//
// Declarations:
//

/* 806534CC-80653518 0000EC 004C+00 1/0 0/0 0/0 .text            draw__Q213daBalloon2D_c6c_listFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::c_list::draw() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/draw__Q213daBalloon2D_c6c_listFv.s"
}
#pragma pop

/* 80653518-80653538 000138 0020+00 1/1 0/0 0/0 .text daBalloon2D_createHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBalloon2D_createHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/daBalloon2D_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 806555AC-806555B0 000000 0004+00 5/5 0/0 0/0 .rodata          @3896 */
SECTION_RODATA static u8 const lit_3896[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(806555AC, &lit_3896);

/* 80655610-806556D4 000000 00C4+00 1/1 0/0 0/0 .data
 * aParam$localstatic3$__ct__17daBalloon2D_HIO_cFv              */
SECTION_DATA static u8 data_80655610[196] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC1, 0x20, 0x00, 0x00, 0x3F, 0x4C, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0xC1, 0x50, 0x00, 0x00,
    0x3F, 0x8C, 0xCC, 0xCD, 0x3F, 0x66, 0x66, 0x66, 0x3F, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00,
    0x41, 0x90, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xC0, 0xD3, 0x33, 0x33, 0x40, 0xD3, 0x33, 0x33,
    0x3F, 0xA6, 0x66, 0x66, 0xBF, 0xA6, 0x66, 0x66, 0x41, 0x13, 0x33, 0x33, 0x3F, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0xD3, 0x33, 0x33, 0x3F, 0x8C, 0xCC, 0xCD, 0x3F, 0x66, 0x66, 0x66,
    0x3F, 0x80, 0x00, 0x00, 0x40, 0x79, 0x99, 0x9A, 0xC1, 0x13, 0x33, 0x33, 0x3F, 0x59, 0x99, 0x9A,
    0x3F, 0x4C, 0xCC, 0xCD, 0x40, 0xD3, 0x33, 0x33, 0x3F, 0xA6, 0x66, 0x66, 0x3F, 0x40, 0x00, 0x00,
    0x3F, 0x66, 0x66, 0x66, 0x40, 0x79, 0x99, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x59, 0x99, 0x9A,
    0x3F, 0x66, 0x66, 0x66, 0x40, 0x79, 0x99, 0x9A, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x73, 0x33, 0x33,
    0x3F, 0x66, 0x66, 0x66, 0x41, 0xB0, 0x00, 0x00, 0xC1, 0x88, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x41, 0xA0, 0x00, 0x00,
};

/* 806556D4-806556D8 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_balloon_2D__stringBase0;

/* 80653538-80653D24 000158 07EC+00 1/1 0/0 0/0 .text            createHeap__13daBalloon2D_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/createHeap__13daBalloon2D_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80655770-8065577C 000008 000C+00 1/1 0/0 0/0 .bss             @3779 */
static u8 lit_3779[12];

/* 8065577C-80655844 000014 00C8+00 3/3 0/0 0/0 .bss             l_HOSTIO */
static u8 l_HOSTIO[200];

/* 80655844-80655848 0000DC 0004+00 2/2 0/0 0/0 .bss             myclass__13daBalloon2D_c */
static u8 myclass__13daBalloon2D_c[4];

/* 80653D24-80653DB4 000944 0090+00 1/1 0/0 0/0 .text            create__13daBalloon2D_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/create__13daBalloon2D_cFv.s"
}
#pragma pop

/* 80653DB4-80653E10 0009D4 005C+00 1/1 0/0 0/0 .text            destroy__13daBalloon2D_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::destroy() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/destroy__13daBalloon2D_cFv.s"
}
#pragma pop

/* 80653E10-80653EC0 000A30 00B0+00 1/1 0/0 0/0 .text            draw__13daBalloon2D_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::draw() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/draw__13daBalloon2D_cFv.s"
}
#pragma pop

/* 80653EC0-80653F04 000AE0 0044+00 1/1 0/0 0/0 .text            execute__13daBalloon2D_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/execute__13daBalloon2D_cFv.s"
}
#pragma pop

/* 80653F04-80653F58 000B24 0054+00 1/1 0/0 0/0 .text            drawMeter__13daBalloon2D_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::drawMeter() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/drawMeter__13daBalloon2D_cFv.s"
}
#pragma pop

/* 80653F58-80653FC0 000B78 0068+00 0/0 0/0 1/1 .text            setComboCount__13daBalloon2D_cFUcUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::setComboCount(u8 param_0, u8 param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/setComboCount__13daBalloon2D_cFUcUc.s"
}
#pragma pop

/* 80653FC0-80653FEC 000BE0 002C+00 0/0 0/0 2/2 .text            setScoreCount__13daBalloon2D_cFUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::setScoreCount(u32 param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/setScoreCount__13daBalloon2D_cFUl.s"
}
#pragma pop

/* 80653FEC-806540B4 000C0C 00C8+00 0/0 0/0 1/1 .text addScoreCount__13daBalloon2D_cFP4cXyzUlUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::addScoreCount(cXyz* param_0, u32 param_1, u8 param_2) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/addScoreCount__13daBalloon2D_cFP4cXyzUlUc.s"
}
#pragma pop

/* 806540B4-806540B8 000CD4 0004+00 1/1 0/0 0/0 .text            initiate__13daBalloon2D_cFv */
void daBalloon2D_c::initiate() {
    /* empty function */
}

/* 806540B8-806540BC 000CD8 0004+00 1/1 0/0 0/0 .text            update__13daBalloon2D_cFv */
void daBalloon2D_c::update() {
    /* empty function */
}

/* 806540BC-806541B4 000CDC 00F8+00 2/2 0/0 0/0 .text            setComboNum__13daBalloon2D_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::setComboNum(u8 param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/setComboNum__13daBalloon2D_cFUc.s"
}
#pragma pop

/* 806541B4-80654258 000DD4 00A4+00 2/2 0/0 0/0 .text            setBalloonSize__13daBalloon2D_cFUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::setBalloonSize(u8 param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/setBalloonSize__13daBalloon2D_cFUc.s"
}
#pragma pop

/* 80654258-80654440 000E78 01E8+00 2/2 0/0 0/0 .text            setScoreNum__13daBalloon2D_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::setScoreNum(int param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/setScoreNum__13daBalloon2D_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 806555B0-806555B4 000004 0004+00 0/3 0/0 0/0 .rodata          @4064 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4064 = 1.0f;
COMPILER_STRIP_GATE(806555B0, &lit_4064);
#pragma pop

/* 806555B4-806555B8 000008 0004+00 0/2 0/0 0/0 .rodata          @4065 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4065 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(806555B4, &lit_4065);
#pragma pop

/* 806555B8-806555BC 00000C 0004+00 0/3 0/0 0/0 .rodata          @4066 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4066 = 0.5f;
COMPILER_STRIP_GATE(806555B8, &lit_4066);
#pragma pop

/* 806555BC-806555C0 000010 0004+00 0/2 0/0 0/0 .rodata          @4067 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4067 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(806555BC, &lit_4067);
#pragma pop

/* 80654440-8065464C 001060 020C+00 1/1 0/0 0/0 .text            setAllAlpha__13daBalloon2D_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::setAllAlpha() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/setAllAlpha__13daBalloon2D_cFv.s"
}
#pragma pop

/* 8065464C-80654730 00126C 00E4+00 2/2 0/0 0/0 .text            setComboAlpha__13daBalloon2D_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::setComboAlpha() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/setComboAlpha__13daBalloon2D_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 806555C0-806555C4 000014 0004+00 0/1 0/0 0/0 .rodata          @4165 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4165 = 30.0f;
COMPILER_STRIP_GATE(806555C0, &lit_4165);
#pragma pop

/* 806555C4-806555C8 000018 0004+00 0/1 0/0 0/0 .rodata          @4166 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4166 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(806555C4, &lit_4166);
#pragma pop

/* 806555C8-806555CC 00001C 0004+00 0/1 0/0 0/0 .rodata          @4167 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4167 = 10.0f;
COMPILER_STRIP_GATE(806555C8, &lit_4167);
#pragma pop

/* 806555CC-806555D0 000020 0004+00 0/1 0/0 0/0 .rodata          @4168 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4168 = 255.0f;
COMPILER_STRIP_GATE(806555CC, &lit_4168);
#pragma pop

/* 806555D0-806555D4 000024 0004+00 0/1 0/0 0/0 .rodata          @4169 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4169 = 6.0f;
COMPILER_STRIP_GATE(806555D0, &lit_4169);
#pragma pop

/* 806555D4-806555D8 000028 0004+00 0/1 0/0 0/0 .rodata          @4170 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4170 = 2.0f;
COMPILER_STRIP_GATE(806555D4, &lit_4170);
#pragma pop

/* 806555D8-806555DC 00002C 0004+00 0/1 0/0 0/0 .rodata          @4171 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4171 = 3.0f;
COMPILER_STRIP_GATE(806555D8, &lit_4171);
#pragma pop

/* 806555DC-806555E0 000030 0004+00 0/1 0/0 0/0 .rodata          @4172 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4172 = 4.0f;
COMPILER_STRIP_GATE(806555DC, &lit_4172);
#pragma pop

/* 806555E0-806555E4 000034 0004+00 0/1 0/0 0/0 .rodata          @4173 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4173 = 5.0f;
COMPILER_STRIP_GATE(806555E0, &lit_4173);
#pragma pop

/* 806555E4-806555EC 000038 0008+00 0/1 0/0 0/0 .rodata          @4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4175[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(806555E4, &lit_4175);
#pragma pop

/* 80654730-80654E8C 001350 075C+00 1/1 0/0 0/0 .text            drawAddScore__13daBalloon2D_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::drawAddScore() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/drawAddScore__13daBalloon2D_cFv.s"
}
#pragma pop

/* 80654E8C-80655250 001AAC 03C4+00 2/2 0/0 0/0 .text            setHIO__13daBalloon2D_cFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBalloon2D_c::setHIO(bool param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/setHIO__13daBalloon2D_cFb.s"
}
#pragma pop

/* ############################################################################################## */
/* 806556D8-806556F8 -00001 0020+00 1/0 0/0 0/0 .data            daBalloon2D_METHODS */
SECTION_DATA static void* daBalloon2D_METHODS[8] = {
    (void*)daBalloon2D_create__FP13daBalloon2D_c,
    (void*)daBalloon2D_destroy__FP13daBalloon2D_c,
    (void*)daBalloon2D_execute__FP13daBalloon2D_c,
    (void*)NULL,
    (void*)daBalloon2D_draw__FP13daBalloon2D_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 806556F8-80655728 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_BALLOON2D */
SECTION_DATA extern void* g_profile_BALLOON2D[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x005A0000, (void*)&g_fpcLf_Method,
    (void*)0x00000748, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02FD0000, (void*)&daBalloon2D_METHODS,
    (void*)0x00040000, (void*)NULL,
};

/* 80655728-80655734 000118 000C+00 1/1 0/0 0/0 .data            __vt__12dDlst_base_c */
SECTION_DATA extern void* __vt__12dDlst_base_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__12dDlst_base_cFv,
};

/* 80655734-80655740 000124 000C+00 2/2 0/0 0/0 .data            __vt__13daBalloon2D_c */
SECTION_DATA extern void* __vt__13daBalloon2D_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daBalloon2D_cFv,
};

/* 80655740-80655750 000130 0010+00 3/3 0/0 0/0 .data            __vt__Q213daBalloon2D_c6c_list */
SECTION_DATA extern void* __vt__Q213daBalloon2D_c6c_list[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__Q213daBalloon2D_c6c_listFv,
    (void*)__dt__Q213daBalloon2D_c6c_listFv,
};

/* 80655250-80655304 001E70 00B4+00 1/0 0/0 0/0 .text daBalloon2D_create__FP13daBalloon2D_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBalloon2D_create(daBalloon2D_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/daBalloon2D_create__FP13daBalloon2D_c.s"
}
#pragma pop

/* 80655304-80655340 001F24 003C+00 2/2 0/0 0/0 .text __dt__Q213daBalloon2D_c10CHeadScoreFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBalloon2D_c::CHeadScore::~CHeadScore() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/__dt__Q213daBalloon2D_c10CHeadScoreFv.s"
}
#pragma pop

/* 80655340-80655344 001F60 0004+00 1/1 0/0 0/0 .text __ct__Q213daBalloon2D_c10CHeadScoreFv */
daBalloon2D_c::CHeadScore::CHeadScore() {
    /* empty function */
}

/* 80655344-80655364 001F64 0020+00 1/0 0/0 0/0 .text daBalloon2D_destroy__FP13daBalloon2D_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBalloon2D_destroy(daBalloon2D_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/daBalloon2D_destroy__FP13daBalloon2D_c.s"
}
#pragma pop

/* 80655364-80655384 001F84 0020+00 1/0 0/0 0/0 .text daBalloon2D_execute__FP13daBalloon2D_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBalloon2D_execute(daBalloon2D_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/daBalloon2D_execute__FP13daBalloon2D_c.s"
}
#pragma pop

/* 80655384-806553A4 001FA4 0020+00 1/0 0/0 0/0 .text            daBalloon2D_draw__FP13daBalloon2D_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBalloon2D_draw(daBalloon2D_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/daBalloon2D_draw__FP13daBalloon2D_c.s"
}
#pragma pop

/* 806553A4-806553A8 001FC4 0004+00 1/0 0/0 0/0 .text            draw__12dDlst_base_cFv */
void dDlst_base_c::draw() {
    /* empty function */
}

/* ############################################################################################## */
/* 80655750-8065575C 000140 000C+00 2/2 0/0 0/0 .data            __vt__17daBalloon2D_HIO_c */
SECTION_DATA extern void* __vt__17daBalloon2D_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daBalloon2D_HIO_cFv,
};

/* 8065575C-80655768 00014C 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 806553A8-80655404 001FC8 005C+00 2/1 0/0 0/0 .text            __dt__17daBalloon2D_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBalloon2D_HIO_c::~daBalloon2D_HIO_c() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/__dt__17daBalloon2D_HIO_cFv.s"
}
#pragma pop

/* 80655404-8065544C 002024 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 8065544C-80655494 00206C 0048+00 1/0 0/0 0/0 .text            __dt__Q213daBalloon2D_c6c_listFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBalloon2D_c::c_list::~c_list() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/__dt__Q213daBalloon2D_c6c_listFv.s"
}
#pragma pop

/* 80655494-80655524 0020B4 0090+00 1/0 0/0 0/0 .text            __dt__13daBalloon2D_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBalloon2D_c::~daBalloon2D_c() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/__dt__13daBalloon2D_cFv.s"
}
#pragma pop

/* 80655524-80655598 002144 0074+00 0/0 1/0 0/0 .text            __sinit_d_a_balloon_2D_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_balloon_2D_cpp() {
    nofralloc
#include "asm/rel/d/a/d_a_balloon_2D/d_a_balloon_2D/__sinit_d_a_balloon_2D_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80655524 = (void*)__sinit_d_a_balloon_2D_cpp;
#pragma pop

/* 806555EC-8065560E 000040 0022+00 2/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_806555EC = "Balloon2D";
SECTION_DEAD static char const* const stringBase_806555F6 = "zelda_balloon_game.blo";
SECTION_DEAD static char const* const stringBase_8065560D = "";
#pragma pop