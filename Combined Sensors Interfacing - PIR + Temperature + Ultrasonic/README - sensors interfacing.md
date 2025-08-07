Description
Arduino UNO serves as the central controller, orchestrating sensor readings and output signals.

Three Breadboards organize the circuit:

The first breadboard: Houses three LEDs (blue, green, red), each with its own current-limiting resistor.

The second breadboard: Contains an HC-SR04 ultrasonic distance sensor, a TMP temperature sensor (likely TMP36 or similar), and supports necessary wiring for these components.

The third breadboard: Hosts a PIR motion sensor module for motion detection.

Circuit Connection Explanation
1. Power Distribution
Arduino 5V and GND rails are distributed to each breadboard through red (5V) and black (GND) wires.

2. LEDs and Resistors (Indicators)
Blue, green, and red LEDs are connected to the Arduino’s digital output pins through 220Ω resistors (recommended). Each LED’s cathode is connected to GND.

Digital pins (e.g., D2, D3, D4) control the LEDs, allowing for visual indication based on sensor readings.

3. HC-SR04 Ultrasonic Sensor (Distance Measurement)
VCC and GND: Connected to 5V and ground rails.

Trig: Connected to a digital output pin (commonly D7 or D8) to trigger the ultrasonic pulse.

Echo: Connected to a digital input pin (commonly D6 or D5) to read the reflected signal.

4. TMP Analog Temperature Sensor
GND pin (leftmost): Connected to ground.

VCC (center): Connected to 5V.

Vout (rightmost): Connected to an Arduino analog input pin (e.g., A0) for reading an analog voltage proportional to temperature.

5. PIR Motion Sensor
VCC: Connected to 5V power rail.

GND: To ground.

OUT: Connected to a digital input pin (commonly D10 or D11) to detect motion.

Circuit Flow
Power Up: All components are powered from the Arduino's regulated 5V and GND.

Sensor Monitoring:

The Arduino continually reads input from the ultrasonic sensor (for distance), the temperature sensor (for ambient temperature), and the PIR sensor (for motion).

LED Indication:

Based on sensor values:

The blue, green, or red LED lights up to indicate specific situations (e.g., safe/alert/danger for distance, temperature thresholds, or detected motion).

For example:

Blue LED could indicate normal conditions.

Green LED signals a particular threshold (e.g., acceptable range).

Red LED might alert to danger or motion detection.

Data Processing:

Arduino processes the sensor data and dynamically controls the LEDs accordingly.

This structure allows for custom logic in the sketch to map sensor events to visual output.
