#pragma once
#include <MEM/mem_list.h>
#include <types.h>
#include <OS/OSMutex.h>
#include <string.h>
#include "memory.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    MEM_HEAP_OPT_CLEAR_ALLOC = (1 << 0),
    MEM_HEAP_OPT_DEBUG_FILL = (1 << 1),
    MEM_HEAP_OPT_CAN_LOCK = (1 << 2)
} MEMHeapOpt;

typedef struct MEMiHeapHead {
    u32 magic;     // at 0x0
    MEMLink link;  // at 0x4
    MEMList list;  // at 0xC
    u8* start;     // at 0x18
    u8* end;       // at 0x1C
    OSMutex mutex; // at 0x20

    union {
        u32 attribute;
        struct {
            u32 attribute_0_24 : 24;
            u32 opt : 8;
        };
    }; // at 0x38
} MEMiHeapHead;

typedef MEMiHeapHead* MEMHeapHandle;

void MEMiInitHeapHead(MEMiHeapHead* heap, u32 magic, void* start, void* end,
                      u16 opt);
void MEMiFinalizeHeap(MEMiHeapHead* heap);
MEMiHeapHead* MEMFindContainHeap(const void* memBlock);

static inline u16 GetOptForHeap(const MEMiHeapHead* heap) { return heap->opt; }

static inline void SetOptForHeap(MEMiHeapHead* heap, u16 opt) {
    heap->opt = (u8)opt;
}

static inline void LockHeap(MEMiHeapHead* heap) {
    if (GetOptForHeap(heap) & MEM_HEAP_OPT_CAN_LOCK) {
        OSLockMutex(&heap->mutex);
    }
}

static inline void UnlockHeap(MEMiHeapHead* heap) {
    if (GetOptForHeap(heap) & MEM_HEAP_OPT_CAN_LOCK) {
        OSUnlockMutex(&heap->mutex);
    }
}

static inline void FillAllocMemory(MEMiHeapHead* heap, void* memBlock,
                                   u32 size) {
    if (GetOptForHeap(heap) & MEM_HEAP_OPT_CLEAR_ALLOC) {
        __memfill(memBlock, 0, size);
    }
}

#ifdef __cplusplus
}
#endif