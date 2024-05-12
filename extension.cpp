#include "pxt.h"


namespace sound
{
void activate()
{
uBit.audio->activateMic();
}
void deactivate()
{
uBit.audio->deactivateMic();
}
}