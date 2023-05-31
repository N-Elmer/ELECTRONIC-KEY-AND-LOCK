# RFID DOOR LOCK
ACCESS CONTROL SYSTEM 🔐🚪 USING RFID TAGS

This project is an RFID door lock system that allows authorized individuals to unlock doors by scanning their RFID cards or tags. It is implemented using Arduino.

## Folder Structure

📂 RFID_Door_Lock
   
   |
   
   ├── 📂 Libraries
   
   │     ├── 🔌 RFID.h
   
   │     └── 🔌 Servo.h
   
   │   
   
   ├── ⚙️ RFID_Door_Lock.ino
   
   └── ⚙️ README.md

The project folder structure consists of the following files and directories:

- **Libraries**: This directory contains the necessary libraries for the project.
  - 🔌 RFID.h: Library for handling RFID functionality.
  - 🔌 Servo.h: Library for controlling the servo motor.
  
- ⚙️ RFID_Door_Lock.ino: The main Arduino file that contains the code for the RFID door lock system.

- ⚙️ README.md: The documentation file explaining the project and its usage.

## Installation and Setup

To use this project, you will need the following components:

- Arduino board (e.g., Arduino Uno)
- RFID reader
- Servo motor
- RFID cards or tags

Follow these steps to set up the project:

1. Connect the RFID reader to the Arduino board.
2. Connect the servo motor to the Arduino board.
3. Connect the necessary power and ground connections.
4. Download and install the Arduino IDE from the official Arduino website.
5. Clone or download this project repository.
6. Open `RFID_Door_Lock.ino` file in the Arduino IDE.
7. Install the required libraries using the Arduino Library Manager or manually by placing them in the appropriate libraries folder.
8. Select the correct Arduino board and port in the Arduino IDE.
9. Upload the code to the Arduino board.
10. Ensure that the RFID reader and servo motor are properly connected and functioning.
11. Scan an authorized RFID card or tag on the RFID reader to unlock the door.

## Code Explanation

The `RFID_Door_Lock.ino` file contains the code for the RFID door lock system. In the `setup()` function, it initializes the serial communication, RFID reader, and servo motor. The `loop()` function continuously checks if a new RFID card or tag is detected. If a card is detected, it reads the card's unique identifier (UID) and compares it with the authorized card UID. If the UID matches, it calls the `unlockDoor()` function to unlock the door by controlling the servo motor. If the UID doesn't match, it prints an "Unauthorized access" message and keeps the door locked.

The `unlockDoor()` function rotates the servo motor to a specific angle to unlock the door for a certain duration. After the specified duration, it rotates the servo motor back to its initial position to lock the door again.

## Requirements

The following libraries are required for this project:

- RFID
- Servo

You can install these libraries using the Arduino Library Manager or by manually adding them to the libraries folder in your Arduino installation.

## Troubleshooting

If you encounter any issues or have trouble setting up the project, consider the following steps:

- Double-check the wiring connections between the components and the Arduino board.
- Ensure that the correct libraries are installed.
- Verify that the Arduino board and port are selected correctly in the Arduino IDE.
- Check the serial monitor for any error messages or unexpected behavior.

If the problem persists, feel free to seek assistance from the Arduino community or consult the official Arduino documentation.

##
