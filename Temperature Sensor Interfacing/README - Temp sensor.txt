Circuit Description
Arduino UNO acts as both the analog-to-digital converter (ADC, using analogRead()) and digital-to-analog converter (DAC, using PWM and analogWrite()).

Potentiometer (lower breadboard): Supplies a variable voltage between 0V and 5V.

One end to 5V (red wire), the other to GND (black wire).

Center wiper connects to Arduino analog input (likely A0, yellow wire).

Amber LED on the same rail, which glows brighter as the potentiometer’s voltage increases.

DAC Section (upper breadboard): Arduino PWM output pin (likely D9 or D10, blue wire).

Drives a blue LED through a current-limiting resistor, intensity based on PWM output.

Displays reproduced analog voltage at the output.

Voltage Monitoring:

ADC Voltmeter (lower right): Measures actual voltage at the potentiometer’s wiper (4.03V in the image).

DAC Voltmeter (upper left): Monitors the voltage at the Arduino’s analog (PWM) output (4.00V in the image).

This visual feedback helps confirm that the Arduino is reading and reproducing the analog voltage correctly.

Breadboard Power Distribution:

5V and GND from Arduino supply both breadboards, enabling consistent voltage references for input and output sections.

Signal Flow Explanation
Analog Signal Generation: User turns the potentiometer, setting its wiper to a voltage between 0V (GND) and 5V (Vcc).

Analog Input Measurement: The Arduino reads the wiper voltage as an analog value (analogRead() on A0).

Digital-to-Analog Conversion: Arduino processes this value and outputs a proportional PWM signal on a digital pin (analogWrite()).

Voltage Output Visualization: The blue LED’s brightness and the upper voltmeter display the Arduino’s PWM-based analog output voltage.

Feedback and Matching: The two voltmeters let the user compare the input and output voltages, demonstrating the accuracy of the ADC-to-DAC mapping.
