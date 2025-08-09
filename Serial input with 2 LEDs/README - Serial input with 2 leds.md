An Arduino UNO connected to a breadboard with two red LEDs, each in series with a current‑limiting resistor.

The left LED is wired to digital pin 2; the right LED is wired to digital pin 4. Both LED cathodes go to GND.

The Arduino is powered over USB, and the Serial Monitor is open at 9600 baud. The sketch reads one character and echoes it (x=a, x=b, x=d, x=c shown).

Circuit connections:

LED1 anode → resistor → D2

LED1 cathode → GND

LED2 anode → resistor → D4

LED2 cathode → GND

Arduino GND → breadboard ground rail

Program flow:

setup(): pinMode(2, OUTPUT); pinMode(4, OUTPUT); set both LOW; Serial.begin(9600); prompt “Enter a character”.

loop(): if Serial.available():

read char x, print “x=” and the character.

if x == 'a' → digitalWrite(2, HIGH) // LED1 ON

if x == 'b' → digitalWrite(2, LOW) // LED1 OFF

if x == 'c' → digitalWrite(4, HIGH) // LED2 ON

if x == 'd' → digitalWrite(4, LOW) // LED2 OFF
