#pragma once

#include <StaticAssert.h>
#include <if/if_player.h>
#include <types.h>

class IfMngr {
public:
    char _0x0[0x8];
    void* m_sceneGroupMelee;
    void* m_field_0xC;
    char _0x10[0x8];
    void* m_field_0x18;
    char _0x22[0x28];
    void* m_ifCenter;
    char _0x48[4];
    IfPlayer* m_ifPlayers[7];
    char _0x64[8];
    void* m_ifPhoto;
    void* m_ifMinigameHomerun;
    void* m_ifMinigameTraining;
    char _0x7C[16];
    void* m_ifWifiIntrMenu;
    char _0x90[4];
    void* m_ifAdvBoss;
    char _0x98[17];
    bool m_isPauseMenuActive;
    char _spacer3[30];
};
static_assert(sizeof(IfMngr) == 200, "Class is wrong size!");

extern IfMngr* g_IfMngr;