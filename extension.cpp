#include "pxt.h"

namespace sound{
    //%
	int record(){
        uBit.init();
        return uBit.io.pin[5].getAnalogValue()
	}