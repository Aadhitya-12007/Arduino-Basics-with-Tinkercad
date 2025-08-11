// Code by Aadhitya G
//Master Code

#include <Wire.h>
int pushbutton=A0;
void setup()
{
  Wire.begin();
  pinMode(pushbutton,INPUT);
}
int x = 0;
void loop()
{
  Wire.beginTransmission(8); 
  x=digitalRead(pushbutton);
  Wire.write(x);                
  Wire.endTransmission();   
  delay(500);
}
