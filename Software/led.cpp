#include "led.h"

void led::setUp()
{
    pinMode(ledPin, OUTPUT);
}

void led::startBlinking(int n, int frequency)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= frequency; j++) {
            digitalWrite(ledPin, HIGH);
            delay((1000 / frequency) / 2);           
            digitalWrite(ledPin, LOW);
            delay((1000 / frequency) / 2);
        }
    }
}

void led::turnOnLed()
{
    digitalWrite(ledPin, HIGH);
}



