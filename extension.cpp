#include "pxt.h"
using namespace pxt;
namespace pokus {
    //%
    void pokus() {
        uBit.init()
        uBit.audio.recorder->startRecording()
    }
}
