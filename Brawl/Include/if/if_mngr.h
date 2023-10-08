#pragma once

#include <StaticAssert.h>
#include <if/if_player.h>
#include <types.h>

class IfMngr {
public:
    char _spacer[75];
    IfPlayer* ifPlayer1;
    IfPlayer* ifPlayer2;
    IfPlayer* ifPlayer3;
    IfPlayer* ifPlayer4;
    IfPlayer* ifPlayer5;
    IfPlayer* ifPlayer6;
    IfPlayer* ifPlayer7;
    char _spacer2[65];
    bool m_isPauseMenuActive;
    char _spacer3[30];
};
static_assert(sizeof(IfMngr) == 200, "Class is wrong size!");

extern IfMngr* g_IfMngr;