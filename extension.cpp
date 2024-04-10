#include "pxt.h"

namespace sound{
    //%
	void record(){
        uBit.init()
        uBit.audio.recorder->startRecording();
	}