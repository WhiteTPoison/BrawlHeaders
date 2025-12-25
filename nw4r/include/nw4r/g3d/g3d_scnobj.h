#pragma once

#include <StaticAssert.h>
#include <types.h>

namespace nw4r {
    namespace g3d {

        class ScnObj {
        public:
            // TODO
            virtual u32 IsDerivedFrom(int* unk1);

            virtual void G3dProc(int unk1, int unk2, int unk3);

            void SetPriorityDrawOpa(int unk1);
            void SetPriorityDrawXlu(int unk1);

            virtual ~ScnObj();

            char _0x0[0x8];
            void* _0x8;
            char _spacer[214 - 0x8];
        };
    }
}
//// Size: 220