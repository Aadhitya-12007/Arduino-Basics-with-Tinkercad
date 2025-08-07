Arduino UNO: LED Control with Push Button Example
This project demonstrates a simple digital input and output control using an Arduino UNO. 
In this circuit, a push-button switch is used to control an LED, providing hands-on practice with basic breadboarding and digital electronics.

Features
Digital Input: Reads the state of a push-button.

Digital Output: Toggles an LED based on button press.

Voltage Meter: Measurement probe across the 5V and GND rails for circuit troubleshooting or demonstration.

Circuit Overview
The Arduino UNO supplies 5V and GND to the breadboard rails.

The push button connects to one of the Arduino's digital pins and is used as a user input.

An LED is connected in series with a current-limiting resistor to prevent burn-out.

A multimeter is shown connected to measure the supply voltage.

Breadboard connections ensure easy adjustments.

Components Used
Arduino UNO board

Breadboard

LED (5mm)

Current-limiting resistor (typically 220Ω–1kΩ)

Push-button switch

Jumper wires

Multimeter (optional, for voltage verification)

Usage
Press the button to send a HIGH signal to the Arduino input pin.

Arduino reads the input and turns on the LED if the button is pressed.

Release the button to turn off the LED.
