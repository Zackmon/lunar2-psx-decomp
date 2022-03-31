#include "common.h"

#ifndef NON_EQUIVALENT
INCLUDE_ASM("config/../asm/boot/nonmatchings/69564", InitMemoryCard_80078D64);
#else
void InitMemoryCard_80078D64(int arg0) {
    InitCARD_0(arg0);
    StartCARD();
    _bu_init();
}
#endif

