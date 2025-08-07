Circuit Description
Arduino UNO is used to read analog values from a potentiometer.

A potentiometer is mounted on the breadboard. Its two outer terminals are connected to 5V (red wire) and GND (black wire) from the Arduino.

The middle terminal (wiper) of the potentiometer is connected to an Arduino analog input pin (A0) using a green wire.

A voltmeter is connected between the wiper and GND to measure the current voltage at the potentiometer output, displaying 2.50V in this example.

Connection Explanation and Voltage Flow
Power Supply:

The red wire connects the Arduino 5V pin to the breadboard’s positive rail.

The black wire connects Arduino GND to the breadboard’s ground rail.

These rails distribute power to the potentiometer.

Potentiometer Connections:

One outer leg connects to the breadboard’s 5V rail (red wire).

The other outer leg connects to the breadboard’s GND rail (black wire).

The middle leg (wiper) connects to Arduino analog pin A0 and to the voltmeter’s positive terminal (green wire).

Voltage Division and Measurement:

As you turn the knob, the wiper moves along the resistive element, providing a variable voltage between 0V (GND) and 5V (Vcc).

The Arduino reads this voltage as an analog value (0-1023) using the analogRead() function.

The voltmeter shows the exact voltage output of the potentiometer’s wiper; here, it reads 2.50V, indicating the potentiometer is set midway.

How it Works
Turning the potentiometer adjusts the division of voltage between its ends, allowing any value between 0V and 5V to be supplied to the Arduino analog input.

This setup is commonly used for:

Controlling brightness, speed, or position in Arduino projects.

User input for variable parameters (e.g., volume knobs, dimmers).
