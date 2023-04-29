#pragma once
#include <types.h>

class mtRand {
public:
    char _spacer[4];
    unsigned int seed;
};

#define g_mtRandDefault ((mtRand*) 0x805a00b8)
#define g_mtRandOther ((mtRand*) 0x805a0420)