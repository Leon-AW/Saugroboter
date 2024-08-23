#include "drive.h"

drive _drive = drive();

void setup() {
  _drive.setUp();
}

void loop() {
  _drive.startCleaning();
}
