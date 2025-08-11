What it shows

An Arduino UNO drives three LEDs (green, yellow, red) on a breadboard, each with its own current‑limiting resistor.

The LEDs are connected to digital pins D2, D3, and D4 respectively, with their cathodes to GND.

The sketch implements non‑blocking, time‑sliced “tasks” using millis(), so all LEDs blink at independent rates without delay().

Circuit connections

D2 → resistor → LED1 anode (green); LED1 cathode → GND

D3 → resistor → LED2 anode (yellow); LED2 cathode → GND

D4 → resistor → LED3 anode (red); LED3 cathode → GND

Arduino GND → breadboard ground rail; USB powers the board

Code behavior and flow

Three tasks (task1/2/3) toggle LEDs at different intervals:

Task1 every 1000 ms → LED on D2

Task2 every 2000 ms → LED on D3

Task3 every 3000 ms → LED on D4

loop() reads currentMillis = millis() and, for each task, checks if currentMillis − prevMillisTaskN ≥ intervalTaskN.

When due, it updates the corresponding prevMillis and calls the task, which toggles the saved LED state and writes it.

Because there is no delay(), all tasks run “in parallel” cooperatively, demonstrating multitasking without an RTOS.

Key idea

Use millis() scheduling and state variables to create independent, non‑blocking periodic tasks on Arduino. This pattern scales to more tasks like sensor reads, serial I/O, and motor control without blocking each other.
