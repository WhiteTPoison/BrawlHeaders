#pragma once

#include <StaticAssert.h>
#include <gf/gf_thread.h>
#include <gf/gf_file_io_request.h>
#include <types.h>

class gfFileIOManager {
    char _0x0[4];
    gfThread* m_thread;
    gfFileIORequestQueue* m_queue1;
    gfFileIORequestQueue* m_queue2;
    char _0x10[0x8C];
public:
    inline u32 getNumActiveRequests() { return m_queue1->getCount(); };
    inline u32 getNumQueuedRequests() { return m_queue2->getCount(); };
    inline gfFileIORequestQueue* getQueue1() { return m_queue1; };
    inline gfFileIORequestQueue* getQueue2() { return m_queue2; };
    inline u32 getNumTotalRequests() { return getNumActiveRequests() + getNumQueuedRequests(); };
    u8 update();
    bool freeRequest(gfFileIORequest* request);
};
static_assert(sizeof(gfFileIOManager) == 0x9c, "Wrong size for class!");

extern gfFileIOManager* g_gfFileIOManager;
