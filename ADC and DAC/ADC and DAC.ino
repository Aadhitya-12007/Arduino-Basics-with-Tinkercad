// C++ code
// Code by Aadhitya G
void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int y=analogRead(A0);
  int x=(y*255L)/1023;
  Serial.println(x);
  analogWrite(3,x);
  analogWrite(5,x);
  delay(100);
}
