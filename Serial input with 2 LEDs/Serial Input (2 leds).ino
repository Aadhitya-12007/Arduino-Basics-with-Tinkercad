void setup() {
  pinMode(2, OUTPUT); 
  pinMode(4, OUTPUT); 
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);   
  Serial.begin(9600);
  Serial.print("Enter a charecter");
}

void loop() {
 if (Serial.available()) {
   Serial.print("x=");
   char x = Serial.read();
   Serial.println(x);
   if (x == 'a') {
       digitalWrite(2, HIGH); 
    }
   if (x == 'b') {
     digitalWrite(2, LOW);  // switch LED Off
    }
    if (x == 'c') {
       digitalWrite(4, HIGH); 
    }
    if (x == 'd') {
     digitalWrite(4, LOW);  // switch LED Off
    } 
}
}
