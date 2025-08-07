Circuit Description
Arduino UNO: Functions as the main microcontroller, reading signals from the PIR sensor and processing movement detection events.

Breadboard: Used for organizing and securely connecting the PIR sensor module to the Arduino with jumper wires.

PIR Sensor Module: Detects infrared radiation from moving objects (typically humans or animals) and outputs a digital signal when motion is detected.

Connection Explanation
Powering the Breadboard:

The Arduino's 5V pin is connected (red wire) to the breadboard's positive rail, distributing 5V to all components.

The GND pin is attached (black wire) to the breadboard’s negative rail, completing the ground circuit.

PIR Sensor Wiring:

The sensor has three pins (usually marked VCC, OUT, GND from left to right):

VCC: Connects to the breadboard’s 5V power rail (red wire).

GND: Connects to the ground rail (black wire).

OUT: Signal output pin connected to a digital input pin of the Arduino (pin 2 in this image, green wire).

The sensor is placed such that its detection zone faces outward and is unobstructed.

Signal Flow:

When the PIR sensor detects motion, the OUT pin goes HIGH (typically 3.3V–5V, matching VCC).

The Arduino reads the signal on the assigned digital pin (D2 in the setup).

The Arduino can then trigger actions such as turning on an LED, sounding a buzzer, or logging the event in software.

Circuit Flow Summary
Power Supply: Arduino provides regulated 5V and GND to breadboard and sensor.

Sensing: PIR sensor monitors for moving heat signatures in its field of view.

Output Signal: Upon motion detection, the sensor's OUT pin transitions HIGH.

Microcontroller Input: Arduino digital pin continuously checks the sensor output and responds per the programmed logic (e.g., print "Motion Detected" on Serial Monitor).
