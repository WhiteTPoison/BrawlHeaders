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
	signed char stickX;
	signed char stickY;
	signed char cStickX;
	signed char cStickY;
	signed char LAnalogue;
	signed char RAnalogue;
	char _spacer5[0x2];

	//0x38
	//0xFF if not connected, else 0
	bool isNotConnected;

    char _spacer4[0x3];

	//0x3C
	int type;

	gfPadStatus() {
		_buttons.bits = 0;
		buttons.bits = 0;
		holdButtons.bits = 0;
		rapidFireButtons.bits = 0;
		releasedButtons.bits = 0;
		newPressedButtons.bits = 0;
		stickX = 0;
		stickY = 0;
		cStickX = 0;
		cStickY = 0;
		LAnalogue = 0;
		RAnalogue = 0;
		isNotConnected = 0;
		type = controllerType::GAMECUBE;
	}
	gfPadStatus(const gfPadStatus& D) {
		_buttons.bits = D._buttons.bits;
		buttons.bits = D.buttons.bits;
		holdButtons.bits = D.holdButtons.bits;
		rapidFireButtons.bits = D.rapidFireButtons.bits;
		releasedButtons.bits = D.releasedButtons.bits;
		newPressedButtons.bits = D.newPressedButtons.bits;
		stickX = D.stickX;
		stickY = D.stickY;
		cStickX = D.cStickX;
		cStickY = D.cStickY;
		LAnalogue = D.LAnalogue;
		RAnalogue = D.RAnalogue;
		isNotConnected = D.isNotConnected;
		type = D.type;
	}
	gfPadStatus& operator = (const gfPadStatus &D ) {
		if( this != &D ) {
			_buttons.bits = D._buttons.bits;
			buttons.bits = D.buttons.bits;
			holdButtons.bits = D.holdButtons.bits;
			rapidFireButtons.bits = D.rapidFireButtons.bits;
			releasedButtons.bits = D.releasedButtons.bits;
			newPressedButtons.bits = D.newPressedButtons.bits;
			stickX = D.stickX;
			stickY = D.stickY;
			cStickX = D.cStickX;
			cStickY = D.cStickY;
			LAnalogue = D.LAnalogue;
			RAnalogue = D.RAnalogue;
			isNotConnected = D.isNotConnected;
			type = D.type;
		}
		return *this;
	}
};
#pragma pack(pop)
static_assert(sizeof(gfPadStatus) == 0x40, "gfPadStatus is wrong size");