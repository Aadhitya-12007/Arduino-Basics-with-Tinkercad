Circuit Description
Arduino UNO acts as both an analog signal reader (ADC) and analog output generator (using PWM as a DAC).

Two breadboards are used:

The upper breadboard lights a blue LED based on the analog output (DAC) signal.

The lower breadboard features a potentiometer for analog signal input, controlling an amber LED.

Two voltmeters are present for direct measurement:

One monitors the DAC output voltage (upper breadboard).

The other measures the analog voltage read by the ADC at the potentiometer (lower breadboard).

Connection Explanation and Signal Flow
1. Potentiometer as Analog Input (ADC)
The potentiometer is wired across 5V (red wire) and GND (black wire) rails.

The wiper (middle terminal) of the potentiometer is connected to:

An Arduino analog input pin (A0) via a yellow wire.

The orange LED (through a current-limiting resistor), which changes brightness according to the potentiometer's position.

The ADC voltmeter, displaying 4.03V at the shown setting.

2. Analog Output (DAC using PWM)
An Arduino PWM-enabled digital pin (e.g., D9 or D10) is used for simulated analog output.

This line is connected to:

The blue LED (via a current-limiting resistor) on the upper breadboard, which adjusts in brightness as the output voltage changes.

The DAC voltmeter, which shows the average voltage (here, 4.00V). A low-pass filter might be used (not shown) for smoother voltage if needed.

3. LED Indication
The amber LED on the lower breadboard visualizes the analog input (light intensity changes with potentiometer position).

The blue LED on the upper breadboard visualizes the analog output (PWM), changing brightness with DAC output voltage.

4. Voltage Monitoring
The two voltmeters give live feedback:

DAC voltage: Arduino PWM output level.

ADC voltage: Voltage present at the potentiometer's wiper, as read by the Arduino analog input.

How the System Works
The user rotates the potentiometer, setting an analog voltage between 0 and 5V.

The Arduino reads this voltage using its analog input (ADC), typically via the analogRead() function.

The read value can then be processed or directly assigned to a PWM output pin through the analogWrite() function.

The PWM output pin generates a variable duty-cycle signal—a digital approximation of the analog value—which lights the blue LED proportionally.

Both voltmeters confirm that the voltages at the ADC input and DAC output closely match (4.03V vs. 4.00V in this case), indicating accurate signal path operation.
