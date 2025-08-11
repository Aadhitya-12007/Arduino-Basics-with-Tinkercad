// Code by Aadhitya G

#define LED1 12    
#define LED2 13    
#define SWITCH1 2
#define SWITCH2 8

unsigned long prevMillis1 = 0;
unsigned long prevMillis2 = 0;
const long debounceDelay = 50;  // 50ms debounce delay

bool led1State = LOW;
bool led2State = LOW;
bool lastSwitch1State = HIGH;
bool lastSwitch2State = HIGH;

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(SWITCH1, INPUT_PULLUP);  // Internal pull-up resistor
    pinMode(SWITCH2, INPUT_PULLUP);
}

void loop() {
    unsigned long currentMillis = millis();

    // Read switch states
    bool switch1State = digitalRead(SWITCH1);
    bool switch2State = digitalRead(SWITCH2);

    // Toggle LED1 on Switch1 press
    if (switch1State == LOW && lastSwitch1State == HIGH) {
        if (currentMillis - prevMillis1 > debounceDelay) {
            led1State ^= 1;  // Toggle LED1 state
            digitalWrite(LED1, led1State);
            prevMillis1 = currentMillis;
        }
    }

    // Toggle LED2 on Switch2 press
    if (switch2State == LOW && lastSwitch2State == HIGH) {
        if (currentMillis - prevMillis2 > debounceDelay) {
            led2State ^= 1;  // Toggle LED2 state
            digitalWrite(LED2, led2State);
            prevMillis2 = currentMillis;
        }
    }
    lastSwitch1State = switch1State;  // Store last state of Switch1
    lastSwitch2State = switch2State;  // Store last state of Switch2
}
