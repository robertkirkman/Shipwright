#ifndef Z_BG_JYA_AMISHUTTER_H
#define Z_BG_JYA_AMISHUTTER_H

#include <libultraship/libultra.h>
#include "global.h"

struct BgJyaAmishutter;

typedef void (*BgJyaAmishutterActionFunc)(struct BgJyaAmishutter*, u16);

typedef struct BgJyaAmishutter {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ BgJyaAmishutterActionFunc actionFunc;
} BgJyaAmishutter; // size = 0x0168

#endif
