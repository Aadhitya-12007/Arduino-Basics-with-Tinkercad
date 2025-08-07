This circuit demonstrates how the Arduino UNO can generate Pulse Width Modulation (PWM) signals to control output voltages and LED brightness. 
The setup includes live voltage readings and oscilloscope traces for real-time PWM monitoring.

Circuit Description
Arduino UNO: Generates PWM signals on two digital pins (typically pins 9 and 10).

Breadboard: Hosts two LEDs (red and green) with current-limiting resistors.

Voltmeters: Measure the average voltage of each PWM output.

Oscilloscopes: Show the PWM waveforms for each signal.

Detailed Connections & Flow
PWM Pin 1 (e.g., Pin 9)

Connected to the resistor and anode of the red LED.

The cathode of the LED is connected to the GND rail.

A voltmeter and oscilloscope probe are also connected between PWM Pin 1 and GND.

Operation: The PWM duty cycle for this pin ramps from 0 to 255 (0% to 100%). 
As the duty cycle increases, the red LED gets brighter and the measured voltage rises (shown as 294mV, corresponding to a low duty cycle).

PWM Pin 2 (e.g., Pin 10)

Connected to the resistor and anode of the green LED.

The cathode of the LED is connected to the GND rail.

A voltmeter and oscilloscope probe are connected between PWM Pin 2 and GND.

Operation: The PWM duty cycle for this pin decreases from 255 to 0 (100% to 0%). 
As the duty cycle decreases, the green LED gets dimmer and the measured voltage drops (shown as 2.05V, corresponding to a moderate duty cycle).

Oscilloscope Probes

Display the square wave of each PWM signal, visually showing the difference in duty cycles for each channel.

The period and pulse width of the square waves vary as set by the Arduino program.

Voltage Measurements

Each voltmeter displays the average voltage of the respective PWM pin, which is proportional to the duty cycle (PWM value).

For 0–255 PWM: The average voltage increases as the PWM value increases.

For 255–0 PWM: The average voltage decreases as the PWM value decreases.
