Description
Arduino UNO: Supplies power (5V and GND) and serves as the microcontroller reading signals from the sensor.

Breadboard: Connects and organizes the circuit, distributing power and linking sensor pins.

PIR Motion Sensor Module: Detects movement by sensing changes in infrared radiation (emitted by warm bodies such as humans or animals).

Circuit Connection Explanation
Breadboard Power Rails:

The Arduino’s 5V pin connects to the breadboard’s positive (red) power rail.

The GND pin connects to the negative (black) power rail.

These rails deliver stable, regulated voltage to all connected components.

PIR Sensor Wiring (typically marked VCC, OUT, GND from left to right):

VCC: Connected to the breadboard’s 5V rail.

GND: Connected to the breadboard’s ground rail.

OUT (Signal): Linked to a digital input pin on the Arduino (pin 2 in this configuration).

Flow of Operation
Power Distribution:

The Arduino powers the breadboard and, in turn, the PIR sensor module.

Sensor Monitoring:

The PIR sensor continuously scans its environment for motion.

When it detects movement (change in infrared heat), the output pin (OUT) goes HIGH.

Microcontroller Response:

Arduino monitors the signal pin.

Upon detecting a HIGH signal (motion), it can execute programmed actions (e.g., lighting LEDs, sounding alarms, or sending serial messages).

Idle State:

When no motion is detected, the OUT pin stays LOW, and the Arduino does nothing or may execute "no motion" logic in code.
