#include "battery.h"

void battery::setUp()
{
	pinMode(fanPin, OUTPUT);
	pinMode(batteryPin, INPUT);
	pinMode(blueLedPin, OUTPUT);
	pinMode(yellowLedPin, OUTPUT);
	pinMode(redLedPin, OUTPUT);
}

float battery::readBatteryVoltage()
{
  const int readInput = analogRead(batteryPin);
  const float voltage = (((readInput * 4.9) / 1000) * voltageBatteryCharged) / 5;
  return voltage;
}

void battery::toggleFan(bool start)
{
	if (start)
	{
		if (readBatteryVoltage() > 12.1f) {
			digitalWrite(fanPin, HIGH);
			digitalWrite(blueLedPin, HIGH);
			delay(1000);
		}
	}
	else
	{
		digitalWrite(fanPin, LOW);
	}
}



bool battery::batteryControl()
{
	const float v_battery = readBatteryVoltage();
	if (v_battery <= 11.6f) {
		digitalWrite(redLedPin, HIGH);
		return false;
	}

	digitalWrite(yellowLedPin, HIGH);
	return true;
}
