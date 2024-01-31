//
// Generated By: dol2asm
// Translation Unit: Z2AudioMgr
//

#include "Z2AudioLib/Z2AudioMgr.h"
#include "JSystem/JAudio2/JASAiCtrl.h"
#include "JSystem/JAudio2/JASDriverIF.h"
#include "JSystem/JAudio2/JASResArcLoader.h"
#include "JSystem/JAudio2/JASSeqParser.h"
#include "JSystem/JAudio2/JAUInitializer.h"
#include "JSystem/JAudio2/JAUSectionHeap.h"
#include "JSystem/JAudio2/JAUStreamAramMgr.h"
#include "JSystem/JKernel/JKRSolidHeap.h"
#include "Z2AudioLib/Z2AudioArcLoader.h"
#include "Z2AudioLib/Z2SoundHandles.h"
#include "stdio.h"
#include "stdlib.h"
#include "dol2asm.h"
#include "dolphin/os.h"

//
// Types:
//

struct Z2Param {
    static f32 VOL_BGM_DEFAULT;
    static f32 VOL_SE_SYSTEM_DEFAULT;
    static f32 VOL_SE_LINK_VOICE_DEFAULT;
    static f32 VOL_SE_LINK_MOTION_DEFAULT;
    static f32 VOL_SE_LINK_FOOTNOTE_DEFAULT;
    static f32 VOL_SE_CHAR_VOICE_DEFAULT;
    static f32 VOL_SE_CHAR_MOVE_DEFAULT;
    static f32 VOL_SE_OBJECT_DEFAULT;
    static f32 VOL_SE_ATMOSPHERE_DEFAULT;
};

//
// Forward References:
//

extern "C" void __ct__10Z2AudioMgrFv();
extern "C" void init__10Z2AudioMgrFP12JKRSolidHeapUlPvP10JKRArchive();
extern "C" void func_802CD7F8(void* _this);
extern "C" void setOutputMode__10Z2AudioMgrFUl();
extern "C" void zeldaGFrameWork__10Z2AudioMgrFv();
extern "C" void gframeProcess__10Z2AudioMgrFv();
extern "C" void resetProcess__10Z2AudioMgrFUlb();
extern "C" void resetRecover__10Z2AudioMgrFv();
extern "C" void hasReset__10Z2AudioMgrCFv();
extern "C" void func_802CDB1C();
extern "C" void func_802CDB68(void* _this);
extern "C" void func_802CDC08(void* _this, u32);
extern "C" void func_802CDCEC(void* _this, u32*);
extern "C" extern char const* const Z2AudioMgr__stringBase0;
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// External References:
//

extern "C" void alloc__7JASHeapFP7JASHeapUl();
extern "C" void free__7JASHeapFv();
extern "C" void __ct__17JASGenericMemPoolFv();
extern "C" void newMemPool__17JASGenericMemPoolFUli();
extern "C" void getAramHeap__9JASKernelFv();
extern "C" void __dt__7JASHeapFv();
extern "C" void getResMaxSize__15JASResArcLoaderFPC10JKRArchive();
extern "C" void getSubFrames__9JASDriverFv();
extern "C" void __ct__15JASAudioReseterFv();
extern "C" void start__15JASAudioReseterFUlb();
extern "C" void resume__15JASAudioReseterFv();
extern "C" void checkDone__15JASAudioReseterCFv();
extern "C" void setOutputMode__9JASDriverFUl();
extern "C" void setCategoryArrangement__8JAISeMgrFRC24JAISeCategoryArrangement();
extern "C" void setAudience__8JAISeMgrFP11JAIAudience();
extern "C" void setSeqDataMgr__8JAISeMgrFP13JAISeqDataMgr();
extern "C" void getNumActiveSe__8JAISeMgrCFv();
extern "C" void __ct__12JAISoundInfoFb();
extern "C" void moveVolume__18JAISoundParamsMoveFfUl();
extern "C" void __dt__16JAIStreamAramMgrFv();
extern "C" void __dt__22JAUAudioArcInterpreterFv();
extern "C" void load__17JAUAudioArcLoaderFPCv();
extern "C" void __defctor__7JASHeapFv();
extern "C" void __ct__18JAU_JASInitializerFv();
extern "C" void initJASystem__18JAU_JASInitializerFP12JKRSolidHeap();
extern "C" void __ct__18JAU_JAIInitializerFv();
extern "C" void initJAInterface__18JAU_JAIInitializerFv();
extern "C" void finishBuild__10JAUSectionFv();
extern "C" void setSeqDataArchive__14JAUSectionHeapFP10JKRArchive();
extern "C" void JAUNewSectionHeap__Fb();
extern "C" void newDynamicSeqBlock__14JAUSectionHeapFUl();
extern "C" void __ct__16Z2AudioArcLoaderFP10JAUSection();
extern "C" void seqCallback__FP8JASTrackUs();
extern "C" void __ct__10Z2SoundMgrFv();
extern "C" void framework__10Z2SoundMgrFv();
extern "C" void stopSync__10Z2SoundMgrFv();
extern "C" void initParams__10Z2SoundMgrFv();
extern "C" void __ct__14Z2SoundStarterFb();
extern "C" void func_802AB200(void* _this);
extern "C" void __ct__7Z2SeMgrFv();
extern "C" void initSe__7Z2SeMgrFv();
extern "C" void processSeFramework__7Z2SeMgrFv();
extern "C" void __ct__8Z2SeqMgrFv();
extern "C" void processBgmFramework__8Z2SeqMgrFv();
extern "C" void __ct__11Z2StatusMgrFv();
extern "C" void processHeartGaugeSound__11Z2StatusMgrFv();
extern "C" void menuOut__11Z2StatusMgrFv();
extern "C" void processTime__11Z2StatusMgrFv();
extern "C" void __ct__10Z2SceneMgrFv();
extern "C" void framework__10Z2SceneMgrFv();
extern "C" void __ct__11Z2FxLineMgrFv();
extern "C" void __ct__10Z2AudienceFv();
extern "C" void func_802BD288(void* _this);
extern "C" void __ct__13Z2SoundObjMgrFv();
extern "C" void __ct__12Z2SpeechMgr2Fv();
extern "C" void framework__12Z2SpeechMgr2Fv();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__12JAUSoundInfo[4 + 1 /* padding */];
extern "C" extern void* __vt__16JAIStreamAramMgr[5];
extern "C" extern void* __vt__16JAIStreamDataMgr[4 + 1 /* padding */];
extern "C" extern void* __vt__17JAUAudioArcLoader[17 + 1 /* padding */];
extern "C" extern void* __vt__16Z2AudioArcLoader[17 + 1 /* padding */];
extern "C" extern void* __vt__11Z2SoundInfo[20];
extern "C" extern u8 data_804341C4[16 + 4 /* padding */];
extern "C" extern u8 data_804341E4[16 + 4 /* padding */];
extern "C" f32 VOL_BGM_DEFAULT__7Z2Param;
extern "C" f32 VOL_SE_SYSTEM_DEFAULT__7Z2Param;
extern "C" f32 VOL_SE_LINK_VOICE_DEFAULT__7Z2Param;
extern "C" f32 VOL_SE_LINK_MOTION_DEFAULT__7Z2Param;
extern "C" f32 VOL_SE_LINK_FOOTNOTE_DEFAULT__7Z2Param;
extern "C" f32 VOL_SE_CHAR_VOICE_DEFAULT__7Z2Param;
extern "C" f32 VOL_SE_CHAR_MOVE_DEFAULT__7Z2Param;
extern "C" f32 VOL_SE_OBJECT_DEFAULT__7Z2Param;
extern "C" f32 VOL_SE_ATMOSPHERE_DEFAULT__7Z2Param;
extern "C" extern u8 data_80450B4C[4];
extern "C" extern u8 data_80450B50[4];
extern "C" u8 sCallBackFunc__12JASSeqParser[4];
extern "C" u8 sBlockSize__13JASAramStream[4];
extern "C" extern u8 data_80451348[8];
extern "C" extern u8 data_80451354[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CBF38-803CBF44 029058 000C+00 1/1 1/1 0/0 .data            __vt__10Z2AudioMgr */
SECTION_DATA extern void* __vt__10Z2AudioMgr[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)func_802CDB1C,
};

/* 80451368-80451370 000868 0004+04 1/1 251/251 900/900 .sbss            mAudioMgrPtr__10Z2AudioMgr
 */
Z2AudioMgr* Z2AudioMgr::mAudioMgrPtr;

/* 802CD248-802CD34C 2C7B88 0104+00 0/0 1/1 0/0 .text            __ct__10Z2AudioMgrFv */
// wild destructors appeared!
#ifdef NONMATCHING
Z2AudioMgr::Z2AudioMgr() : mSoundStarter(true) {
    mAudioMgrPtr = this;
    mResettingFlag = false;
    field_0x519 = false;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2AudioMgr::Z2AudioMgr() {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioMgr/__ct__10Z2AudioMgrFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8039CA58-8039CA58 0290B8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039CA58 = "Audiores/Waves/";
SECTION_DEAD static char const* const stringBase_8039CA68 = "index out of range of bitset::reset";
#pragma pop

/* 803CBF44-803CBF58 029064 0014+00 2/2 0/0 0/0 .data            __vt__26JAUStreamStaticAramMgr_<1>
 */
SECTION_DATA extern void* data_803CBF44[5] = {
    (void*)NULL /* RTTI */, (void*)NULL,          (void*)func_802CDCEC,
    (void*)func_802CDC08,   (void*)func_802CDB68,
};

/* 803CBF58-803CBF70 029078 0014+04 3/3 0/0 0/0 .data            __vt__24JAUStreamAramMgrBase_<1> */
SECTION_DATA extern void* data_803CBF58[5 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)func_802CD7F8,
    /* padding */
    NULL,
};

/* 80434268-80434274 060F88 000C+00 1/1 0/0 0/0 .bss             @3779 */
static u8 lit_3779[12];

/* 80434274-80434280 060F94 000C+00 1/1 0/0 0/0 .bss             @3783 */
static u8 lit_3783[12];

/* 80455F58-80455F5C 004558 0004+00 1/1 0/0 0/0 .sdata2          @3931 */
SECTION_SDATA2 static f32 lit_3931 = 13.0f / 10.0f;

/* 80455F5C-80455F60 00455C 0004+00 2/2 0/0 0/0 .sdata2          @3932 */
SECTION_SDATA2 static f32 lit_3932 = 1.0f;

/* 802CD34C-802CD7F8 2C7C8C 04AC+00 0/0 1/1 0/0 .text
 * init__10Z2AudioMgrFP12JKRSolidHeapUlPvP10JKRArchive          */
// JAUSectionHeap inheritance
#ifdef NONMATCHING
void Z2AudioMgr::init(JKRSolidHeap* param_0, u32 param_1, void* param_2, JKRArchive* param_3) {
    JAU_JASInitializer stack_60;
    stack_60.field_0x1c = 0x8c;
    stack_60.field_0x2c = 1.3f;
    stack_60.field_0x30 = "Audiores/Waves/";
    stack_60.field_0x04 = param_1;
    stack_60.initJASystem(param_0);
    JAU_JAIInitializer stack_90;
    stack_90.field_0x0 = 0x4e;
    stack_90.field_0x4 = 4;
    stack_90.field_0xc = 0x30;
    stack_90.initJAInterface();
    JAISeMgr *seMgr = mSoundMgr.getSeMgr();
    JAISeCategoryArrangement stack_80;
    stack_80.mItems[0].mMaxActiveSe = 4;
    stack_80.mItems[0].mMaxInactiveSe = 2;
    stack_80.mItems[1].mMaxActiveSe = 2;
    stack_80.mItems[1].mMaxInactiveSe = 1;
    stack_80.mItems[2].mMaxActiveSe = 6;
    stack_80.mItems[2].mMaxInactiveSe = 3;
    stack_80.mItems[3].mMaxActiveSe = 16;
    stack_80.mItems[3].mMaxInactiveSe = 8;
    stack_80.mItems[4].mMaxActiveSe = 8;
    stack_80.mItems[4].mMaxInactiveSe = 4;
    stack_80.mItems[5].mMaxActiveSe = 6;
    stack_80.mItems[5].mMaxInactiveSe = 3;
    stack_80.mItems[6].mMaxActiveSe = 6;
    stack_80.mItems[6].mMaxInactiveSe = 3;
    stack_80.mItems[7].mMaxActiveSe = 12;
    stack_80.mItems[7].mMaxInactiveSe = 8;
    stack_80.mItems[8].mMaxActiveSe = 10;
    stack_80.mItems[8].mMaxInactiveSe = 5;
    stack_80.mItems[9].mMaxActiveSe = 8;
    stack_80.mItems[9].mMaxInactiveSe = 4;
    stack_80.mItems[10].mMaxActiveSe = 4;
    stack_80.mItems[10].mMaxInactiveSe = 2;
    seMgr->setCategoryArrangement(stack_80);
    seMgr->getCategory(0)->getParams()->moveVolume(0.9448819f, 0);
    seMgr->getCategory(1)->getParams()->moveVolume(1.0f, 0);
    seMgr->getCategory(2)->getParams()->moveVolume(0.9448819f, 0);
    seMgr->getCategory(3)->getParams()->moveVolume(0.9448819f, 0);
    seMgr->getCategory(4)->getParams()->moveVolume(0.9448819f, 0);
    seMgr->getCategory(5)->getParams()->moveVolume(0.9448819f, 0);
    seMgr->getCategory(6)->getParams()->moveVolume(0.9448819f, 0);
    seMgr->getCategory(7)->getParams()->moveVolume(0.9448819f, 0);
    seMgr->getCategory(8)->getParams()->moveVolume(0.9448819f, 0);
    seMgr->getCategory(9)->getParams()->moveVolume(0.9448819f, 0);
    seMgr->getCategory(10)->getParams()->moveVolume(1.0f, 0);
    seMgr->getParams()->moveVolume(1.0f, 0);
    JAISeqMgr* seqMgr = mSoundMgr.getSeqMgr();
    seqMgr->getParams()->moveVolume(1.0f, 0);
    JAIStreamMgr* streamMgr = mSoundMgr.getStreamMgr();
    JAUStreamStaticAramMgr_<1>* streamStaticAramMgr = new(param_0, 0) JAUStreamStaticAramMgr_<1>();
    streamStaticAramMgr->reserveAram(NULL, 0, 0x14);
    streamMgr->setStreamAramMgr(streamStaticAramMgr);
    streamMgr->getParams()->moveVolume(1.0f, 0);
    JASPoolAllocObject<Z2Audible>::newMemPool(0x4e);
    mSoundMgr.getSeMgr()->setAudience(&mAudience);
    mSoundMgr.getSeqMgr()->setAudience(&mAudience);
    JASPoolAllocObject<Z2SoundHandlePool>::newMemPool(0x4e);
    OSReport("[Z2AudioMgr::init]before Create Section: %d\n", param_0->getFreeSize());
    JAUSectionHeap* sectionHeap = JAUNewSectionHeap(true);
    sectionHeap->setSeqDataArchive(param_3);
    size_t resMaxSize = JASResArcLoader::getResMaxSize(param_3);
    sectionHeap->newDynamicSeqBlock(0xe00);
    sectionHeap->newDynamicSeqBlock(0x17e0);
    sectionHeap->newDynamicSeqBlock(0x5380);
    sectionHeap->newDynamicSeqBlock(resMaxSize);
    Z2AudioArcLoader stack_a0(sectionHeap);
    bool baaLoadResult = stack_a0.load(param_2);
    JUT_ASSERT(252, baaLoadResult);
    seqMgr->setSeqDataMgr(sectionHeap->getSeqDataMgr());
    if (sectionHeap->getStreamDataMgr()) {
        streamMgr->setStreamDataMgr(sectionHeap->getStreamDataMgr());
    } else {
        streamMgr->setStreamDataMgr(&mSoundInfo);
    }
    sectionHeap->finishBuild();
    initSe();
    JASSeqParser::registerSeqCallback(seqCallback);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2AudioMgr::init(JKRSolidHeap* param_0, u32 param_1, void* param_2, JKRArchive* param_3) {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioMgr/init__10Z2AudioMgrFP12JKRSolidHeapUlPvP10JKRArchive.s"
}
#pragma pop
#endif

/* 802CD7F8-802CD888 2C8138 0090+00 1/0 0/0 0/0 .text            __dt__24JAUStreamAramMgrBase_<1>Fv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802CD7F8(void* _this) {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioMgr/func_802CD7F8.s"
}
#pragma pop

/* 802CD888-802CD8B4 2C81C8 002C+00 0/0 5/5 0/0 .text            setOutputMode__10Z2AudioMgrFUl */
void Z2AudioMgr::setOutputMode(u32 mode) {
    if (mode <= 2) {
        JASDriver::setOutputMode(mode);
    }
}

/* 802CD8B4-802CD904 2C81F4 0050+00 1/1 0/0 0/0 .text            zeldaGFrameWork__10Z2AudioMgrFv */
void Z2AudioMgr::zeldaGFrameWork() {
    processTime();
    mSpeechMgr.framework();
    processSeFramework();
    processBgmFramework();
    processHeartGaugeSound();
}

/* 802CD904-802CD974 2C8244 0070+00 0/0 1/1 0/0 .text            gframeProcess__10Z2AudioMgrFv */
void Z2AudioMgr::gframeProcess() {
    zeldaGFrameWork();
    if (mResettingFlag && mAudioReseter.checkDone()) {
        if (!field_0x519) {
            mSoundMgr.stopSync();
        }
    } else {
        mSoundMgr.framework();
        framework();
    }
}

/* 802CD974-802CD9CC 2C82B4 0058+00 0/0 3/3 0/0 .text            resetProcess__10Z2AudioMgrFUlb */
void Z2AudioMgr::resetProcess(u32 param_0, bool param_1) {
    mAudioReseter.start(param_0 * JASDriver::getSubFrames(), param_1);
    field_0x519 = param_1;
    mResettingFlag = true;
}

/* ############################################################################################## */
/* 80455F60-80455F68 004560 0004+04 1/1 0/0 0/0 .sdata2          @4035 */
SECTION_SDATA2 static f32 lit_4035[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 802CD9CC-802CDA6C 2C830C 00A0+00 0/0 1/1 0/0 .text            resetRecover__10Z2AudioMgrFv */
// matches with literals
#ifdef NONMATCHING
void Z2AudioMgr::resetRecover() {
    mAudioReseter.resume();
    mSoundMgr.initParams();
    mResettingFlag = false;

    mSeqMgr.setTwilightGateVol(1.0f);
    mSeqMgr.setWindStoneVol(1.0f, 0);
    mStatusMgr.menuOut();
    mSeqMgr.i_bgmAllUnMute(0);
    mSeqMgr.unMuteSceneBgm(0);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2AudioMgr::resetRecover() {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioMgr/resetRecover__10Z2AudioMgrFv.s"
}
#pragma pop
#endif

/* 802CDA6C-802CDB1C 2C83AC 00B0+00 0/0 2/2 0/0 .text            hasReset__10Z2AudioMgrCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool Z2AudioMgr::hasReset() const {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioMgr/hasReset__10Z2AudioMgrCFv.s"
}
#pragma pop

/* 802CDB1C-802CDB68 2C845C 004C+00 1/0 1/0 0/0 .text
 * startSound__10Z2AudioMgrF10JAISoundIDP14JAISoundHandlePCQ29JGeometry8TVec3<f> */
// vtable order
#ifdef NONMATCHING
bool Z2AudioMgr::startSound(JAISoundID param_0, JAISoundHandle* param_1,
                            JGeometry::TVec3<f32> const* param_2) {
    if (mResettingFlag) {
        return 0;
    }
    return mSoundMgr.startSound(param_0, param_1, param_2);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void Z2AudioMgr::startSound(JAISoundID param_0, JAISoundHandle* param_1,
//                                JGeometry::TVec3<f32> const* param_2) {
extern "C" asm void func_802CDB1C() {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioMgr/func_802CDB1C.s"
}
#pragma pop
#endif

/* 802CDB68-802CDC08 2C84A8 00A0+00 1/0 0/0 0/0 .text __dt__26JAUStreamStaticAramMgr_<1>Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802CDB68(void* _this) {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioMgr/func_802CDB68.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039CA58-8039CA58 0290B8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039CA8C = "index out of range of bitset::test";
#pragma pop

/* 802CDC08-802CDCEC 2C8548 00E4+00 1/0 0/0 0/0 .text
 * deleteStreamAram__26JAUStreamStaticAramMgr_<1>FUl            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802CDC08(void* _this, u32 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioMgr/func_802CDC08.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039CA58-8039CA58 0290B8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039CAAF = "index out of range of bitset::set";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039CAD1 = "\0\0\0\0\0\0";
#pragma pop

/* 802CDCEC-802CDDC8 2C862C 00DC+00 1/0 0/0 0/0 .text
 * newStreamAram__26JAUStreamStaticAramMgr_<1>FPUl              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802CDCEC(void* _this, u32* param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioMgr/func_802CDCEC.s"
}
#pragma pop

/* 8039CA58-8039CA58 0290B8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
