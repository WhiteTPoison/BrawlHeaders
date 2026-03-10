#pragma once

#include <StaticAssert.h>
#include <types.h>
#include <gm/gm_lib.h>
#include <memory.h>

class ftSlot {
public:
    // 0x0
    virtual ~ftSlot();
    // 0x4
    char _0x4[0x3];
    char _0x8;
    char _0x9;
    char _0xa;
    char _0xb;
    char _0xc[0x14D];
    char _0x15a;
    char _0x15b;
    u8 m_costumeId;
    u8 _0x15c;
    char _0x15d;
    char _0x15e;
    char _0x15f;
    gmCharacterKind m_characterKind;
    HeapType m_instanceHeapType;
    HeapType m_resourceHeapType;
    char _0x16c[8];
    int m_slotNo;
    char _0x178[0x35C];

    void load(int param1, int param2, int param3);
    void init(gmCharacterKind char_kind, u8 costume_id, u8 param_3, u32 num_transforms, u32 param_5);
    void loadBootResource(u32 param_1);
};
static_assert(sizeof(ftSlot) == 0x4d4, "Class is wrong size!");