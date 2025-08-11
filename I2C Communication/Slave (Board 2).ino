// Code by Aadhitya G
//Slave Code
#include <Wire.h>
int led=13;
void setup()
{
  Wire.begin(8);                
  Wire.onReceive(receiveEvent); 
  Serial.begin(115200);
  pinMode(led,OUTPUT);
}

void loop()
{
  delay(100);
}
void receiveEvent(int howMany)
{
  int x = Wire.read();    
  Serial.println(x); 
 if (x==1)
 {
   digitalWrite(led,HIGH);
 }
 else
 {
   digitalWrite(led,LOW);
 } 
}
