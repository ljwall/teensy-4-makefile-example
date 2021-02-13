#include <Arduino.h>

extern "C" {
#include "lib/setup.h"
}

int main(void)
{
	setupPins();

	while (1) {
		digitalWrite(13, HIGH);
		delay(500);
		digitalWrite(13, LOW);
		delay(500);
	}
}

