# Arduino Button-Controlled Buzzer

This project demonstrates how to control a buzzer with a push button using an Arduino. The buzzer will turn on when the button is pressed and turn off when the button is released. The state of the button and the buzzer is also printed to the Serial Monitor for debugging purposes.

## Components

- Arduino board (e.g., Arduino Uno)
- Buzzer
- Push button
- Connecting wires
- Breadboard

## Circuit Diagram

- Connect one terminal of the push button to pin 7 on the Arduino.
- Connect the other terminal of the push button to GND.
- Connect the positive terminal of the buzzer to pin 8 on the Arduino.
- Connect the negative terminal of the buzzer to GND.

## How to Use

1. **Upload the Code**: Upload the provided code to your Arduino board.
2. **Assemble the Circuit**: Connect the components according to the circuit diagram.
3. **Monitor Output**: Open the Serial Monitor to check the status of the button and buzzer.
4. **Test the Button**: Press and release the button to turn the buzzer on and off, respectively.

## Troubleshooting

- Ensure all connections are secure and correctly aligned with the pin numbers specified in the code.
- Verify that the push button is functioning correctly by checking its resistance when pressed and not pressed.
- Use the Serial Monitor to debug by observing the button state and buzzer status messages.

## Maintainer

[Sandi Andrian](mailto:andrian.sandi@gmail.com)

## License

This project is licensed under the MIT License.
