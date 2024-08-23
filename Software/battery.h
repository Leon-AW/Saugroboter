#pragma once
#include <Arduino.h>
class battery
{
	const int batteryPin = 4;
	const int fanPin = 12;

	const int blueLedPin = 4;
	const int yellowLedPin = 7;
	const int redLedPin = 8;

	const float voltageBatteryCharged = 12.68f;
	float readBatteryVoltage();
public:
	bool batteryControl();
	void setUp();
	void toggleFan(bool);
};
