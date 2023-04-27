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
	signed char LAnalogue;
	signed char RAnalogue;
	signed char LTrigger;
	signed char RTrigger;

	//0x38
	//0xFF if not connected, else 0
	bool isNotConnected;

    char _spacer4[0x3];

	//0x3C
	int type;

	gfPadStatus() {
		_buttons = 0;
		buttons = 0;
		holdButtons = 0;
		rapidFireButtons = 0;
		releasedButtons = 0;
		newPressedButtons = 0;
		stickX = 0;
		stickY = 0;
		cStickX = 0;
		cStickY = 0;
		LAnalogue = 0;
		RAnalogue = 0;
		LTrigger = 0;
		RTrigger = 0;
		isNotConnected = 0;
		type = controllerType::GAMECUBE;
	}
	gfPadStatus(const gfPadStatus& D) {
		_buttons = D._buttons;
		buttons = D.buttons;
		holdButtons = D.holdButtons;
		rapidFireButtons = D.rapidFireButtons;
		releasedButtons = D.releasedButtons;
		newPressedButtons = D.newPressedButtons;
		stickX = D.stickX;
		stickY = D.stickY;
		cStickX = D.cStickX;
		cStickY = D.cStickY;
		LAnalogue = D.LAnalogue;
		RAnalogue = D.RAnalogue;
		LTrigger = D.LTrigger;
		RTrigger = D.RTrigger;
		isNotConnected = D.isNotConnected;
		type = D.type;
	}
	gfPadStatus& operator = (const gfPadStatus &D ) {
		_buttons = D._buttons;
		buttons = D.buttons;
		holdButtons = D.holdButtons;
		rapidFireButtons = D.rapidFireButtons;
		releasedButtons = D.releasedButtons;
		newPressedButtons = D.newPressedButtons;
		stickX = D.stickX;
		stickY = D.stickY;
		cStickX = D.cStickX;
		cStickY = D.cStickY;
		LAnalogue = D.LAnalogue;
		RAnalogue = D.RAnalogue;
		LTrigger = D.LTrigger;
		RTrigger = D.RTrigger;
		isNotConnected = D.isNotConnected;
		type = D.type;
		return *this;
	}
};
#pragma pack(pop)
static_assert(sizeof(gfPadStatus) == 0x40, "gfPadStatus is wrong size");