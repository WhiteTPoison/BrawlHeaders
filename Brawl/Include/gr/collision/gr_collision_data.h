#pragma once

#include <mt/mt_vector.h>
#include <types.h>

class grCollData {
public:
    struct VtxData {
        Vec2f m_pos;
    };

    struct JointData {
        char _spacer[108];
    };

    struct LineData {
        short m_pointX;
        short m_pointY;
        char _spacer[12];
    };

    short m_vtxLen;
    short m_lineLen;
    short m_jointLen;
    short m_unk1;
    VtxData* m_vtxDatas;
    LineData* m_lineDatas;
    JointData* m_jointDatas;
};
static_assert(sizeof(grCollData) == 20, "Class is wrong size!");
