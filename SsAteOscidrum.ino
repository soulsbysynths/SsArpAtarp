#include <AteDrum.h>
#include <AteDrumEngineBase.h>
#include <AteDrumPatch.h>
#include <AteOscHardwareBase.h>
#include <AtmAudio/AtmAudio.h>
#include <LedRgb.h>
#include <LedCircular.h>
#include <CvInput.h>
#include <Switch.h>
#include <RotaryEncoder.h>
#include <FixedMath/FixedMath.h>
#include <DelayLine/DelayLine.h>
#include <AteOscPitch.h>

AteDrum oscidrum;

void setup()
{

	oscidrum.initialize();

}

void loop()
{

	static unsigned long last_millis;
	unsigned char ticksPassed = millis() - last_millis;
	last_millis += ticksPassed;
	oscidrum.poll(ticksPassed);

}
