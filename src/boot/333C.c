#include "common.h"
//extern u_char D_8009B163;

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80012B3C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80012BA8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80012BB4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80012E34);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80012E70);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80012FE4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80013158);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800131E4);

void func_800132EC(void) {
}

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800132F4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001332C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001342C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800134D4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80013548);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800135D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80013A5C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014190);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800141C8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800141F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014230);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014380);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800143A4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001441C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014428);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001444C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014478);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800145C4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014660);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001476C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800147AC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800147F4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014864);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800148BC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800148D4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800149C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800149DC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800149F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014A80);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014B08);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014B1C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014B2C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80014B38);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001547C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80015490);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800154A8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80015BC4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80015CC4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80015CEC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80015CF4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80015E50);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80015F60);

//INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", ReadFileFromDisk_80015FC0);
u_int ReadFileFromDisk_80015FC0(char *fileName, u_long *address, u_int numberOfByte) {
    int numberOfReadBytes;
    u_int result;
    numberOfReadBytes = CdReadFile(fileName,address,numberOfByte);

    result = 0;

    if (numberOfReadBytes == 0){
        return result;
    }
    return numberOfByte;
}

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", GetFilePositionFromCD_80015ff4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001618C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", InitCDAndLoadFiles_800161f4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016280);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001631C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800163B4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001648C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800164E4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800165C4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016600);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016710);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800169BC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016A84);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016A94);
/*void func_80016A94() {
    D_8009B163 = 1;
}*/

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016AA4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016AB4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016B28);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016B9C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016BBC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016BDC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016BE8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80016C0C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001706C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001718C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", TerminateSPU_800172AC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80017300);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800174E8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80017520);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80017594);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800175B0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800175DC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001769C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800176C8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80017728);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800177C8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80017C90);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80017D00);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80017D70);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80017E9C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80017EF0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80017FE4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001815C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018298);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018390);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800183CC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800183F8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018460);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001846C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001851C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018564);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800185E4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800186C4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800186D8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018714);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_8001873C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018924);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_800189C0);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018A78);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018BAC);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018BD8);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018BE4);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018C00);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018C0C);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018D00);

INCLUDE_ASM("config/../asm/boot/nonmatchings/333C", func_80018D28);
