#pragma once

#include <PAD/PADStatus.h>
namespace controllerType {
    const int GAMECUBE = 0;
    const int CLASSIC = 1;
    const int WIIMOTE = 2;
    const int WIICHUCK = 3;
}

class gfPadStatus {
public:
	unsigned int _buttons;
	unsigned int buttons;
	unsigned int holdButtons;
	unsigned int rapidFireButtons;
	unsigned int releasedButtons;
	unsigned int newPressedButtons;
	char _spacer2[0x30 - 6 * sizeof(unsigned int)];
	//0x30
	// TODO: calculate new offset
	s8 stickX;
	s8 stickY;
	s8 cStickX;
	s8 cStickY;
	s8 LAnalogue;
	s8 RAnalogue;
	s8 LTrigger;
	s8 RTrigger;

	//0x38
	//0xFF if not connected, else 0
	bool isNotConnected;

    char _spacer4[0x3C - 0x38 - 1];

	//0x3C
	int type;
}__attribute__((packed, aligned(4)));
static_assert(sizeof(gfPadStatus) == 0x40, "gfPadStatus is wrong size");
