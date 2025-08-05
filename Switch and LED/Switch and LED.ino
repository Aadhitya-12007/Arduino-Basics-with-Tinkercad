// C++ code
// Code by Aadhitya G
void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop()
{
  int x=digitalRead(2);
  if (x==0){
    digitalWrite(13, HIGH);}
  else{
    digitalWrite(13, LOW);}
}
