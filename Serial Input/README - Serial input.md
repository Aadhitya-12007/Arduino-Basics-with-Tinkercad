Description:

The Arduino UNO drives a single red LED connected to digital pin 2 through a current‑limiting resistor; the other LED lead goes to GND.

The sketch opens the Serial Monitor at 9600 baud and waits for a character from the PC.

When you type a in the Serial Monitor, the code sets pin 2 HIGH (LED ON). Typing b sets pin 2 LOW (LED OFF). The serial output echoes the received character.

Circuit connections:

LED anode -> resistor -> Arduino D2

LED cathode -> GND

USB cable provides power and serial communication.

Flow:

Setup: pinMode(2, OUTPUT); digitalWrite(2, LOW); Serial.begin(9600); prompt “Enter a char”.

Loop: if Serial.available(), read one byte x.

If x == 'a' -> digitalWrite(2, HIGH).

If x == 'b' -> digitalWrite(2, LOW).

Echo the character to the Serial Monitor.
