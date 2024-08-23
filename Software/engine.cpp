#include "engine.h"

void engine::setUp()
{
	pinMode(rightEnginePin1, OUTPUT);
	pinMode(rightEnginePin2, OUTPUT);

	pinMode(leftEnginePin1, OUTPUT);
	pinMode(leftEnginePin2, OUTPUT);
}

void engine::moveForward(int movingTime)
{
	analogWrite(rightEnginePin1, enginePower);
	analogWrite(rightEnginePin2, 0);
	analogWrite(leftEnginePin1, enginePower);
	analogWrite(leftEnginePin2, 0);
	delay(movingTime);
}

void engine::moveBackward(int movingTime)
{
	analogWrite(rightEnginePin1, 0);
	analogWrite(rightEnginePin2, enginePower + 20);
	analogWrite(leftEnginePin1, 0);
	analogWrite(leftEnginePin2, enginePower + 20);
	delay(movingTime);
}

void engine::moveRight(int movingTime)
{
	analogWrite(rightEnginePin1, 0);
	analogWrite(rightEnginePin2, enginePower);
	analogWrite(leftEnginePin1, enginePower);
	analogWrite(leftEnginePin2, 0);
	delay(movingTime);
}

void engine::moveLeft(int movingTime)
{
	analogWrite(rightEnginePin1, enginePower);
	analogWrite(rightEnginePin2, 0);
	analogWrite(leftEnginePin1, 0);
	analogWrite(leftEnginePin2, enginePower + 20);
	delay(movingTime);
}


void engine::stop()
{
	analogWrite(rightEnginePin1, 0);
	analogWrite(rightEnginePin2, 0);
	analogWrite(leftEnginePin1, 0);
	analogWrite(leftEnginePin2, 0);
}


