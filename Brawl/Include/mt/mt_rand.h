#pragma once
#include <types.h>

class mtRand {
public:
    char _spacer[4];
    u32 seed;
};

extern mtRand* g_mtRandDefault;
extern mtRand* g_mtRandOther;