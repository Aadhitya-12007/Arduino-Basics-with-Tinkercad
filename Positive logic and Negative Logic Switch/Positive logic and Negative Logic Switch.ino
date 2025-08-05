//C ++ Code
// Code by Aadhitya G

void setup() {
  pinMode(8, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}
void loop() {
  int buttonState1 = digitalRead(2);
  int buttonState2 = digitalRead(8);
  if (buttonState2 == LOW) {
    digitalWrite(8, LOW);
  } else {
    digitalWrite(2, LOW);
  }
  if (buttonState1 == HIGH) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(2, LOW);
}
}
