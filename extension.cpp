#include "pxt.h"

namespace sound
{
    //%
	int record()
    {
        return uBit.audio.fft->getClosestNote();
	}
}