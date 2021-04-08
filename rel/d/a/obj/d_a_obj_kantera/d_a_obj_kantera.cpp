//
// Generated By: dol2asm
// Translation Unit: d_a_obj_kantera
//

#include "rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daItemKantera_c {
    /* 80C389BC */ void initBaseMtx();
    /* 80C389F8 */ void setBaseMtx();
    /* 80C38A64 */ void Create();
    /* 80C38BA8 */ bool __CreateHeap();
    /* 80C38BB0 */ void create();
    /* 80C38F78 */ void bg_check();
    /* 80C39068 */ void actionInit();
    /* 80C390A0 */ void actionWaitInit();
    /* 80C3911C */ void actionWait();
    /* 80C39234 */ void initActionOrderGetDemo();
    /* 80C392D0 */ void actionOrderGetDemo();
    /* 80C3934C */ void actionGetDemo();
    /* 80C393B0 */ void execute();
    /* 80C394DC */ void draw();
    /* 80C39530 */ void _delete();
};

struct daItemBase_c {
    /* 80037A64 */ void hide();
    /* 80037A74 */ void show();
    /* 80037ACC */ void chkDraw();
    /* 80144724 */ void DeleteBase(char const*);
    /* 8014474C */ bool clothCreate();
    /* 80144B94 */ void DrawBase();
    /* 80144C30 */ void RotateYBase();
    /* 80144C7C */ void setListStart();
    /* 80144CC4 */ void settingBeforeDraw();
    /* 80144D18 */ void setTevStr();
    /* 80144D70 */ void setShadow();
    /* 80144EDC */ void animEntry();
    /* 80145144 */ void chkFlag(int);
    /* 80145164 */ void getTevFrm();
    /* 80145180 */ void getBtpFrm();
    /* 8014519C */ void getShadowSize();
    /* 801451B4 */ void getCollisionH();
    /* 801451D0 */ void getCollisionR();
};

struct dItem_data {
    static void* field_item_res[1020];
    static u8 item_info[1020 + 4 /* padding */];
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
    /* 800436EC */ void setPtI_Id(unsigned int);
};

struct dEvent_manager_c {
    /* 80047ADC */ void endCheckOld(char const*);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80C38E3C */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80C38F08 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80C38E98 */ ~dBgS_AcchCir();
};

struct dBgS {};

struct cXyz {
    /* 80266B84 */ void operator*(f32) const;
};

struct csXyz {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGPla {
    /* 80C38974 */ ~cM3dGPla();
};

struct cM3dGCyl {
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80C38DAC */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80C38DF4 */ ~cM3dGAab();
};

struct cCcD_GStts {
    /* 80C395E8 */ ~cCcD_GStts();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct cBgS {
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

//
// Forward References:
//

extern "C" static void Reflect__FP4cXyzRC13cBgS_PolyInfof();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void initBaseMtx__15daItemKantera_cFv();
extern "C" void setBaseMtx__15daItemKantera_cFv();
extern "C" void Create__15daItemKantera_cFv();
extern "C" bool __CreateHeap__15daItemKantera_cFv();
extern "C" void create__15daItemKantera_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void bg_check__15daItemKantera_cFv();
extern "C" void actionInit__15daItemKantera_cFv();
extern "C" void actionWaitInit__15daItemKantera_cFv();
extern "C" void actionWait__15daItemKantera_cFv();
extern "C" void initActionOrderGetDemo__15daItemKantera_cFv();
extern "C" void actionOrderGetDemo__15daItemKantera_cFv();
extern "C" void actionGetDemo__15daItemKantera_cFv();
extern "C" void execute__15daItemKantera_cFv();
extern "C" void draw__15daItemKantera_cFv();
extern "C" void _delete__15daItemKantera_cFv();
extern "C" static void daItemKantera_Draw__FP15daItemKantera_c();
extern "C" static void daItemKantera_Execute__FP15daItemKantera_c();
extern "C" static void daItemKantera_Delete__FP15daItemKantera_c();
extern "C" static void daItemKantera_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" static void func_80C39630();
extern "C" static void func_80C39638();
extern "C" extern char const* const d_a_obj_kantera__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_orderItemEvent__FP10fopAc_ac_cUsUs();
extern "C" void fopAcM_createItemForTrBoxDemo__FPC4cXyziiiPC5csXyzPC4cXyz();
extern "C" void fopAcM_cancelCarryNow__FP10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void hide__12daItemBase_cFv();
extern "C" void show__12daItemBase_cFv();
extern "C" void chkDraw__12daItemBase_cFv();
extern "C" void CheckFieldItemCreateHeap__FP10fopAc_ac_c();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setPtI_Id__14dEvt_control_cFUi();
extern "C" void endCheckOld__16dEvent_manager_cFPCc();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void checkItemGet__FUci();
extern "C" void DeleteBase__12daItemBase_cFPCc();
extern "C" bool clothCreate__12daItemBase_cFv();
extern "C" void DrawBase__12daItemBase_cFv();
extern "C" void RotateYBase__12daItemBase_cFv();
extern "C" void setListStart__12daItemBase_cFv();
extern "C" void settingBeforeDraw__12daItemBase_cFv();
extern "C" void setTevStr__12daItemBase_cFv();
extern "C" void setShadow__12daItemBase_cFv();
extern "C" void animEntry__12daItemBase_cFv();
extern "C" void chkFlag__12daItemBase_cFi();
extern "C" void getTevFrm__12daItemBase_cFv();
extern "C" void getBtpFrm__12daItemBase_cFv();
extern "C" void getShadowSize__12daItemBase_cFv();
extern "C" void getCollisionH__12daItemBase_cFv();
extern "C" void getCollisionR__12daItemBase_cFv();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareMag();
extern "C" void C_VECReflect();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" void* field_item_res__10dItem_data[1020];
extern "C" u8 item_info__10dItem_data[1020 + 4 /* padding */];
extern "C" extern void* __vt__12daItemBase_c[17 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u8 data_80C39860[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C39648-80C3968C 000000 0044+00 4/4 0/0 0/0 .rodata          l_cyl_src */
SECTION_RODATA static u8 const l_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x59,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C39648, &l_cyl_src);

/* 80C3968C-80C39690 000044 0004+00 0/3 0/0 0/0 .rodata          @3855 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3855[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80C3968C, &lit_3855);
#pragma pop

/* 80C39690-80C39698 000048 0008+00 0/1 0/0 0/0 .rodata          @3856 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3856[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C39690, &lit_3856);
#pragma pop

/* 80C39698-80C396A0 000050 0008+00 0/1 0/0 0/0 .rodata          @3857 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3857[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C39698, &lit_3857);
#pragma pop

/* 80C396A0-80C396A8 000058 0008+00 0/1 0/0 0/0 .rodata          @3858 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3858[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C396A0, &lit_3858);
#pragma pop

/* 80C396DC-80C396E8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C396E8-80C396FC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80C396FC-80C39708 -00001 000C+00 0/1 0/0 0/0 .data            @4184 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4184[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionInit__15daItemKantera_cFv,
};
#pragma pop

/* 80C39708-80C39714 -00001 000C+00 0/1 0/0 0/0 .data            @4185 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4185[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__15daItemKantera_cFv,
};
#pragma pop

/* 80C39714-80C39720 -00001 000C+00 0/1 0/0 0/0 .data            @4186 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4186[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderGetDemo__15daItemKantera_cFv,
};
#pragma pop

/* 80C39720-80C3972C -00001 000C+00 0/1 0/0 0/0 .data            @4187 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4187[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionGetDemo__15daItemKantera_cFv,
};
#pragma pop

/* 80C3972C-80C3975C 000050 0030+00 0/1 0/0 0/0 .data            l_demoFunc$4183 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_demoFunc[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C3975C-80C3977C -00001 0020+00 1/0 0/0 0/0 .data            l_daItemKantera_Method */
SECTION_DATA static void* l_daItemKantera_Method[8] = {
    (void*)daItemKantera_Create__FP10fopAc_ac_c,
    (void*)daItemKantera_Delete__FP15daItemKantera_c,
    (void*)daItemKantera_Execute__FP15daItemKantera_c,
    (void*)NULL,
    (void*)daItemKantera_Draw__FP15daItemKantera_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C3977C-80C397AC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Kantera */
SECTION_DATA extern void* g_profile_Obj_Kantera[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x021A0000, (void*)&g_fpcLf_Method,
    (void*)0x00000948, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00EE0000, (void*)&l_daItemKantera_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C397AC-80C397B8 0000D0 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80C397B8-80C397C4 0000DC 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C397C4-80C397D0 0000E8 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C397D0-80C397DC 0000F4 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C397DC-80C397E8 000100 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C397E8-80C3980C 00010C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C39638,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C39630,
};

/* 80C3980C-80C39850 000130 0044+00 1/1 0/0 0/0 .data            __vt__15daItemKantera_c */
SECTION_DATA extern void* __vt__15daItemKantera_c[17] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)DrawBase__12daItemBase_cFv,
    (void*)setListStart__12daItemBase_cFv,
    (void*)settingBeforeDraw__12daItemBase_cFv,
    (void*)setTevStr__12daItemBase_cFv,
    (void*)setShadow__12daItemBase_cFv,
    (void*)animEntry__12daItemBase_cFv,
    (void*)RotateYBase__12daItemBase_cFv,
    (void*)clothCreate__12daItemBase_cFv,
    (void*)__CreateHeap__15daItemKantera_cFv,
    (void*)chkFlag__12daItemBase_cFi,
    (void*)getTevFrm__12daItemBase_cFv,
    (void*)getBtpFrm__12daItemBase_cFv,
    (void*)getShadowSize__12daItemBase_cFv,
    (void*)getCollisionH__12daItemBase_cFv,
    (void*)getCollisionR__12daItemBase_cFv,
};

/* 80C39850-80C3985C 000174 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80C38678-80C38974 000078 02FC+00 1/1 0/0 0/0 .text            Reflect__FP4cXyzRC13cBgS_PolyInfof
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void Reflect(cXyz* param_0, cBgS_PolyInfo const& param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/Reflect__FP4cXyzRC13cBgS_PolyInfof.s"
}
#pragma pop

/* 80C38974-80C389BC 000374 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* 80C389BC-80C389F8 0003BC 003C+00 1/1 0/0 0/0 .text            initBaseMtx__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/initBaseMtx__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C389F8-80C38A64 0003F8 006C+00 2/2 0/0 0/0 .text            setBaseMtx__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/setBaseMtx__15daItemKantera_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C396A8-80C396AC 000060 0004+00 0/1 0/0 0/0 .rodata          @3910 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3910 = 30.0f;
COMPILER_STRIP_GATE(80C396A8, &lit_3910);
#pragma pop

/* 80C396AC-80C396B0 000064 0004+00 0/1 0/0 0/0 .rodata          @3911 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3911 = -6.0f;
COMPILER_STRIP_GATE(80C396AC, &lit_3911);
#pragma pop

/* 80C396B0-80C396B8 000068 0008+00 0/1 0/0 0/0 .rodata          @3913 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3913[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C396B0, &lit_3913);
#pragma pop

/* 80C38A64-80C38BA8 000464 0144+00 1/1 0/0 0/0 .text            Create__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/Create__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C38BA8-80C38BB0 0005A8 0008+00 1/0 0/0 0/0 .text            __CreateHeap__15daItemKantera_cFv
 */
bool daItemKantera_c::__CreateHeap() {
    return true;
}

/* 80C38BB0-80C38DAC 0005B0 01FC+00 1/1 0/0 0/0 .text            create__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/func_80C38BB0.s"
}
#pragma pop

/* 80C38DAC-80C38DF4 0007AC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C38DF4-80C38E3C 0007F4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C38E3C-80C38E98 00083C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C38E98-80C38F08 000898 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80C38F08-80C38F78 000908 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C396B8-80C396BC 000070 0004+00 0/1 0/0 0/0 .rodata          @4076 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4076 = 5.0f;
COMPILER_STRIP_GATE(80C396B8, &lit_4076);
#pragma pop

/* 80C396BC-80C396C0 000074 0004+00 0/2 0/0 0/0 .rodata          @4077 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4077 = 1.0f;
COMPILER_STRIP_GATE(80C396BC, &lit_4077);
#pragma pop

/* 80C396C0-80C396C4 000078 0004+00 0/1 0/0 0/0 .rodata          @4078 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4078 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(80C396C0, &lit_4078);
#pragma pop

/* 80C396C4-80C396C8 00007C 0004+00 0/1 0/0 0/0 .rodata          @4079 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4079 = 3.0f;
COMPILER_STRIP_GATE(80C396C4, &lit_4079);
#pragma pop

/* 80C38F78-80C39068 000978 00F0+00 1/1 0/0 0/0 .text            bg_check__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::bg_check() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/bg_check__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C39068-80C390A0 000A68 0038+00 1/0 0/0 0/0 .text            actionInit__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::actionInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/actionInit__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C390A0-80C3911C 000AA0 007C+00 2/2 0/0 0/0 .text            actionWaitInit__15daItemKantera_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::actionWaitInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/actionWaitInit__15daItemKantera_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C396C8-80C396CC 000080 0004+00 0/1 0/0 0/0 .rodata          @4145 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4145 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(80C396C8, &lit_4145);
#pragma pop

/* 80C3911C-80C39234 000B1C 0118+00 1/0 0/0 0/0 .text            actionWait__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/actionWait__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C39234-80C392D0 000C34 009C+00 1/1 0/0 0/0 .text initActionOrderGetDemo__15daItemKantera_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::initActionOrderGetDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/initActionOrderGetDemo__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C392D0-80C3934C 000CD0 007C+00 1/0 0/0 0/0 .text actionOrderGetDemo__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::actionOrderGetDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/actionOrderGetDemo__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C3934C-80C393B0 000D4C 0064+00 1/0 0/0 0/0 .text            actionGetDemo__15daItemKantera_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::actionGetDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/actionGetDemo__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C393B0-80C394DC 000DB0 012C+00 1/1 0/0 0/0 .text            execute__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/execute__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C394DC-80C39530 000EDC 0054+00 1/1 0/0 0/0 .text            draw__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/draw__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C39530-80C39568 000F30 0038+00 1/1 0/0 0/0 .text            _delete__15daItemKantera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/_delete__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C39568-80C39588 000F68 0020+00 1/0 0/0 0/0 .text daItemKantera_Draw__FP15daItemKantera_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daItemKantera_Draw(daItemKantera_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/daItemKantera_Draw__FP15daItemKantera_c.s"
}
#pragma pop

/* 80C39588-80C395A8 000F88 0020+00 1/0 0/0 0/0 .text daItemKantera_Execute__FP15daItemKantera_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daItemKantera_Execute(daItemKantera_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/daItemKantera_Execute__FP15daItemKantera_c.s"
}
#pragma pop

/* 80C395A8-80C395C8 000FA8 0020+00 1/0 0/0 0/0 .text daItemKantera_Delete__FP15daItemKantera_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daItemKantera_Delete(daItemKantera_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/daItemKantera_Delete__FP15daItemKantera_c.s"
}
#pragma pop

/* 80C395C8-80C395E8 000FC8 0020+00 1/0 0/0 0/0 .text daItemKantera_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daItemKantera_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/daItemKantera_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C395E8-80C39630 000FE8 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C39630-80C39638 001030 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C39630() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/func_80C39630.s"
}
#pragma pop

/* 80C39638-80C39640 001038 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C39638() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/func_80C39638.s"
}
#pragma pop

/* 80C396CC-80C396DC 000084 0010+00 1/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C396CC = "DEFAULT_GETITEM";
#pragma pop
