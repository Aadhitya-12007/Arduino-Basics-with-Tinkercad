// Code by Aadhitya G

int sensorPin = A0; 

void setup()
 {
pinMode(sensorPin,INPUT);
Serial.begin(9600);  
    }
void loop() 
{
int adcData = analogRead(sensorPin);  
float voltage = (adcData)*(5.0/1024)*1000;
float temperatureC = (voltage - 500)/10 ;  //converting from 10 mv per degree with 500 mV offset
     //to degrees ((voltage - 500mV)/10)
Serial.print("adcData="); 
Serial.println(adcData);
Serial.print(temperatureC); 
Serial.println(" degrees C");
  // now convert to Fahrenheit
float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
Serial.print(temperatureF); 
Serial.println(" degrees F");
 delay(500);
}  
