Simple program for making LED glow in high connected with arduino UNO and simulated in TinkerCAD
Description
The Arduino UNO provides power and digital output control.

A single LED is connected in series with a current-limiting resistor on the breadboard.

One jumper wire connects from Arduino digital pin 13 to the breadboard row with the LED's anode (long leg).

The cathode (short leg) of the LED connects to one side of the resistor.

The other side of the resistor is wired to the GND (ground) pin on the Arduino.

Circuit Operation
When digital pin 13 is set HIGH in the Arduino code, current flows through the LED–resistor series, lighting the LED.

Setting pin 13 LOW turns the LED off.

This configuration is commonly used for testing Arduino code or learning basic digital output
