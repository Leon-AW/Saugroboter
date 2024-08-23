#include "drive.h"

void drive::setUp()
{
	_battery.setUp();
	_led.setUp();
	_sensors.setUp();
	_engine.setUp();

	_led.startBlinking(5, 1);
	_battery.toggleFan(true);
}


void drive::startCleaning()
{
	if (_battery.batteryControl())
	{
		_led.turnOnLed();

		if (_sensors.isInDistanceOf(true))
		{
			if (stuckedCounter == 2)
				stuckedCounter = 0;

			_engine.moveForward(100);
			_engine.moveBackward(500);
			_engine.moveLeft(300);
			stuckedCounter += 2;
		}

		if (_sensors.isInDistanceOf(false))
		{
			if (stuckedCounter == 1)
				stuckedCounter = 0;

			_engine.moveForward(100);
			_engine.moveBackward(500);
			_engine.moveBackward(300);
			stuckedCounter++;
		}

		if (_sensors.isBumperActivated())
		{
			stuckedCounter = 0;
			_engine.moveBackward(500);
			_engine.moveLeft(300);
		}
		else
		{
			if (stuckedCounter == 3)
			{
				_engine.moveLeft(1000);
				stuckedCounter = 0;
			} 
			else
			{
				_engine.moveForward(0);
			}
		}
	}
	else
	{
		_battery.toggleFan(false);
		_engine.stop();
		_led.startBlinking(1, 3);
	}
}