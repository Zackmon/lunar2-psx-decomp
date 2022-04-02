#include "common.h"

void InitMemoryCard_80078D64(int arg0) {
    InitCARD_0(arg0);
    StartCARD();
    _bu_init();
}

