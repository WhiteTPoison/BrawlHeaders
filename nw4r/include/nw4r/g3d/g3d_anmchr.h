#pragma once

#include <MEM.h>
#include <nw4r/g3d/g3d_obj.h>
#include <nw4r/g3d/g3d_resmdl.h>
#include <types.h>

namespace nw4r {
    namespace g3d {
        struct ResAnmChrData {
            char _spacer[0x14];
            unsigned int m_stringOffset;
            char _spacer2[0x1C - 0x14 - 4];
            unsigned short m_animLength;
        };
        class ResAnmChr : public ResCommon<ResAnmChrData> {
        public:
            u8 m_4[0x18];
            u16 m_1C;
            inline ResAnmChr() : ResCommon() {}
            inline ResAnmChr(void* data) : ResCommon(data) {}
        };

        class AnmObjChrRes : public G3dObj {
        public:
            virtual u32 IsDerivedFrom(int* unk1);
            virtual void G3dProc(int unk1, int unk2, int unk3);
            virtual ~AnmObjChrRes();
            virtual int* GetTypeObj();
            virtual int GetTypeName();
            virtual void SetFrame(float frame);
            virtual float GetFrame();
            virtual void UpdateFrame();
            virtual void SetUpdateRate(float updateRate);
            virtual float GetUpdateRate();
            virtual int Bind(ResMdl mdl);
            virtual void Release();
            virtual int* GetResult(int* unk1, int unk2);
            virtual int Attach(int unk1, int* unk2); // TODO
            virtual int* Detach(int unk1);           // TODO
            virtual void DetachAll();
            virtual void SetWeight(float unk1, int* unk2); // TODO
            virtual float GetWeight(int unk1);             // TODO
            virtual int Bind(int* unk1, u32 unk2, int unk3);
            virtual void Release(int* unk1, u32 unk2, int unk3);
            void DisableID(u32 id);

            static AnmObjChrRes* Construct(MEMAllocator* allocator, int* size, ResAnmChr anim, ResMdl mdl, bool hasCache);

            char _spacer[40];

            ResAnmChr* m_anmChrFile;

            char _spacer2[4];
        };
    }
}

// Size: 52
