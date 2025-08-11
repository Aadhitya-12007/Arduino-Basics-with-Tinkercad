// Code by Aadhitya G

void setup() {
  pinMode(2, OUTPUT); 
  pinMode(4, OUTPUT); 
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);   
  Serial.begin(9600);
  Serial.print("Enter a string");
}

void loop() {
 if (Serial.available()) {
   Serial.print("x=");
   String x = Serial.readString();
   Serial.println(x);
   if (x == "LED1ON") {
       digitalWrite(2, HIGH); 
    }
   if (x == "LED1OFF") {
     digitalWrite(2, LOW);  // switch LED Off
    }
    if (x == "LED2ON") {
       digitalWrite(4, HIGH); 
    }
    if (x == "LED2OFF") {
     digitalWrite(4, LOW);  // switch LED Off
    } 
}
}
