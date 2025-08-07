// Code by Aadhitya G

#define echoPin 3
#define trigPin 2
int pir = 4;
int pirval = 0;
long duration;
int dist;
int tempPin = A0; 
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pir, INPUT);
  pinMode(tempPin,INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //Ultrasonic Section
  digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  dist = (duration * 0.0343) / 2;
  Serial.print("Distance: ");
  Serial.print(dist);
  Serial.println(" cm");
  delay(50);
  
  //PIR section
  pirval = digitalRead(pir);
  if(pirval==1){
    Serial.println("Motion detected");}
  else{
    Serial.println("Motion not detected");}
  
  //Temperature Sensor Section
  int tem = analogRead(tempPin);  
  float volta = (tem)*(5.0/1024)*1000;
  float tempa = (volta - 500)/10 ;
  Serial.print(tempa); 
  Serial.println(" degrees C");
  delay(100);
  //Constraints
  
  if((tempa >=24 && tempa <=35) && (dist >=10 && dist <=100) && (pirval==1))
  {
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(500);}
  else if((tempa >=35 && tempa <=45)&&(dist >=100 && dist <=200) && (pirval==1)){
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
  	delay(50);}
  else if(tempa >=45 && tempa <=60 && dist >=200 && dist <=300 && pirval==1){
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  	delay(50);}
  else{
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);}
  delay(1000);
}
