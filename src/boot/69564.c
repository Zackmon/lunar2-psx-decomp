#include "common.h"

//INCLUDE_ASM("config/../asm/boot/nonmatchings/69564", InitMemoryCard_80078D64);

void InitMemoryCard_80078D64(int arg0) {
    InitCARD_0(arg0);
    StartCARD();
    _bu_init();
}

