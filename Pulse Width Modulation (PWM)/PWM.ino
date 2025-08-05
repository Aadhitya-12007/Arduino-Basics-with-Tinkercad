// Code by Aadhitya G
void setup()
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int tree=255;
for(int duty=0;duty<=255;duty++)
{
  analogWrite(3,duty);
  analogWrite(5,tree);
  Serial.print("duty of Red LED=");
  Serial.println(duty);
  Serial.print("duty of Green LED=");
  Serial.println(tree);
  tree--;
  delay(1);
}
}
