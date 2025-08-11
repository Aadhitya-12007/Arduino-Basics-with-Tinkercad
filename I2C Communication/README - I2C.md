This setup shows two Arduino UNO boards linked over I2C so a push‑button on the master (left) controls the LED on the slave (right). The bus uses SDA and SCL lines on the UNO’s A4 (SDA) and A5 (SCL) pins, 
which are the designated I2C pins on this board form factor. Both boards share a common ground, and only the SDA, SCL, and GND lines need to be interconnected for two‑Arduino I2C communication.

Hardware Wiring
Master UNO A4 (SDA) → Slave UNO A4 (SDA); Master UNO A5 (SCL) → Slave UNO A5 (SCL).

GND of both UNOs tied together to establish a common reference.

Master push button wired to analog pin A0 as a digital input.

Slave LED on D13 (may use the built‑in LED on UNO pin 13).

Optional: I2C pull‑up resistors (≈10kΩ) to 5V on SDA and SCL if communication is unstable.

Code Behavior
Master code initializes I2C as a bus master and reads the button on A0 each loop. It transmits one byte (0 or 1) to
slave address 8 every 500ms using Wire.beginTransmission(8) … Wire.write(x) … Wire.endTransmission().

Slave code joins the bus at address 8 with Wire.begin(8) and registers an onReceive handler; when data arrives, receiveEvent() reads the byte with Wire.read() and toggles the D13 LED accordingly (1=ON, 0=OFF).

Data Flow
On the master, A0 is sampled; HIGH/LOW is converted to 1/0.

Master sends the single byte over SDA with SCL providing the clock; the master always generates the clock on I2C.

The slave’s onReceive callback fires automatically upon receipt, reads the byte, prints it over Serial for debugging, and sets D13 HIGH or LOW.

The result: pressing the master’s button lights the slave’s LED; releasing it turns the LED off.

Notes
UNO I2C pins are SDA=A4 and SCL=A5 (also broken out as separate SDA/SCL headers on newer boards but electrically the same nets).

Multiple slaves can share the same two wires so long as each has a unique 7‑bit address; the master remains unaddressed.

Keep grounds common; mismatched grounds are a common cause of I2C failures
