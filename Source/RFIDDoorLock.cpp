#include "RFIDDoorLock.h"

RFIDDoorLock::RFIDDoorLock(String uid) : authorizedUID(uid) {}

void RFIDDoorLock::setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
  lockServo.attach(11);
  lockServo.write(0);
  Serial.println("RFID Door Lock Initialized");
}

void RFIDDoorLock::loop() {
  if (rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial()) {
    String cardUID = "";
    for (byte i = 0; i < rfid.uid.size; i++) {
      cardUID += String(rfid.uid.uidByte[i] < 0x10 ? "0" : "");
      cardUID += String(rfid.uid.uidByte[i], HEX);
    }
    Serial.print("Scanned RFID Card UID: ");
    Serial.println(cardUID);
    
    // Check if the scanned card UID matches the authorized card UID
    if (cardUID == authorizedUID) {
      unlockDoor();
    } else {
      Serial.println("Unauthorized access. Door remains locked.");
    }
    delay(2000);
    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
  }
}

void RFIDDoorLock::unlockDoor() {
  Serial.println("Access granted. Door unlocked.");
  lockServo.write(90);  // Rotate the servo motor to unlock the door
  delay(5000);  // Keep the door unlocked for 5 seconds
  lockServo.write(0);  // Rotate the servo motor to lock the door
  Serial.println("Door locked.");
}