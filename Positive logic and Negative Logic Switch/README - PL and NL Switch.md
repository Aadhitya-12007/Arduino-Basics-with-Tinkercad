This setup showcases how both positive logic and negative logic configurations are used to control LEDs with switches using an Arduino UNO. The circuit also includes two voltmeters to visualize the voltage levels for each logic type.

Circuit Description
Arduino UNO provides power and digital control to a breadboard-mounted circuit featuring two independent push-button switches and two LEDs (red).

The breadboard is divided into sections for demonstrating positive logic (active-high) and negative logic (active-low) controls.

Voltmeters are connected to monitor the voltage at key points in both logic systems.

Resistors are used to limit LED current, and all necessary connections are made with jumper wires.

Component Connections & Logic Flow
Component	Positive Logic Circuit	Negative Logic Circuit
Switch	One side to Arduino input, other to 5V rail	One side to Arduino input, other to GND rail
LED	Anode to Arduino output (through resistor), cathode to GND	Cathode to Arduino output (through resistor), anode to 5V
Resistor	Between Arduino output and anode of LED	Between Arduino output and cathode of LED
Voltmeter	Measures voltage at LED output pin (active-high)	Measures voltage at LED output pin (active-low)
Operation:
Positive Logic Section:

When the button is pressed, the Arduino pin reads HIGH (logic 1).

The connected output pin is set HIGH, supplying voltage to the LED's anode.

Current flows from the Arduino pin → resistor → LED anode → LED cathode → GND, lighting up the LED.

The voltmeter in this section reads a high voltage when the LED is ON (shown as 4.40V in the image).

Negative Logic Section:

When the button is pressed, the Arduino pin reads LOW (logic 0).

The connected output pin is set LOW, pulling the line to ground.

The LED's anode is connected to 5V, and cathode to the Arduino pin via resistor.

Current flows from the 5V rail → LED anode → LED cathode → resistor → Arduino output pin (set to LOW) → GND.

The voltmeter in this section reads a very low voltage when the LED is ON (shown as 49.5mV in the image).

Key Learning Points
Positive logic: Output HIGH = LED ON; output LOW = LED OFF.

Negative logic: Output LOW = LED ON; output HIGH = LED OFF.

Using switches as inputs, you can independently control each LED demonstrating both logic schemes.

Voltmeters help visualize how voltage changes depending on the logic type and output state.
