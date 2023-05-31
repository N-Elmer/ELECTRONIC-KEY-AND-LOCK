#ifndef RFID_DOOR_LOCK_H
#define RFID_DOOR_LOCK_H

#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

class RFIDDoorLock {
  private:
    MFRC522 rfid;
    Servo lockServo;
    String authorizedUID;

  public:
    RFIDDoorLock(String uid);

    void setup();
    void loop();
    void unlockDoor();
};

#endif