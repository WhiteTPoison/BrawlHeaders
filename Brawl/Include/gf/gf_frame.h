#pragma once
#include <types.h>


class GameFrame {
public:
    char _0[4];
    //4
    u32 frameCounter;
    char _1[0xC - 0x4 - 4];
    //0xC
    float frameDelta;
    char _2[0x14 - 0xC - 4];
    //0x14
    u32 persistentFrameCounter;
};
static_assert(sizeof(GameFrame) == 0x18, "GameFrame is wrong size!");
extern GameFrame* g_GameFrame;