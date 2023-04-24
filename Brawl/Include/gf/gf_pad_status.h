#pragma once

#include <PAD/PADStatus.h>
enum controllerType {
    GAMECUBE = 0,
    CLASSIC = 1,
    WIIMOTE = 2,
    WIICHUCK = 3
};

#pragma pack(push, 2)

class gfPadStatus {
public:
	PADButtons _buttons;
	PADButtons buttons;
	PADButtons holdButtons;
	PADButtons rapidFireButtons;
	PADButtons releasedButtons;
	PADButtons newPressedButtons;
	char _spacer2[0x18];
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

    s8 _spacer4[0x3];

	//0x3C
	controllerType type;
};
#pragma pack(pop)
static_assert(sizeof(gfPadStatus) == 0x40, "gfPadStatus is wrong size");