Traffic Light Controller program using arduino

G1-30 Sec, G2-25 Sec, G3-10 Sec, G4-20 Sec, Y1,Y2,Y3, Y4-3 Sec, Direction 1&2-P.L.,Direction 3&4-N.L

Description
Arduino UNO is the central controller, interfaced with four separate breadboards.

Each breadboard contains three LEDs (red, yellow, green), each paired with its own current-limiting resistor.

The breadboards are labeled to illustrate the use of positive logic and negative logic:

Positive Logic Boards: LEDs turn ON when the Arduino output pin is set HIGH (logic 1).

Negative Logic Boards: LEDs turn ON when the Arduino output pin is set LOW (logic 0).

Wires from various Arduino digital pins connect to the LEDs on each breadboard.

Black wires are used to connect ground (GND) to each breadboard, while colored wires represent control signals.

Key Points
Positive Logic: The anode of each LED is connected to the Arduino output pin, while the cathode is connected to ground through a resistor. 
Setting the pin HIGH lights the LED.

Negative Logic: The cathode of each LED is connected to the Arduino output pin, while the anode is connected to 5V through a resistor. 
Setting the pin LOW lights the LED.
