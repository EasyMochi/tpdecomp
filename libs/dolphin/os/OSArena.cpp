//
// Generated By: dol2asm
// Translation Unit: OSArena
//

#include "dolphin/os/OSArena.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" u32 OSGetArenaHi();
extern "C" u32 OSGetArenaLo();
extern "C" void OSSetArenaHi();
extern "C" void OSSetArenaLo();
extern "C" void OSAllocFromArenaLo();

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 80451650-80451658 000B50 0004+04 2/1 0/0 0/0 .sbss            __OSArenaHi */
static u8 __OSArenaHi[4 + 4 /* padding */];

/* 8033B28C-8033B294 -00001 0008+00 0/0 0/0 0/0 .text            OSGetArenaHi */
u32 OSGetArenaHi() {
    return *(u32*)(&__OSArenaHi);
}

/* ############################################################################################## */
/* 80450998-804509A0 000418 0004+04 3/2 0/0 0/0 .sdata           __OSArenaLo */
SECTION_SDATA static u32 __OSArenaLo[1 + 1 /* padding */] = {
    0xFFFFFFFF,
    /* padding */
    0x00000000,
};

/* 8033B294-8033B29C -00001 0008+00 0/0 0/0 0/0 .text            OSGetArenaLo */
u32 OSGetArenaLo() {
    return *(u32*)(&__OSArenaLo);
}

/* 8033B29C-8033B2A4 335BDC 0008+00 0/0 5/5 0/0 .text            OSSetArenaHi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSSetArenaHi() {
    nofralloc
#include "asm/dolphin/os/OSArena/OSSetArenaHi.s"
}
#pragma pop

/* 8033B2A4-8033B2AC 335BE4 0008+00 0/0 5/5 0/0 .text            OSSetArenaLo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSSetArenaLo() {
    nofralloc
#include "asm/dolphin/os/OSArena/OSSetArenaLo.s"
}
#pragma pop

/* 8033B2AC-8033B2D8 335BEC 002C+00 0/0 4/4 0/0 .text            OSAllocFromArenaLo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSAllocFromArenaLo() {
    nofralloc
#include "asm/dolphin/os/OSArena/OSAllocFromArenaLo.s"
}
#pragma pop
