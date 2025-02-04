#pragma once

#include <gf/gf_task.h>
#include <gm/gm_global.h>
#include <types.h>

class stLoader : public gfTask {
    gmGlobalModeMelee* m_globalModeMelee;
    u8 m_state;
    char _0x45[3];

public:
    virtual void processBegin();
    virtual ~stLoader();
    virtual void entryEntity();
    virtual void removeEntity();
    virtual bool isLoad();
    virtual bool isEmpty();
};
static_assert(sizeof(stLoader) == 0x48, "Class is wrong size!");
