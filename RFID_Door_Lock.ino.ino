#include "Source/RFIDDoorLock.h"

RFIDDoorLock doorLock("A1B2C3D4");

void setup() {
  doorLock.setup();
}

void loop() {
  doorLock.loop();
}