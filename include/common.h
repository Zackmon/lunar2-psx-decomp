//
// Created by live2 on 3/13/2022.
//

#ifndef LUNAR2ISO_COMMON_H
#define LUNAR2ISO_COMMON_H

#include <memory.h>
#include <types.h>
#include <libetc.h>
#include <libpad.h>
#include <libapi.h>
#include <libspu.h>
#include <libsnd.h>
#include <libcd.h>
#include "globalVar.h"

/*#define INCLUDE_ASM(FOLDER, NAME) \
__asm__( \
    ".section .text\n" \
    "\t.align\t2\n" \
    "\t.globl\t"#NAME"\n" \
    "\t.ent\t"#NAME"\n" \
    #NAME ":\n" \
    ".include \""FOLDER"/"#NAME".s\"\n" \
    "\t.set reorder\n" \
    "\t.set at\n" \
    "\t.end\t"#NAME \
);
// omit .global
__asm__(".include \"macro.inc\"\n");*/


#endif //LUNAR2ISO_COMMON_H
