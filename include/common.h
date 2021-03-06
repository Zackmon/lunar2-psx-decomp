//
// Created by live2 on 3/13/2022.
//

#ifndef LUNAR2ISO_COMMON_H
#define LUNAR2ISO_COMMON_H

#include "psyq/sys/types.h"
#include "psyq/libsnd.h"
#include "psyq/libspu.h"
#include "psyq/libcd.h"
#include "psyq/libmcrd.h"
#include "psyq/memory.h"
/*#include "psyq/memory.h"
#include "psyq/libetc.h"
#include "psyq/libpad.h"
#include "psyq/libapi.h"


*/
#include "include_asm.h"

typedef struct {
    char field0_0x0;
    char field1_0x1;
    char field2_0x2;
    char field3_0x3;
    char field4_0x4;
    char field5_0x5;
    char field6_0x6;
    char field7_0x7;
    char field8_0x8;
    char field9_0x9;
    char field10_0xa;
    char field11_0xb;
    char field12_0xc;
    char field13_0xd;
    char field14_0xe;
    char field15_0xf;
    char field16_0x10;
    char field17_0x11;
    char field18_0x12;
    char field19_0x13;
    int field20_0x14;
    char field21_0x18;
    char field22_0x19;
    char field23_0x1a;
    char field24_0x1b;
    char field25_0x1c;
    char field26_0x1d;
    char field27_0x1e;
    char field28_0x1f;
    char field29_0x20;
    char field30_0x21;
    char field31_0x22;
    char field32_0x23;
    char field33_0x24;
    char field34_0x25;
    char field35_0x26;
    char field36_0x27;
    char field37_0x28;
    char field38_0x29;
    char field39_0x2a;
    char field40_0x2b;
    char field41_0x2c;
    char field42_0x2d;
    char field43_0x2e;
    char field44_0x2f;
    char field45_0x30;
    char field46_0x31;
    char field47_0x32;
    char field48_0x33;
    char field49_0x34;
    char field50_0x35;
    char field51_0x36;
    char field52_0x37;
    char field53_0x38;
    char field54_0x39;
    char field55_0x3a;
    char field56_0x3b;
    char field57_0x3c;
    char field58_0x3d;
    char field59_0x3e;
    char field60_0x3f;
    char field61_0x40;
    char field62_0x41;
    char field63_0x42;
    char field64_0x43;
    char field65_0x44;
    char field66_0x45;
    char field67_0x46;
    char field68_0x47;
    char field69_0x48;
    char field70_0x49;
    char field71_0x4a;
    char field72_0x4b;
    char field73_0x4c;
    char field74_0x4d;
    char field75_0x4e;
    char field76_0x4f;
    char field77_0x50;
    char field78_0x51;
    char field79_0x52;
    char field80_0x53;
    char field81_0x54;
    char field82_0x55;
    char field83_0x56;
    char field84_0x57;
    char field85_0x58;
    char field86_0x59;
    char field87_0x5a;
    char field88_0x5b;
    char field89_0x5c;
    char field90_0x5d;
    char field91_0x5e;
    char field92_0x5f;
} astruct;

typedef struct  {
    u_char currentLevel;
    u_int currentExp;
    u_int expToNextLevel;
    u_short currentHP;
    u_short maximumHP;
    u_short currentMP;
    u_short maximumMP;
    u_short attack;
    u_short numberOfAttacks;
    u_short defense;
    u_short agility;
    u_short speed;
    u_short wisdom;
    u_short magicDef;
    u_short range;
    u_short luck;
    u_short unknown;
    u_int spellSlot1;
    u_int spellSlot2;
    u_int spellSlot3;
    u_int spellSlot4;
    u_int spellSlot5;
    u_int spellSlot6;
    u_int spellSlot7;
    u_int spellSlot8;
    u_int spellSlot9;
    u_int spellSlot10;
    u_int spellSlot11;
    u_int spellSlot12;
    u_int spellSlot13;
    u_int spellSlot14;
    u_int spellSlot15;
    u_int spellSlot16;
    u_int spellSlot17;
    u_int spellSlot18;
    u_int spellSlot19;
    u_int spellSlot20;
}PlayerData;

typedef struct
{ int field_0;
  int field_4;
  int field_8;
} struc_800AB9C8;


typedef struct {
    short field0_0x0;
    short field1_0x2;
    short field2_0x4;
    u_short field3_0x6;
    u_char field4_0x8;
    char field5_0x9;
    char field6_0xa;
    u_char field7_0xb;
    int field8_0xc;
    int field9_0x10;
}astruct_3;

int func_800235DC();
void func_80022380(void);
int func_8002807C(void);
int func_8002805C(void);
int func_800280FC(); 
int func_800280BC();                                  /* extern */
int func_8002809C(void);
void func_80026924(int a1);
void func_800255BC (int a1);
int func_80028804(int);                               /* extern */
int func_80045D44(void);
int func_80045E00();
void func_800148D4(int, int);                            /* extern */
int func_800149DC(int a1);
int func_80035AD0(void (*f)(int) );
int func_800149C0(int a1); //TODO this a1 parameter should be changed from int to astruct
int func_800149DC(int a1); //TODO this a1 parameter should be changed from int to astruct
astruct * func_8001441C(astruct * a1);
void func_80014B2C(int a1);


int func_80022998(int);                                 /* extern */
int func_80022C84(int);                                 /* extern */

int func_8001BC1C(int);                                 /* extern */
int func_800229CC();                                  /* extern */

int func_8001D180();                                  /* extern */

int func_80045E10(int);                               /* extern */
void func_80014B1C(int a1, int a2);

void * func_8005EF94 (int a1);
void func_80023E74();
int func_800245C8();
#endif //LUNAR2ISO_COMMON_H
