# RFID Door Lock
RFID-based Door Lock System 🔐🚪

This project implements a door lock system that uses RFID tags for access control. Authorized individuals can unlock the door by scanning their RFID cards or tags. The project is implemented using Arduino and written in C++.

## Folder Structure

📂 RFID_Door_Lock
   
   |
   
   ├── 📂 Libraries
   
   │     ├── ⚙️ MFRC522.h
   
   │     ├── ⚙️ Servo.h
   
   │     └── ⚙️ SPI.h
   
   │   
   
   ├── 📂 Source
   
   │     ├── ⚙️ RFIDDoorLock.h
   
   │     └── ⚙️ RFIDDoorLock.cpp
   
   │   
   
   ├── ⚙️ RFID_Door_Lock.ino
   
   └── ⚙️ README.md

The project folder structure consists of the following files and directories:

- **Libraries**: This directory contains the necessary libraries for the project.
  - ⚙️ MFRC522.h: Library for interfacing with the MFRC522 RFID module.
  - ⚙️ Servo.h: Library for controlling servo motors.
  - ⚙️ SPI.h: Library for SPI communication.
  
- **Source**: This directory contains the source code files for the RFID door lock class.
  - ⚙️ RFIDDoorLock.h: Header file containing the class declaration for the RFID door lock.
  - ⚙️ RFIDDoorLock.cpp: Source file containing the implementation of the RFID door lock class.
  
- ⚙️ RFID_Door_Lock.ino: The main Arduino sketch file that initializes the RFID door lock object and calls its methods.

- ⚙️ README.md: The documentation file explaining the project and its usage.

## Installation and Setup

To use this project, you will need the following components:

- Arduino board (e.g., Arduino Uno)
- MFRC522 RFID module
- Servo motor
- RFID cards or tags

Follow these steps to set up the project:

1. Download and install the Arduino IDE from the official Arduino website.
2. Clone or download this project repository.
3. Connect the MFRC522 RFID module to the Arduino board.
4. Connect the servo motor to the Arduino board.
5. Open the `RFID_Door_Lock.ino` file in the Arduino IDE.
6. Install the required libraries (`MFRC522`, `Servo`, and `SPI`) using the Arduino Library Manager.
7. Upload the code to the Arduino board.
8. Monitor the serial output to see the RFID card scanning results.

## Code Explanation

The RFID door lock functionality is implemented using an object-oriented approach with multiple files. The main sketch file `RFID_Door_Lock.ino` creates an instance of the `RFIDDoorLock` class and calls its methods.

The `RFIDDoorLock` class is defined in the `RFIDDoorLock.h` header file and implemented in the `RFIDDoorLock.cpp` source file. It handles the RFID card scanning and door locking/unlocking. The class utilizes the `MFRC522` library for interfacing with the RFID module and the `Servo` library for controlling the servo motor.

Make sure to connect the MFRC522 RFID module and servo motor correctly to the Arduino board and adjust the necessary pins in the code if required.

## Troubleshooting

If you encounter any issues or have trouble setting up the project, consider the following steps:

- Double-check the wiring connections between the components and the

 Arduino board.
- Ensure that the correct libraries (`MFRC522`, `Servo`, and `SPI`) are installed.
- Verify that the Arduino board and port are selected correctly in the Arduino IDE.
- Check the serial monitor for any error messages or unexpected behavior.

If the problem persists, feel free to seek assistance from the Arduino community or consult the official Arduino documentation.

---

This README file provides an overview of the RFID Door Lock project, its folder structure, installation instructions, code explanation, and troubleshooting tips. Use it as a guide to set up and understand the project.
