//
// Generated By: dol2asm
// Translation Unit: CPlusLibPPC
//

#include "Runtime.PPCEABI.H/CPlusLibPPC.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __copy();

//
// External References:
//

//
// Declarations:
//

/* 80361C3C-80361C6C 35C57C 0030+00 0/0 0/0 4/4 .text            __copy */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __copy() {
    nofralloc
#include "asm/Runtime.PPCEABI.H/CPlusLibPPC/__copy.s"
}
#pragma pop