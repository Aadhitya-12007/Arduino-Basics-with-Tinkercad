What the setup shows

An Arduino UNO connected to a breadboard with two momentary push buttons and two LEDs (each with a current‑limiting resistor).

Buttons use INPUT_PULLUP; each press independently toggles its corresponding LED without using delay(), demonstrating non‑blocking multitasking with inputs and outputs.

Hardware connections

Power: Arduino 5V and GND to breadboard rails.

Switches:

SWITCH1 → D2, other leg → GND (uses internal pull‑up, so idle = HIGH, pressed = LOW).

SWITCH2 → D8, other leg → GND.

LEDs:

LED1 anode → resistor → D12; LED1 cathode → GND.

LED2 anode → resistor → D13; LED2 cathode → GND.

Code behavior and flow

loop() runs continuously and reads both switches every iteration using digitalRead() (no blocking delays).

Edge detection: a toggle occurs only on the transition HIGH→LOW (button press).

Debounce: a 50 ms guard per button using millis() and separate timestamps (prevMillis1, prevMillis2) prevents false toggles from contact bounce.

Actions:

Press SWITCH1 → led1State ^= 1 → write to D12.

Press SWITCH2 → led2State ^= 1 → write to D13.

Because all timing uses millis() and state variables, both inputs are serviced “concurrently,” and each LED responds independently.

Why this is multitasking without RTOS

No delay(); tasks (read buttons, debounce, toggle outputs) share CPU time cooperatively within loop() using time stamps and state machines.
This pattern scales to more inputs/outputs or periodic tasks while keeping the system responsive.
