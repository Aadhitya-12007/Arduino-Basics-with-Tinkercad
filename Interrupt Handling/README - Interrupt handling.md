Description
Arduino UNO is used as the central microcontroller.

Two push buttons are set up on a breadboard—each used to trigger an interrupt.

Two LEDs (with current-limiting resistors) provide a visual indication, lighting up when their respective interrupts are triggered.

Jumper wires connect the components, and power is distributed to the breadboard from the Arduino's 5V and GND pins.

Circuit Connection Explanation
Power Distribution:

The Arduino's 5V pin (red wire) is connected to the breadboard's positive rail.

The Arduino's GND pin (black wire) is connected to the breadboard's negative rail.

LED and Resistor Connections:

Each LED has its anode (long leg) connected to the positive rail via a current-limiting resistor.

The cathodes (short leg) of the LEDs are connected to the GND rail.

Push Button Wiring:

Each push button is placed across the middle channel of the breadboard.

One leg of each button is connected to an Arduino digital interrupt pin (for UNO, typically pins 2 and 3).

The other leg of each button is connected to the GND rail, creating a pull-down effect.

When a button is pressed, it brings the interrupt pin LOW, triggering the associated interrupt.

Signal Flow:

When the first button is pressed, it triggers an interrupt service routine (ISR) on, for example, pin 2, causing LED Interrupt 1 to turn ON or toggle state.

Similarly, pressing the second button triggers an ISR on pin 3, controlling LED Interrupt 2.

Circuit Operation and Flow
The Arduino continuously runs in the main loop, but when either button is pressed, the corresponding interrupt is triggered immediately (regardless of what the main code is doing).

Inside the associated ISR, the program changes the state of the LED linked to that interrupt (e.g., toggles ON/OFF or turns ON momentarily).

This demonstrates the real-time responsiveness of microcontrollers to external events using interrupts, which is crucial for responsive embedded designs.
