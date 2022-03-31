#include "common.h"

INCLUDE_ASM("config/../asm/boot/nonmatchings/95BC", func_80018DBC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/95BC", func_80018F20);

#ifndef BLOCK
INCLUDE_ASM("config/../asm/boot/nonmatchings/95BC", TerminateSPUCall_80018FE8);
#else
void TerminateSPUCall_80018FE8(void) {
    TerminateSPU_800172AC();
}
#endif
