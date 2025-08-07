Circuit Description
Arduino UNO supplies 5V and GND to the breadboard for powering the circuit.

A push button is placed on the breadboard, serving as a digital input device.

A voltmeter is connected across the power rails to verify a 5V supply.

Connection Explanation and Voltage Flow
Power Distribution:

The Arduino's 5V pin is connected to the positive rail (red wire) of the breadboard.

The GND pin from the Arduino is connected to the breadboard's ground rail (black wire).

Push Button Wiring:

One side of the push button connects to the positive rail (5V).

The opposite side is connected to:

An Arduino digital input pin (green wire) for reading button state.

The ground rail via a black wire, which may serve as a pull-down configuration (though typically a pull-down resistor is ideal to avoid floating states).

Voltage Measurement:

The voltmeter is connected between the positive and ground rails on the breadboard, displaying 5.00V to ensure proper supply voltage.

How It Works
With power supplied, pressing the button creates a direct connection between the 5V rail and the Arduino digital input.

The microcontroller reads HIGH (logic 1) when the button is pressed, and LOW (logic 0) when released (depending on the logic and code setup).

The voltmeter confirms the breadboard is receiving a steady 5V supply, which is essential for reliable digital input detection.
