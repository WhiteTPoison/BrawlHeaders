#pragma once

#include <gf/gf_pad_status.h>

class gfPadSystem {
public:
	char _spacer[0x40];
	//0x40
	gfPadStatus gcPads[4];
	// there's more data in this struct... but padding on the ends isn't necessary (i think it's actually size 0xb6c)

	char _spacer2[0x104];
	gfPadStatus gcSysPads[4];
	//0x0244 seems like where inputmask starts (during SystemPadStatus checks)
	//0x0444 seems like where inputmask starts (during GamePadStatus checks)
	gfPadSystem()
	{
		for(int i = 0 ; i < 4; i++)
		{
			gcSysPads[i] = gfPadStatus();
		}
		for(int i = 0 ; i < 4; i++)
		{
			gcSysPads[i] = gfPadStatus();
		}
	}
	gfPadSystem(const gfPadSystem &D)
	{
		for(int i = 0 ; i < 4; i++)
		{
			gcSysPads[i] = gfPadStatus(D.gcPads[i]);
		}
		for(int i = 0 ; i < 4; i++)
		{
			gcSysPads[i] = gfPadStatus(D.gcSysPads[i]);
		}
	}
	gfPadSystem& operator = (const gfPadSystem &D ) 
	{
		if( this != &D ) {
			for(int i = 0 ; i < 4; i++)
			{
				gcSysPads[i] = gfPadStatus(D.gcPads[i]);
			}
			for(int i = 0 ; i < 4; i++)
			{
				gcSysPads[i] = gfPadStatus(D.gcSysPads[i]);
			}
		}
		return *this;
	}
};

extern gfPadSystem* const g_PadSystem;