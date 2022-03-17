//
// Created by live2 on 3/13/2022.
//

#ifndef LUNAR2ISO_GLOBALVAR_H
#define LUNAR2ISO_GLOBALVAR_H

char* DATA_IDX = "\\DATA.IDX;1";
char* DATA_PAK = "\\DATA.PAK;1";
char* V_XA = "\\V.XA;1";

void FUN_80030a2c(int param_1);
//FUN_80030a2c
int dword_8009b4b4;
int dword_8009b4b8;
int dword_8009b4bc;

void FUN_80016aa4(int param_1,int param_2);
//FUN_80016aa4
int dword_8009b1c0;
int dword_8009b1e0;

void FUN_80016ab4();
//FUN_80016ab4
u_char byte_800aa4d0;
u_char byte_800aa4f2;
u_char byte_800aa4c0;
u_char byte_800aa4c6;
u_char byte_8009a700;
u_char byte_8009a701;

void InitMemoryCard_80078D64(int a1);

void TerminateSPU_800172AC();
int dword_8009B204;

void TerminateSPUCall_80018FE8();

int FUN_80069464(int a1);
int dword_80088558;

void FUN_80016A84();
u_short word_8009B166;
u_short word_8009B168;

void FUN_80016A94();
u_char byte_8009B163;

u_int ReadFileFromDisk_80015FC0(char * file, u_long * addr, u_int nbyte);

int FUN_80015FF4(void (*a1)(void));
u_long dword_800BA000;
u_char dword_8008B188;
u_char byte_801F0F00;
int dword_8009B158;
u_short word_8009B15E;
int dword_8009B180;
CdlLOC stru_8008B18D;
u_short word_8009B15C;


int FUN_800161F4();
char byte_8009B160;
char byte_8009B162;
char byte_8009B161;
char byte_8009B164;
int dword_8009B17C;

void FUN_80014B2C(int a1);
int dword_8009A6DC;

void FUN_8004CD04(int a1);
int dword_8009B870;


#endif //LUNAR2ISO_GLOBALVAR_H
