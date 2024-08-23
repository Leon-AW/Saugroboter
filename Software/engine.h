#pragma once
#include <Arduino.h>
class engine
{
	const int rightEnginePin1 = 3;
	const int rightEnginePin2 = 5;

	const int leftEnginePin1 = 6;
	const int leftEnginePin2 = 9;

	const int enginePower = 70;

public:
	void setUp();
	void moveForward(int);
	void moveBackward(int);
	void moveRight(int);
	void moveLeft(int);
	void stop();
};
