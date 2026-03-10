#pragma once

#include <StaticAssert.h>
#include <types.h>
#include <ft/ft_slot.h>

class ftSlotManager {
public:
    ftSlot* m_slots;
    u32 m_slotCount;
    char _0x8[0x538];

    s32 addSlot(gmCharacterKind characterKind, u8 param_2, u32 param_3, s32 param_4);
};
static_assert(sizeof(ftSlotManager) == 0x540, "Class is wrong size!");

extern ftSlotManager* g_ftSlotManager;