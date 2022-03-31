#include "common.h"

#ifdef BLOCK
extern int D_80088558;
extern int CD_sync( int mode, unsigned char *result);
#endif

#ifndef NON_EQUIVALENT
INCLUDE_ASM("config/../asm/boot/nonmatchings/59C64", func_80069464);
#else
// functionality is correct but assembly is not matching
 int func_80069464(int arg0) {
    
    int var1;
    var1 = D_80088558;
    D_80088558 = arg0;
    return var1;
}

#endif

#ifndef BLOCK
INCLUDE_ASM("config/../asm/boot/nonmatchings/59C64", CallCdSync_80069484);
#else

void CallCdSync_80069484(int arg0, unsigned char* arg1) {

    CD_sync(arg0, arg1);
}
#endif
