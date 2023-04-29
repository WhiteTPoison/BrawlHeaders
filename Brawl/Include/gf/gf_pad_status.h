#pragma once

#include <PAD/PADStatus.h>
namespace controllerType {
    const int GAMECUBE = 0;
    const int CLASSIC = 1;
    const int WIIMOTE = 2;
    const int WIICHUCK = 3;
}

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
	unsigned char stickX;
	unsigned char stickY;
	unsigned char cStickX;
	unsigned char cStickY;
	unsigned char LAnalogue;
	unsigned char RAnalogue;
	char _spacer5[0x2];

	//0x38
	//0xFF if not connected, else 0
	bool isNotConnected;

    char _spacer4[0x3];

	//0x3C
	int type;

	gfPadStatus();
	gfPadStatus(const gfPadStatus& D);
	gfPadStatus& operator=(const gfPadStatus &D );
};
#pragma pack(pop)
static_assert(sizeof(gfPadStatus) == 0x40, "gfPadStatus is wrong size");