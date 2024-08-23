#pragma once
#include <Arduino.h>
class sensors
{

	const int leftSDSensorPin = 0;
	const int rightSDSensorPin = 1;

	//Bumper
	const int leftBumperPin = 10;
	const int rightBumperPin = 11;

public:
	void setUp();
	bool isInDistanceOf(bool);
	bool isBumperActivated();
};
