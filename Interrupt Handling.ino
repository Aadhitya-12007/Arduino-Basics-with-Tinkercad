// Code by Aadhitya G

void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2), Ledon, CHANGE);
  attachInterrupt(digitalPinToInterrupt(3), Ledon, CHANGE);
}
void loop() {
  // nothing here!
}

void Ledon() {
  int x=digitalRead(2);
  int y=digitalRead(3);
  Serial.println(x);
  Serial.println(y);
if(x == 0)
  {
  digitalWrite(4, HIGH);
}
  else
  {
    digitalWrite(4, LOW);
}
  if(y == 0)
  {
  digitalWrite(5, HIGH);
}
  else
  {
    digitalWrite(5, LOW);
}
}
