#pragma once

#include <mt/mt_vector.h>
#include <types.h>
#include <so/collision/so_collision.h>
#include <so/so_array.h>



struct soCollisionAttackAbsoluteData {
    int m_power;
    int m_vector;
    int m_reactionEffect;
    int m_reactionFix;
    int m_reactionAdd;
    float m_tripRate;
    float m_hitstopMultiplier;
    float m_sdiMultiplier;
    u32 _32;
};

struct soCollisionAttackData {
    enum Attribute {
        Attribute_Normal = 0x0,
        Attribute_None = 0x1,
        Attribute_Cutup = 0x2,
        Attribute_Electric = 0x3,
        Attribute_Ice = 0x4,
        Attribute_Fire = 0x5,
        Attribute_Coin = 0x6,
        Attribute_Turn = 0x7,
        Attribute_Slip = 0x8,
        Attribute_Sleep = 0x9,
        Attribute_None2 = 0xA,
        Attribute_Bury = 0xB,
        Attribute_Stun = 0xC,
        Attribute_Magic = 0xD,
        Attribute_Flower = 0xE,
        Attribute_YellowSteam = 0xF,    // TODO: real name for this
        Attribute_None3 = 0x10,
        Attribute_Grass = 0x11,
        Attribute_Water = 0x12,
        Attribute_Purple = 0x13,
        Attribute_Paralyze = 0x14,
        Attribute_Aura = 0x15,
        Attribute_Pitfall = 0x16,
        Attribute_Lay = 0x17,
        Attribute_Flinchless = 0x18, // TODO: real name for this?
        Attribute_None5 = 0x19,
        Attribute_None6 = 0x1A,
        Attribute_None7 = 0x1B,
        Attribute_None8 = 0x1C,
        Attribute_None9 = 0x1D,
        Attribute_None10 = 0x1E,
        Attribute_None11 = 0x1F,
    };

    enum SoundLevel {
        Sound_Level_Small = 0x0,
        Sound_Level_S = 0x0,
        Sound_Level_Medium = 0x1,
        Sound_Level_M = 0x1,
        Sound_Level_Large = 0x2,
        Sound_Level_L = 0x2,
        Sound_Level_Largest = 0x3,
        Sound_Level_LL = 0x3,
    };

    enum SoundAttribute {
        Sound_Attribute_None = 0x0,
        Sound_Attribute_Punch = 0x1,
        Sound_Attribute_Kick = 0x2,
        Sound_Attribute_Cutup = 0x3,
        Sound_Attribute_Coin = 0x4,
        Sound_Attribute_Bat = 0x5,
        Sound_Attribute_Harisen = 0x6, // (Harisen)
        Sound_Attribute_Fan = 0x6,
        Sound_Attribute_Elec = 0x7,
        Sound_Attribute_Electric = 0x7,
        Sound_Attribute_Fire = 0x8,
        Sound_Attribute_Water = 0x9,
        Sound_Attribute_Grass = 0xA,
        Sound_Attribute_Bomb = 0xB,
        Sound_Attribute_PeachWeapon = 0xC,
        Sound_Attribute_Snake = 0xD,    // Exclusive to Snake
        Sound_Attribute_Ike = 0xE,      // Exclusive to Ike
        Sound_Attribute_Dedede = 0xF, // Exclusive to Dedede
        Sound_Attribute_Magic = 0x10,
        Sound_Attribute_Kamehit = 0x11, // Shell
        Sound_Attribute_Shell = 0x11, // Shell
        Sound_Attribute_Peach_Binta = 0x12,   // Exclusive to Peach (slap)
        Sound_Attribute_Peach_Slap = 0x12,
        Sound_Attribute_Peach_FryingPan = 0x13,    // Exclusive to Peach
        Sound_Attribute_Peach_Golf = 0x14,   // Exclusive to Peach
        Sound_Attribute_Peach_Tennis = 0x15, // Exclusive to Peach
        Sound_Attribute_Lucario = 0x16, // Exclusive to Lucario
        Sound_Attribute_Marth = 0x17, // Exclusive to Marth
        Sound_Attribute_Mario_Coin = 0x18,   // Exclusive to Mario
        Sound_Attribute_Mario_Final = 0x19, // Exclusive to Mario
        Sound_Attribute_Luigi_Coin = 0x1A,   // Exclusive to Luigi
        Sound_Attribute_Ness_Bat = 0x1B,     // Exclusive to Ness
        Sound_Attribute_Freeze = 0x1C,
    };

    enum LrCheck {
        Lr_Check_Pos = 0x0, // normal reverse hit
        Lr_Check_Speed = 0x1,   // reverse hit based on horizontal momentum
        Lr_Check_Lr = 0x2, // Away from where target is facing
        Lr_Check_Forward = 0x3,  // forward from attacker direction
        Lr_Check_F = 0x3,
        Lr_Check_Reverse = 0x3,
        Lr_Check_Backward = 0x4,    // backward from attacker direction
        Lr_Check_B = 0x4,
        LR_Check_Along = 0x4,
        Lr_Check_Part = 0x5, // based on where on hitbox you connect / away from center of collision
        // LR_Check_Left/LR_Check_Right/LR_Check_BackSlash?
    };

    enum Region {
        Region_None = 0x0,
        Region_Head = 0x1,
        Region_Body = 0x2,
        Region_Hip = 0x3,
        Region_Punch = 0x4,
        Region_Elbow = 0x5,
        Region_Kick = 0x6,
        Region_Knee = 0x7,
        Region_Throw = 0x8,
        Region_Object = 0x9,
        Region_Sword = 0xA,
        Region_Hammer = 0xB,
        Region_Bomb = 0xC,
        Region_Spin = 0xD,
        Region_Bite = 0xE,
        Region_Magic = 0xF,
        Region_Psi = 0xA,
        Region_Palutena = 0xB,
        Region_Aura = 0xC,
        Region_Bat = 0xD,
        Region_Parasol = 0xE,
        Region_Pikmin = 0xF,
        Region_Water = 0x10,
        Region_Whip = 0x11,
        Region_Tail = 0x12,
        Region_Energy = 0x13
    };

    int m_power;
    Vec3f m_offsetPos;
    float m_size;
    int m_vector;
    int m_reactionEffect;
    int m_reactionFix;
    int m_reactionAdd;
    float m_tripRate;
    float m_hitstopMultiplier;
    float m_sdiMultiplier;
    union {
        struct {
            unsigned int nodeIndex : 9;    // up to 0x1ff
            bool isCategoryFloor : 1; // Skyword platforms, Hanenbow platforms, stage blocks
            bool isCategoryItemE : 1; // Soccer Ball, Blast Box etc. (items enemies can hit)
            bool isCategory7 : 1;
            bool isCategoryGimmick : 1; // Ground
            bool isCategory5 : 1;
            bool isCategory4 : 1;
            bool isCategoryItem : 1; // Barrel, Crate etc.
            bool isCategory2 : 1;
            bool isCategoryEnemy : 1; // SSE enemies
            bool isCategoryFighter : 1; // Fighter
            bool isSituationODD : 1;
            bool isSituationAir : 1;
            bool isSituationGround : 1;
            bool field_0x30_3 : 1;                          // up to 0x1
            bool isPartLeg : 1;                // Usually legs
            bool isPartKnee : 1;                // Usually Shin
            bool isPartArm : 1;                // Usually forearm, wing
            bool isPartBody : 1;                // Usually head, pelvis, upper arm, tail, item
            Attribute attribute : 5;     // up to 0x1f
            SoundLevel soundLevel : 2; // up to 0x3
            SoundAttribute soundAttribute : 5;   // up to 0x1f
            bool isClankable : 1;
            bool field_0x34_3 : 1;
            bool field_0x34_4 : 1;
            bool isBlockable : 1;
            bool isReflectable : 1;
            bool isAbsorbable : 1;
            unsigned int addedShieldDamage : 9; // up to 0x1ff
            unsigned int field_0x34_9 : 10;     // ~up to 0x3ff
            unsigned int detectionRate : 16;    // up to 0xffff
            bool field_0x38_1 : 1;
            bool ignoreInvincibility : 1;
            bool ignoreIntangibility : 1;
            LrCheck lrCheck : 3; // up to 0x7
            bool field_0x38_5 : 1;
            bool enableFriendlyFire : 1;
            bool disableHitstop : 1;
            bool disableHitGfx : 1;
            bool disableFlinch : 1;
            Region region : 5; // up to 0x1f;
            bool isShapeCapsule : 1;
            bool isDangerZone : 1; // custom
            unsigned int field_0x3c_2 : 30; // ~up to 0x3fffffff
        } m_bits;

        struct {
            unsigned int nodeIndex : 9;                     // up to 0x1ff
            unsigned int category : 10;            // up to 0x3ff;
            unsigned int situation : 3;            // up to 0x7
            bool field_0x30_3 : 1;                          // up to 0x1
            unsigned int part : 4;                 // up to 0xf
            Attribute attribute : 5;     // up to 0x1f
            SoundLevel soundLevel : 2; // up to 0x3
            SoundAttribute soundAttribute : 5;   // up to 0x1f
            bool isClankable : 1;
            bool field_0x34_3 : 1;
            bool field_0x34_4 : 1;
            bool isBlockable : 1;
            bool isReflectable : 1;
            bool isAbsorbable : 1;
            unsigned int addedShieldDamage : 9; // up to 0x1ff
            unsigned int field_0x34_9 : 10;     // ~up to 0x3ff
            unsigned int detectionRate : 16;    // up to 0xffff
            bool field_0x38_1 : 1;
            bool ignoreInvincibility : 1;
            bool ignoreIntangibility : 1;
            LrCheck lrCheck : 3; // up to 0x7
            bool field_0x38_5 : 1;                                  // break throws?
            bool enableFriendlyFire : 1;
            bool disableHitstop : 1;
            bool disableHitGfx : 1;
            bool disableFlinch : 1;
            Region region : 5; // up to 0x1f;
            bool isShapeCapsule : 1;
            bool isDangerZone : 1; // custom
            unsigned int field_0x3c_2 : 30; // ~up to 0x3fffffff
        } m_masks;
    };

    inline soCollisionAttackData() {
        m_tripRate = 1.0;
        m_hitstopMultiplier = 1.0;
        m_sdiMultiplier = 1.0;
        m_masks.region = Region_None;
    }
};
static_assert(sizeof(soCollisionAttackData) == 64, "Class is wrong size!");

struct soCollisionAttackAbsolute {
    soCollisionAttackData m_attackData;
    char _0x40[4];
    Vec3f m_nodeGlobalPos;
    char _0x50[15];
    u8 m_index;
    int m_groupIndex;
    bool m_isAttack;
    char _0x65[3];

    soCollisionAttackAbsolute();
    ~soCollisionAttackAbsolute();
};

class soCollisionAttackPart {
    int m_0x0;
    soCollisionAttackData m_attackData;
    soArrayVector<clTarget, 7> m_clTargetArrayVector;
    int m_groupIndex;
    char _0x8c[4];

public:
    soCollisionAttackPart();
    soCollisionAttackPart(u8, bool);
    ~soCollisionAttackPart();
};
static_assert(sizeof(soCollisionAttackPart) == 0x90, "Class is wrong size!");
