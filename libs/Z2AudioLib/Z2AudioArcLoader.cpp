//
// Generated By: dol2asm
// Translation Unit: Z2AudioArcLoader
//

#include "Z2AudioLib/Z2AudioArcLoader.h"
#include "dol2asm.h"

//
// Types:
//

struct JKRHeap {
    static u8 sCurrentHeap[4];
};

struct JKRArchive {
    struct EMountDirection {};

    /* 802D5840 */ void mount(void*, JKRHeap*, JKRArchive::EMountDirection);
};

struct Z2FxLineMgr {
    /* 802BA7FC */ void initDataArc(JKRArchive*, JKRHeap*);
};

struct JAUSectionHeap {
    /* 802A6094 */ void getOpenSection();
};

//
// Forward References:
//

extern "C" void __ct__16Z2AudioArcLoaderFP10JAUSection();
extern "C" void readCommandMore__16Z2AudioArcLoaderFUl();
extern "C" void readBFCA__16Z2AudioArcLoaderFPCv();
extern "C" void readBSTN__16Z2AudioArcLoaderFPCvUl();
extern "C" void __dt__16Z2AudioArcLoaderFv();

//
// External References:
//

extern "C" void __dt__22JAUAudioArcInterpreterFv();
extern "C" void __ct__17JAUAudioArcLoaderFP10JAUSection();
extern "C" void readWS__17JAUAudioArcLoaderFUlPCvUl();
extern "C" void readBNK__17JAUAudioArcLoaderFUlPCv();
extern "C" void readBSC__17JAUAudioArcLoaderFPCvUl();
extern "C" void readBST__17JAUAudioArcLoaderFPCvUl();
extern "C" void readBMS__17JAUAudioArcLoaderFUlPCvUl();
extern "C" void readBMS_fromArchive__17JAUAudioArcLoaderFUl();
extern "C" void newVoiceBank__17JAUAudioArcLoaderFUlUl();
extern "C" void newDynamicSeqBlock__17JAUAudioArcLoaderFUl();
extern "C" void readBSFT__17JAUAudioArcLoaderFPCv();
extern "C" void beginBNKList__17JAUAudioArcLoaderFUlUl();
extern "C" void endBNKList__17JAUAudioArcLoaderFv();
extern "C" void readMaxSeCategory__17JAUAudioArcLoaderFiii();
extern "C" void getOpenSection__14JAUSectionHeapFv();
extern "C" void initDataArc__11Z2FxLineMgrFP10JKRArchiveP7JKRHeap();
extern "C" void __dl__FPv();
extern "C" void mount__10JKRArchiveFPvP7JKRHeapQ210JKRArchive15EMountDirection();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__17JAUAudioArcLoader[17 + 1 /* padding */];
extern "C" extern u8 data_80450B40[4];
extern "C" extern u8 data_80450CC0[4 + 4 /* padding */];
extern "C" u8 sCurrentHeap__7JKRHeap[4];
extern "C" extern u8 __OSReport_disable;

//
// Declarations:
//

/* ############################################################################################## */
/* 803C9CD0-803C9D18 026DF0 0044+04 2/2 1/1 0/0 .data            __vt__16Z2AudioArcLoader */
SECTION_DATA extern void* __vt__16Z2AudioArcLoader[17 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16Z2AudioArcLoaderFv,
    (void*)readWS__17JAUAudioArcLoaderFUlPCvUl,
    (void*)readBNK__17JAUAudioArcLoaderFUlPCv,
    (void*)readBSC__17JAUAudioArcLoaderFPCvUl,
    (void*)readBST__17JAUAudioArcLoaderFPCvUl,
    (void*)readBSTN__16Z2AudioArcLoaderFPCvUl,
    (void*)readBMS__17JAUAudioArcLoaderFUlPCvUl,
    (void*)readBMS_fromArchive__17JAUAudioArcLoaderFUl,
    (void*)newVoiceBank__17JAUAudioArcLoaderFUlUl,
    (void*)newDynamicSeqBlock__17JAUAudioArcLoaderFUl,
    (void*)readBSFT__17JAUAudioArcLoaderFPCv,
    (void*)readMaxSeCategory__17JAUAudioArcLoaderFiii,
    (void*)beginBNKList__17JAUAudioArcLoaderFUlUl,
    (void*)endBNKList__17JAUAudioArcLoaderFv,
    (void*)readCommandMore__16Z2AudioArcLoaderFUl,
    /* padding */
    NULL,
};

/* 802A9A34-802A9A70 2A4374 003C+00 0/0 1/1 0/0 .text __ct__16Z2AudioArcLoaderFP10JAUSection */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2AudioArcLoader::Z2AudioArcLoader(JAUSection* param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioArcLoader/__ct__16Z2AudioArcLoaderFP10JAUSection.s"
}
#pragma pop

/* 802A9A70-802A9AC8 2A43B0 0058+00 1/0 0/0 0/0 .text readCommandMore__16Z2AudioArcLoaderFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2AudioArcLoader::readCommandMore(u32 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioArcLoader/readCommandMore__16Z2AudioArcLoaderFUl.s"
}
#pragma pop

/* 802A9AC8-802A9B54 2A4408 008C+00 1/1 0/0 0/0 .text            readBFCA__16Z2AudioArcLoaderFPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2AudioArcLoader::readBFCA(void const* param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioArcLoader/readBFCA__16Z2AudioArcLoaderFPCv.s"
}
#pragma pop

/* 802A9B54-802A9B58 2A4494 0004+00 1/0 0/0 0/0 .text            readBSTN__16Z2AudioArcLoaderFPCvUl
 */
void Z2AudioArcLoader::readBSTN(void const* param_0, u32 param_1) {
    /* empty function */
}

/* 802A9B58-802A9BC8 2A4498 0070+00 1/0 0/0 0/0 .text            __dt__16Z2AudioArcLoaderFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2AudioArcLoader::~Z2AudioArcLoader() {
    nofralloc
#include "asm/Z2AudioLib/Z2AudioArcLoader/__dt__16Z2AudioArcLoaderFv.s"
}
#pragma pop
