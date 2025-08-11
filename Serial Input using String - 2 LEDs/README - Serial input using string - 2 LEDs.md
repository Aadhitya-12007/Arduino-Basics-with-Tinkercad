An Arduino UNO connected to a breadboard with two red LEDs, each in series with a resistor.

Left LED wired to digital pin D2, right LED to D4. Both LED cathodes go to GND.

The Serial Monitor is open at 9600 baud. The sketch reads a string and executes commands like LED1ON, LED1OFF, LED2ON, LED2OFF. The monitor output shows x=LED2OFF.

Circuit connections:

D2 → resistor → LED1 anode; LED1 cathode → GND

D4 → resistor → LED2 anode; LED2 cathode → GND

Arduino GND → breadboard ground rail; USB provides power and serial link

Program flow:

setup():

pinMode(2, OUTPUT); pinMode(4, OUTPUT); digitalWrite both LOW

Serial.begin(9600); print “Enter a string”

loop():

If Serial.available(), read the incoming text into String x and echo it.

If x == "LED1ON" → digitalWrite(2, HIGH)

If x == "LED1OFF" → digitalWrite(2, LOW)

If x == "LED2ON" → digitalWrite(4, HIGH)

If x == "LED2OFF" → digitalWrite(4, LOW)
