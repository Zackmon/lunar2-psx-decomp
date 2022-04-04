#include "common.h"

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", main);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019084);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019140);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_800192B8);
int func_800192B8();                                  /* extern */
INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019350);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_800193F4);
int func_800193F4();                                  /* extern */

void func_8001946C(void) {
    func_800193F4();
    func_800192B8();
}

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019494);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_800194E0);



void func_80019544(void) {
    func_80022C84(1);
    func_80022998(1);
}

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_8001956C);



void func_8001959C(void) {
    func_8001BC1C(0);
    func_800229CC();
}


INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_800195C4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_800195EC);


void func_8001966C(void) {
    func_8001D180();
    func_80022998(1);
}


INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019694);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019770);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_8001982C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019A04);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019A50);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019AA0);



int func_80019BC4(void) {
    return func_800235DC();
}

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019BE4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019C68);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019E68);

void func_80019F0C(u_short* a1, u_short* a2, int a3) {

    int result;
    
    if (0 < a3){
        do {

            result = *a2;
            a2++;
            a3 -= 2;
            *a1 = result;
            a1++;
        }while (0 < a3);
    }
    
    }

void func_80019F34(int* a1, int* a2, int a3) {
   int result;
    
    if (0 < a3){
        do {

            result = *a2;
            a2++;
            a3 -= 4;
            *a1 = result;
            a1++;
        }while (0 < a3);
    }
    
}

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_80019F5C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_8001A014);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_8001A108);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_8001A1FC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/9808", func_8001A358);
