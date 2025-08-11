Arduino UNO: UART-based two-board communication with bidirectional button-to-LED control

Overview

Two Arduino UNOs are linked over the hardware UART (TX/RX) to mirror a push-button state from each board to the other board’s LED.

Board 1 is on the left; Board 2 is on the right.

Each board has:

One push button on D8 using INPUT_PULLUP

One LED on D13 (with current-limiting resistor on the breadboard)

When a button is pressed on one board, the opposite board’s LED turns on; release turns it off. Because both run the same sketch, the behavior is symmetric.

Wiring (between boards and breadboard)

GND (left board) → GND rail on breadboard → GND of right board (common ground is mandatory).

Left UNO TX (D1) → Right UNO RX (D0).

Right UNO TX (D1) → Left UNO RX (D0). Cross-connect TX↔RX.

Each board’s 5V can power its own side; keep only grounds common if both are USB-powered.

Buttons:

One side of each push button → GND.

Other side → respective board D8.

Using INPUT_PULLUP, the pin reads HIGH when not pressed and LOW when pressed.

LEDs:

D13 → series resistor → LED anode, LED cathode → GND.

The figure shows two LEDs (green for Board 1, red for Board 2) for easy identification.

Data flow and operation

Idle: INPUT_PULLUP makes D8 read HIGH, so each board transmits character '0' repeatedly.

Press a button on Board 1:

D8 goes LOW → Board 1 sends '1'.

Board 2 receives '1' on Serial, sets D13 HIGH → its LED turns ON.

Release the button:

Board 1 sends '0'.

Board 2 receives '0' → sets D13 LOW → LED OFF.

The same applies in the opposite direction for Board 2’s button driving Board 1’s LED.

Sketch (same on both boards)

setup():

pinMode(8, INPUT_PULLUP);

pinMode(13, OUTPUT); digitalWrite(13, LOW);

Serial.begin(115200);

loop():

If Serial.available(), read one byte:

'1' → LED ON, '0' → LED OFF.

Then transmit local button state every iteration:

If digitalRead(8) == HIGH → Serial.write('0');

Else → Serial.write('1');

Notes

Ensure both UNOs share GND.

Avoid opening the Serial Monitor while using hardware UART between boards; it occupies the same D0/D1 lines.

If you need PC debug output, use SoftwareSerial on other pins or a second serial adapter.
