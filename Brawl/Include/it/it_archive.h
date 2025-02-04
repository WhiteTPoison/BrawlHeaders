#pragma once

#include <types.h>
#include <it/it_create.h>

#define ITEM_KINETIC_FLAG_SANDBAG 0x2

struct itParam {
public:
    struct KineticFlag {
        union {
            struct {
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool m_sandbag : 1;
                bool : 1;
            };
            u32 m_mask;
        };

        inline KineticFlag(u32 bits) : m_mask(bits) {}

    };

    struct TraitFlag {
        union {
            struct {
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool m_enemyAttack : 1;
                bool m_noInhaled : 1;
                bool m_noBoundRemove : 1;
                bool m_noThrow : 1;
                bool m_noCount : 1; // TODO: verify, spawned by character?
                bool m_hammer : 1;
                bool m_noEat : 1;
                bool m_equip2 : 1;
                bool m_stage : 1;
                bool m_enemy : 1;
                bool m_bomb : 1;
                bool m_weapon : 1;
                bool m_food : 1;
                bool m_fighter : 1;
                bool m_pokemon : 1;
                bool m_assist : 1;
                bool m_special : 1;
                bool m_ball : 1;
                bool m_recover : 1;
                bool m_equip : 1;
                bool m_quick : 1;
                bool m_touch : 1;
                bool m_throw : 1;
                bool m_swing : 1;
                bool m_shoot : 1;
                bool m_carrier : 1;
            };
            u32 m_mask;
        };

        inline TraitFlag(u32 bits) : m_mask(bits) {}
    };

    struct BoundFlag {

        union {
            struct {
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool : 1;
                bool m_throw : 1;
                bool m_ceiling : 1;
                bool m_dummy : 1;
                bool m_floor : 1;
            };
            u32 m_mask;
        };
        inline BoundFlag(u32 bits) : m_mask(bits) {}
    };

    enum AttachGroup {
        Attach_Group_Badge = 0x0,
        Attach_Group_Hat = 0x1,
        Attach_Group_Body = 0x2,
        Attach_Group_None = 0xFE,
        Attach_Group_All = 0xFF,
    };

    enum SizeKind {
        Size_Small = 0x0,
        Size_Light = 0x0,
        Size_Large = 0x1,
        Size_Heavy = 0x1,
        Size_Invalid = 0x2,
    };

    enum HaveKind {
        Have_None = 0x0,
        Have_Get = 0x1,
        Have_Motion = 0x2,
        Have_Normal = 0x3,
        Have_Pickup = 0x4,
        Have_Grip = 0x5,
        Have_Plate = 0x6
    };

    enum ScaleType {
        Scale_Normal = 0x0,
        Scale_Fighter = 0x1
    };

    enum SlopeType {
        Slope_None = 0x0,
        Slope_Slant = 0x1,
        Slope_Slant_Keep_Y_Rot = 0x2,
        Slope_Keep_Angle = 0x3,
        Slope_Up = 0x4,
        Slope_Slant_Smooth = 0x5,
    };

    enum FlashKind {
        Flash_None = 0x0,
        Flash_Normal = 0x1,
    };

    enum CameraKind {
        Camera_None = 0x0,
        Camera_Normal = 0x1,
        Camera_Center = 0x2,
        Camera_3 = 0x3,
        Camera_4 = 0x4,
    };

    enum HitKind {
        Hit_None = 0x0,
        Hit_Stop = 0x1,
        Hit_Fly = 0x2,
        Hit_Lr = 0x3
    };

    enum ReflectKind {
        Reflect_None = 0x0,
        Reflect_Normal = 0x1,
        Reflect_Born = 0x2,
    };

    enum ShieldKind {
        Shield_None = 0x0,
        Shield_Lost = 0x1,
        Shield_Born = 0x2,
        Shield_Hop = 0x3
    };

    enum DeadAreaKind {
        Dead_Area_None = 0x0,
        Dead_Area_Remove = 0x1,
        Dead_Area_Remove_Not_Xlu = 0x2,
        Dead_Area_All = 0x3
    };

    enum AttackHitStopKind {
        Attack_Hit_Stop_None = 0x0,
        Attack_Hit_Stop_Normal = 0x1,
        Attack_Hit_Stop_Parent = 0x2
    };
};

class itArchive {
public:
    enum Type {
        Temp = 0x0,
        Assist = 0x1,
        Common = 0x2,
        D = 0x3,
        Stage = 0x4,
        F = 0x5
    };

    Type m_type;
    u8 m_4;
    char _5[3];
    union {
        struct {
            ItemKind m_itemKind;
        };
        struct {
            itKind m_itKind;
            u32 m_itVariation;
        };
    };
    int m_commonParamId;
    int m_brresId;
    int m_paramId;
    int m_soundGroup;
    int m_32;
    int m_numItemsActive;
    int m_40;

    virtual ~itArchive();
};
static_assert(sizeof(itArchive) == 48, "Class is wrong size!");
