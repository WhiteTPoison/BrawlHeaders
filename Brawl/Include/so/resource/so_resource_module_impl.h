#pragma once

#include <StaticAssert.h>
#include <so/so_null.h>
#include <so/resource/so_resource_id_accesser.h>
#include <nw4r/g3d/g3d_resfile.h>
#include <types.h>

class soResourceModule : private soNull, public soNullable {
public:
    virtual ~soResourceModule() { }
    virtual soResourceIdAccesser* getResourceIdAccesser() = 0;
    virtual u32 getGroupNo(int unk1) = 0;
    virtual void setGroupNo(u8 unk1, u16 index) = 0;
    virtual nw4r::g3d::ResFileData* getTexFile(u32 unk1, u32 unk2) = 0;
    virtual nw4r::g3d::ResFileData* getMdlFile(u32 unk1, u32 unk2) = 0;
    virtual nw4r::g3d::ResFileData* getAnmFile(u32 p1, u32 p2, u32 p3) = 0;
    virtual nw4r::g3d::ResFileData* getBinFile(u32 p1, u32 p2, u32 p3) = 0;
    virtual nw4r::g3d::ResFileData* getFile(u32 p1, u32 p2, u32 p3) = 0;
};

class soResourceModuleImpl : public soResourceModule {
    // 0xC
    int m_managerID;
    // 0x10
    soResourceIdAccesserImpl* m_resourceIdAccesser;
    // 0x14
    char m_archiveType1;
    // 0x15
    char m_archiveType2;
    // 0x16
    char m_archiveType3;
    // 0x17
    char m_archiveType4;
public:
    soResourceModuleImpl(u32 p1, soResourceIdAccesserImpl* rsrcIdAcc, u32 p3);

    virtual ~soResourceModuleImpl();
    virtual soResourceIdAccesser* getResourceIdAccesser() { return m_resourceIdAccesser; }
    virtual u32 getGroupNo(int unk1) {
        // TODO: UBFIX just a char array?
        u8* ptr = (u8*)((int)this + unk1);
        return ptr[0x14];
    }
    virtual void setGroupNo(u8 unk1, u16 index);
    virtual nw4r::g3d::ResFileData* getTexFile(u32 unk1, u32 unk2);
    virtual nw4r::g3d::ResFileData* getMdlFile(u32 unk1, u32 unk2);
    virtual nw4r::g3d::ResFileData* getAnmFile(u32 p1, u32 p2, u32 p3);
    virtual nw4r::g3d::ResFileData* getBinFile(u32 p1, u32 p2, u32 p3);
    virtual nw4r::g3d::ResFileData* getFile(u32 p1, u32 p2, u32 p3);
};
//static_assert(sizeof(soResourceModuleImpl) == 24, "Class is wrong size!");
