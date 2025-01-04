#pragma once

#include <types.h>
#include <so/so_null.h>
#include <StaticAssert.h>

class soGeneralWorkAbstract : private soNull, public soNullable {
public:
    soGeneralWorkAbstract();
    ~soGeneralWorkAbstract() { }
    virtual s32 getIntWork(u32 index) const;
    virtual void setIntWork(s32 value, u32 index);
    virtual void addIntWork(s32 value, u32 index);
    virtual void subIntWork(s32 value, u32 index);
    virtual void mulIntWork(s32 value, u32 index);
    virtual void divIntWork(s32 value, u32 index);
    virtual void incIntWork(u32 index);
    virtual void decIntWork(u32 index);
    virtual u32 getIntWorkSize();
    virtual float getFloatWork(u32 index) const;
    virtual void setFloatWork(float value, u32 index);
    virtual void addFloatWork(float value, u32 index);
    virtual void subFloatWork(float value, u32 index);
    virtual void mulFloatWork(float value, u32 index);
    virtual void divFloatWork(float value, u32 index);
    virtual u32 getFloatWorkSize();
    virtual void onFlag(u32 flag, u32 index);
    virtual void offFlag(u32 flag, u32 index);
    virtual void clearFlag(u32 index);
    virtual bool isFlag(u32 flag, u32 index) const;
    virtual u32 turnOffFlag(u32 flag, u32 index);
    virtual u32 getFlagWorkSize();
    virtual void clearWorkAll();
};
static_assert(sizeof(soGeneralWorkAbstract) == 12, "Class is wrong size!");
