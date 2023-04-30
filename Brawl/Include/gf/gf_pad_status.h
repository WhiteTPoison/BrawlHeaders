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
	unsigned int _buttons;
	unsigned int buttons;
	unsigned int holdButtons;
	unsigned int rapidFireButtons;
	unsigned int releasedButtons;
	unsigned int newPressedButtons;
	char _spacer2[0x18];
	//0x30
	// TODO: calculate new offset
	signed char stickX;
	signed char stickY;
	signed char cStickX;
	signed char cStickY;
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