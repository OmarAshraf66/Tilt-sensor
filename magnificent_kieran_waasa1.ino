void setup()
{
  pinMode(12,OUTPUT);
  pinMode(6,OUTPUT);
  
}

void loop()
{
 analogWrite(6,analogRead(A1));

}