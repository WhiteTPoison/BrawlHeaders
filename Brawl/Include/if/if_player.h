#pragma once

#include <StaticAssert.h>
#include <types.h>

class IfPlayer {
public:
    char _0[1492];
    void updateStockCoin(IfPlayer *ifPlayer, unsigned int amount);
    virtual ~IfPlayer();
};
static_assert(sizeof(IfPlayer) == 1496, "Class is wrong size!");