#pragma once

#include <StaticAssert.h>
#include <gm/gm_global_mode_melee.h>
#include <types.h>

struct gmSelCharData {
    char _spacer[0xb8]; // 0x00
    gmPlayerInitData m_playersInitData[7];
    char _0x33c[4];
};
#ifdef __MWERKS__
static_assert(sizeof(gmSelCharData) == 0x340, "Class is wrong size!");
#endif
namespace static_checks {

} // namespace static_checks
