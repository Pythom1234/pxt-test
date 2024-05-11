#include "pxt.h"

namespace sound
{
    //%
	int record()
    {
        uBit.init();
        uBit.io.runmic.setDigitalValue(1);
        uBit.io.runmic.setHighDrive(true);
        return uBit.io.microphone.getAnalogValue();
	}
}