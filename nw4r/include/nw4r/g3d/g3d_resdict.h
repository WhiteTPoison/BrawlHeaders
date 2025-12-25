#pragma once

#include <StaticAssert.h>
#include <types.h>

namespace nw4r {
    namespace g3d {
        struct ResDicData {
            unsigned int size;
            unsigned int numData;
            struct ResDicNodeData {
                u16 ref;
                u16 flag;
                u16 idxLeft;
                u16 idxRight;
                signed int ofsString;
                signed int ofsData;
            } data[1];
        };

    }
}