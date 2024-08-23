#pragma once
#include <Arduino.h>
class led
{
	const int ledPin = 13;
public:
	void setUp();
	void startBlinking(int, int);
	void turnOnLed();
};
