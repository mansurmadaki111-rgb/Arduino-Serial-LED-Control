                                           Bluetooth-LED-Control-7Channel
Project Overview:
This project allows you to control up to 7 LEDs connected to an Arduino board using Serial or Bluetooth commands.
It’s a simple and fun way to learn serial communication, digital output control, and Bluetooth-based automation.

Components Required:
| Component                           | Quantity  | Description                    |
| ----------------------------------- | --------- | ------------------------------ |
| Arduino Uno / Nano                  | 1         | Main microcontroller board     |
| HC-05 Bluetooth Module *(optional)* | 1         | For wireless control via phone |
| LEDs                                | 7         | Output indicators              |
| 220Ω Resistors                      | 7         | To limit current through LEDs  |
| Jumper Wires                        | As needed | For connections                |
| Breadboard                          | 1         | For circuit setup              |

Circuit Connections:
| LED  | Arduino Pin | Command to Turn ON | Command to Turn OFF |
| ---- | ----------- | ------------------ | ------------------- |
| LED1 | 2           | `1`                | `2`                 |
| LED2 | 3           | `3`                | `4`                 |
| LED3 | 4           | `5`                | `6`                 |
| LED4 | 5           | `7`                | `8`                 |
| LED5 | 6           | `9`                | `A`                 |
| LED6 | 7           | `B`                | `C`                 |
| LED7 | 8           | `D`                | `E`                 |
Note:
Connect the negative (–) side of all LEDs to Arduino GND through 220Ω resistors.
If using an HC-05 Bluetooth module, connect:
.VCC → 5V
.GND → GND
.TX → Pin 0 (RX)
.RX → Pin 1 (TX) (use a voltage divider for safety).


 Arduino Code:
The complete source code (.ino file) is included in this repository.

You can upload it to your Arduino using the Arduino IDE.


How to Use:
Upload the Arduino code to your board.
Open the Serial Monitor (or connect via Bluetooth terminal app on your phone).

Send the following commands:

1 → Turn ON LED1

2 → Turn OFF LED1

3 → Turn ON LED2

4 → Turn OFF LED2
… and so on up to E for LED7.


Optional: Control via Bluetooth App:

You can use any serial Bluetooth app (e.g., Bluetooth Terminal or MIT App Inventor custom app) to send the same commands wirelessly, but in my case i am using MIT app inventor

Learning Outcomes:

.Understand Serial communication in Arduino

.Learn how to use digital I/O pins

.Control multiple outputs from a single microcontroller

.Optionally extend to IoT or smartphone automation


Author:

Created by: Mansur Isah Madaki

Organization: SmartSense

License: MIT License

