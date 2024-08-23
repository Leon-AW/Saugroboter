#include "sensors.h"
#include <math.h>

void sensors::setUp()
{
	pinMode(leftBumperPin, INPUT_PULLUP);
	pinMode(rightBumperPin, INPUT_PULLUP);
	pinMode(leftSDSensorPin, INPUT);
	pinMode(rightSDSensorPin, INPUT);
}

bool sensors::isInDistanceOf(const bool leftSensor)
{
	int sensor;
	if (leftSensor)
		sensor = leftSDSensorPin;
	else
		sensor = rightSDSensorPin;

	double dist = pow(analogRead(sensor), -0.857);
	return (dist * 1167.9) <=4.3;
}

bool sensors::isBumperActivated()
{
	if (digitalRead(leftBumperPin) == 1 || digitalRead(rightBumperPin) == 1)
	{
		return true;
	}
	return false;
}
