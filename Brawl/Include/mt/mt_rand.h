#pragma once
#include <types.h>

class mtRand {
public:
    char _spacer[4];
    unsigned int seed;
};

extern mtRand g_mtRandDefault;
extern mtRand g_mtRandOther;