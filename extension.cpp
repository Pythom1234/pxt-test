#include "pxt.h"



namespace soundCpp
{
    //%
	int record()
    {
        return uBit.audio.fft->getClosestNote();
	}
    //%
	void init()
    {
	}
}