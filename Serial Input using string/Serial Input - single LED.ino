// Code by Aadhitya G

void setup() {
  pinMode(2, OUTPUT);      
  digitalWrite(2, LOW);
  Serial.begin(9600);
  Serial.print("Enter a String");
}

void loop() {
  if (Serial.available()) {     //wait for data available
  String x = Serial.readString();  //read until timeout
  Serial.println(x);
    if (x == "on") {
    digitalWrite(2, HIGH);
    Serial.println("LED ON");
  } else if (x == "off") {
    digitalWrite(2, LOW);
    Serial.println("LED OFF");
  }
  }
}
