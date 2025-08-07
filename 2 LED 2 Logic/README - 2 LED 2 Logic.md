2 LED and 2 Logic - one in positive logic and one in negative logic (represented in the image)

Description
The Arduino UNO is connected to a breadboard hosting three LEDs (green, yellow, red), each with its own current-limiting resistor.

Positive Logic: The green and yellow LEDs are configured so their anodes (long legs) connect to the Arduino's digital output pins through the breadboard. Their cathodes are connected to ground. Setting the output pin HIGH turns these LEDs ON.

Negative Logic: The red LED is configured in reverse: its cathode is connected to an Arduino output pin, and its anode goes through a resistor to the 5V power rail. Setting the Arduino pin LOW turns this LED ON.

Labels above the LEDs indicate which are controlled with positive logic and which with negative logic.

The wiring showcases how different logic conventions can be implemented in a single project simply by changing how the LEDs are connected.
