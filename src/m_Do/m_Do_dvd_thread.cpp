/* m_Do_dvd_thread.cpp autogenerated by split.py v0.4 at 2021-01-31 21:23:39.416871 */

#include "global.h"

// additional symbols needed for m_Do_dvd_thread.cpp
// autogenerated by split.py v0.4 at 2021-01-31 21:23:39.416919
extern "C" {
void JASDvd_NS_getThreadPointer(void);
void JASTaskThread_NS_sendCmdMsg(void);
void __ct__13JKRMemArchiveFlQ210JKRArchive15EMountDirection(void);
void __ct__9JKRThreadFP8OSThreadi(void);
void __dl__FPv(void);
void __dt__9JKRThreadFv(void);
void __nw__FUlP7JKRHeapi(void);
void _restgpr_25(void);
void _restgpr_27(void);
void _restgpr_28(void);
void _restgpr_29(void);
void _savegpr_25(void);
void _savegpr_27(void);
void _savegpr_28(void);
void _savegpr_29(void);
void becomeCurrentHeap__7JKRHeapFv(void);
void cLs_Addition(void);
void cLs_Create(void);
void cLs_SingleCut(void);
void cNd_ForcedClear(void);
void cb(void);
void func_80015BB8(void);
void func_80015CF0(void);
void func_80015D44(void);
void func_80015EDC(void);
void func_80016108(void);
void func_800162B0(void);
void func_8001645C(void);
void func_800164BC(void);
void func_80016574(void);
void getSize__7JKRHeapCFPv(void);
void loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl(
    void);
void mDoDvdThd_NS_create(void);
void mDoDvdThd_NS_main(void);
void mDoDvdThd_NS_suspend(void);
void mDoDvdThd_callback_c(void);
void mDoDvdThd_callback_c_NS_create(void);
void mDoDvdThd_command_c(void);
void mDoDvdThd_command_c_NS_dtor(void);
void mDoDvdThd_mountArchive_c(void);
void mDoDvdThd_mountArchive_c_NS_create(void);
void mDoDvdThd_mountXArchive_c(void);
void mDoDvdThd_mountXArchive_c_NS_create(void);
void mDoDvdThd_param_c(void);
void mDoDvdThd_param_c_NS_addition(void);
void mDoDvdThd_param_c_NS_cut(void);
void mDoDvdThd_param_c_NS_getFirstCommand(void);
void mDoDvdThd_param_c_NS_kick(void);
void mDoDvdThd_param_c_NS_mainLoop(void);
void mDoDvdThd_param_c_NS_waitForKick(void);
void mDoDvdThd_toMainRam_c(void);
void mDoDvdThd_toMainRam_c_NS_create(void);
void mDoExt_getArchiveHeap(void);
void mDoExt_getArchiveHeapPtr(void);
void mDoExt_getAssertHeap(void);
void mDoExt_getCommandHeap(void);
void mDoExt_getGameHeap(void);
void mDoExt_getJ2dHeap(void);
void mDoExt_getZeldaHeap(void);
void mount__10JKRArchiveFlQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection(void);
void my_DVDConvertPathToEntrynum(void);
}

// additional symbols needed for m_Do_dvd_thread.cpp
// autogenerated by split.py v0.4 at 2021-01-31 21:23:39.416924
extern u8 lbl_803741A8;
extern u8 lbl_803A34A8;
extern u8 lbl_803A34B8;
extern u8 lbl_803A34C8;
extern u8 lbl_803A34D8;
extern u8 lbl_803A34E8;
extern u8 lbl_803DD940;
extern u8 lbl_803DEC60;
extern u8 lbl_80450C80;
extern u8 lbl_80450C81;

extern "C" {
// main__9mDoDvdThdFPv
// mDoDvdThd::main(void*)
asm void mDoDvdThd_NS_main(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_800157FC.s"
}

// create__9mDoDvdThdFl
// mDoDvdThd::create(s32)
asm void mDoDvdThd_NS_create(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015858.s"
}

// suspend__9mDoDvdThdFv
// mDoDvdThd::suspend(void)
asm void mDoDvdThd_NS_suspend(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_800158B4.s"
}

// my_DVDConvertPathToEntrynum__FPCc
// my_DVDConvertPathToEntrynum(const s8*)
asm void my_DVDConvertPathToEntrynum(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_800158DC.s"
}

// __dt__19mDoDvdThd_command_cFv
// mDoDvdThd_command_c::~mDoDvdThd_command_c(void)
asm void mDoDvdThd_command_c_NS_dtor(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_800158FC.s"
}

// __ct__17mDoDvdThd_param_cFv
// mDoDvdThd_param_c::mDoDvdThd_param_c(void)
asm void mDoDvdThd_param_c(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015944.s"
}

// kick__17mDoDvdThd_param_cFv
// mDoDvdThd_param_c::kick(void)
asm void mDoDvdThd_param_c_NS_kick(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_8001598C.s"
}

// waitForKick__17mDoDvdThd_param_cFv
// mDoDvdThd_param_c::waitForKick(void)
asm void mDoDvdThd_param_c_NS_waitForKick(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_800159B4.s"
}

// getFirstCommand__17mDoDvdThd_param_cFv
// mDoDvdThd_param_c::getFirstCommand(void)
asm void mDoDvdThd_param_c_NS_getFirstCommand(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_800159DC.s"
}

// addition__17mDoDvdThd_param_cFP19mDoDvdThd_command_c
// mDoDvdThd_param_c::addition(mDoDvdThd_command_c*)
asm void mDoDvdThd_param_c_NS_addition(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_800159E4.s"
}

// cut__17mDoDvdThd_param_cFP19mDoDvdThd_command_c
// mDoDvdThd_param_c::cut(mDoDvdThd_command_c*)
asm void mDoDvdThd_param_c_NS_cut(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015A3C.s"
}

// cb__FPv
// cb(void*)
asm void cb(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015A90.s"
}

// mainLoop__17mDoDvdThd_param_cFv
// mDoDvdThd_param_c::mainLoop(void)
asm void mDoDvdThd_param_c_NS_mainLoop(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015AD8.s"
}

// __ct__19mDoDvdThd_command_cFv
// mDoDvdThd_command_c::mDoDvdThd_command_c(void)
asm void mDoDvdThd_command_c(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015B74.s"
}

// __dt__20mDoDvdThd_callback_cFv
// mDoDvdThd_callback_c::~mDoDvdThd_callback_c(void)
asm void func_80015BB8(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015BB8.s"
}

// __ct__20mDoDvdThd_callback_cFPFPv_PvPv
// mDoDvdThd_callback_c::mDoDvdThd_callback_c(void* (*)(void*), void*)
asm void mDoDvdThd_callback_c(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015C18.s"
}

// create__20mDoDvdThd_callback_cFPFPv_PvPv
// mDoDvdThd_callback_c::create(void* (*)(void*), void*)
asm void mDoDvdThd_callback_c_NS_create(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015C74.s"
}

// execute__20mDoDvdThd_callback_cFv
// mDoDvdThd_callback_c::execute(void)
asm void func_80015CF0(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015CF0.s"
}

// __dt__24mDoDvdThd_mountArchive_cFv
// mDoDvdThd_mountArchive_c::~mDoDvdThd_mountArchive_c(void)
asm void func_80015D44(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015D44.s"
}

// __ct__24mDoDvdThd_mountArchive_cFUc
// mDoDvdThd_mountArchive_c::mDoDvdThd_mountArchive_c(u8)
asm void mDoDvdThd_mountArchive_c(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015DA4.s"
}

// create__24mDoDvdThd_mountArchive_cFPCcUcP7JKRHeap
// mDoDvdThd_mountArchive_c::create(const s8*, u8, JKRHeap*)
asm void mDoDvdThd_mountArchive_c_NS_create(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015E14.s"
}

// execute__24mDoDvdThd_mountArchive_cFv
// mDoDvdThd_mountArchive_c::execute(void)
asm void func_80015EDC(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80015EDC.s"
}

// __dt__25mDoDvdThd_mountXArchive_cFv
// mDoDvdThd_mountXArchive_c::~mDoDvdThd_mountXArchive_c(void)
asm void func_80016108(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80016108.s"
}

// __ct__25mDoDvdThd_mountXArchive_cFUcQ210JKRArchive10EMountMode
// mDoDvdThd_mountXArchive_c::mDoDvdThd_mountXArchive_c(u8, JKRArchive::EMountMode)
asm void mDoDvdThd_mountXArchive_c(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80016168.s"
}

// create__25mDoDvdThd_mountXArchive_cFPCcUcQ210JKRArchive10EMountModeP7JKRHeap
// mDoDvdThd_mountXArchive_c::create(const s8*, u8, JKRArchive::EMountMode, JKRHeap*)
asm void mDoDvdThd_mountXArchive_c_NS_create(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_800161E0.s"
}

// execute__25mDoDvdThd_mountXArchive_cFv
// mDoDvdThd_mountXArchive_c::execute(void)
asm void func_800162B0(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_800162B0.s"
}

// __ct__21mDoDvdThd_toMainRam_cFUc
// mDoDvdThd_toMainRam_c::mDoDvdThd_toMainRam_c(u8)
asm void mDoDvdThd_toMainRam_c(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80016338.s"
}

// create__21mDoDvdThd_toMainRam_cFPCcUcP7JKRHeap
// mDoDvdThd_toMainRam_c::create(const s8*, u8, JKRHeap*)
asm void mDoDvdThd_toMainRam_c_NS_create(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80016394.s"
}

// __dt__21mDoDvdThd_toMainRam_cFv
// mDoDvdThd_toMainRam_c::~mDoDvdThd_toMainRam_c(void)
asm void func_8001645C(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_8001645C.s"
}

// execute__21mDoDvdThd_toMainRam_cFv
// mDoDvdThd_toMainRam_c::execute(void)
asm void func_800164BC(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_800164BC.s"
}

// __sinit_m_Do_dvd_thread_cpp
//
asm void func_80016574(void) {
    nofralloc
#include "m_Do/m_Do_dvd_thread/asm/func_80016574.s"
}
};
