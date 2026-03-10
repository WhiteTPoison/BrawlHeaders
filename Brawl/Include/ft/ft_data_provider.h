#pragma once
#include <StaticAssert.h>
#include <types.h>
#include <ft/ft_entry.h>
#include <sr/sr_common.h>

class ftDataTaskResource {
    char _0x0[0x34];
public:
   void init(char* path, ftKind kind, u8 costumeId, s32 param5, u8 param6, u8 param7, s32 param8, HeapType heapType, u8 param10, s32 param11, u8 param12);
   ftDataTaskResource(); 
};
static_assert(sizeof(ftDataTaskResource) == 0x34, "Class is wrong size!");