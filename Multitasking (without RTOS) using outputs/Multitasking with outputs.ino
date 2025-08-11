// Code by Aadhitya G

#define LED1 2
#define LED2 3
#define LED3 4
unsigned long prevMillisTask1 = 0;
unsigned long prevMillisTask2 = 0;
unsigned long prevMillisTask3 = 0;
const long intervalTask1 = 1000;  // Task1 runs every 500ms
const long intervalTask2 = 2000;  // Task2 runs every 700ms
const long intervalTask3 = 3000; // Task3 runs every 1000ms

bool led1State = LOW;
bool led2State = LOW;
bool led3State = LOW;


void task1();
void task2();
void task3();

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
}

void loop() {
    unsigned long currentMillis = millis();
    
    // Run tasks based on time
    if (currentMillis - prevMillisTask1 >= intervalTask1) {
        prevMillisTask1 = currentMillis;
        task1();
    }

    if (currentMillis - prevMillisTask2 >= intervalTask2) {
        prevMillisTask2 = currentMillis;
        task2();
    }

    if (currentMillis - prevMillisTask3 >= intervalTask3) {
        prevMillisTask3 = currentMillis;
        task3();
    }
}

void task1() {
    led1State ^= 1;  // Toggle LED1
    digitalWrite(LED1, led1State);
}

void task2() {
    led2State ^= 1;  // Toggle LED2
    digitalWrite(LED2, led2State);
}

void task3() {
    led3State ^= 1;  // Toggle LED3
    digitalWrite(LED3, led3State);
}
