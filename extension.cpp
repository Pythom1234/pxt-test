#include "pxt.h"

namespace sound
{
    //%
	int record()
    {
        uBit.init();
        uBit.io.pin[20].setDigitalValue(1);
        uBit.io.pin[20].setHighDrive(true);
        return uBit.io.pin[5].getAnalogValue();
	}
}