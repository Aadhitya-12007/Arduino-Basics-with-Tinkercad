// Code by Aadhitya G
void setup() {
  // set push button pin as input
  pinMode(2, OUTPUT);      
  digitalWrite(2, LOW);    
  Serial.begin(9600); 
     Serial.print("Enter a char");

}

void loop() {
 if (Serial.available()) {
    // read one byte from serial buffer and save to data_rcvd
    char x = Serial.read();
   Serial.print("x=");
   Serial.println(x);
     
    if (x == 'a') {
       digitalWrite(2, HIGH); 
    }
    if (x == 'b') {
     digitalWrite(2, LOW);  // switch LED Off
    }  
}
}
