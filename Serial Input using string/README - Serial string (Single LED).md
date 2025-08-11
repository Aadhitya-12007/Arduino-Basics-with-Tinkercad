An Arduino UNO with a single red LED connected through a series resistor to digital pin 2.

The Serial Monitor is open at 9600 baud. The sketch reads a string and turns the LED on or off based on the text command.

Monitor output shows a prompt “Enter a String” and the message “LED ON”.

Circuit connections:

D2 → resistor → LED anode

LED cathode → GND

USB cable supplies power and serial communication

Program flow:

setup():

pinMode(2, OUTPUT); digitalWrite(2, LOW)

Serial.begin(9600); prompt user to “Enter a String”

loop():

If Serial data is available, read it into a string x.

If x == "on": digitalWrite(2, HIGH); print “LED ON”

Else if x == "off": digitalWrite(2, LOW); print “LED OFF”
