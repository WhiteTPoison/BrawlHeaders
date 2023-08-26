#pragma once

#include <StaticAssert.h>
#include <types.h>
#include "controls.h"

struct ipPadConfig {
    Controls controls[4];
    char _spacer[0x85];

    //0xFF if player does not exist or is AI
    //+ 0x10 if in replay
    //goes from 0 to 7, although after 4 seems to not be used (only checked versus though)
    u8 playerNum2PadNum[4];
};
static_assert(sizeof(ipPadConfig) == 0xB9, "Class is wrong size!");