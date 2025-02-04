#pragma once

#include <StaticAssert.h>
#include <types.h>

class gfCallBack {
    gfCallBack* m_next;

public:
    gfCallBack() : m_next(0) { }
    virtual void userProc() = 0;
    virtual ~gfCallBack() { }
};
static_assert(sizeof(gfCallBack) == 0x8, "Class is wrong size!");

class gfCallBackList {
public:
    gfCallBack* head;

    void add(gfCallBack* cb);
    bool remove(gfCallBack* cb);
    void process();
};
static_assert(sizeof(gfCallBackList) == 0x4, "Class is wrong size!");
