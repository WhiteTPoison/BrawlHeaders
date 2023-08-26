#pragma once

#include <StaticAssert.h>
#include <types.h>

struct Controls {
    u8 L;
    u8 R;
    u8 Z;
    u8 UpDPad;
    u8 LeftRightDPad;
    u8 DownDPad;
    u8 A;
    u8 B;
    u8 subStick;
    u8 Y;
    u8 X;
    u8 tapJumpToggle;
};
static_assert(sizeof(Controls) == 0xC, "Class is wrong size!");