#pragma once
#include "battery.h"
#include "led.h"
#include "sensors.h"
#include "engine.h"
class drive
{
	battery _battery = battery();
	led _led = led();
	sensors _sensors = sensors();
	engine _engine = engine();

	int stuckedCounter = 0;

public:
	void setUp();
	void startCleaning();
};

