// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
}
void loop()
{analogWrite(9,0);
 delay(250);
  analogWrite(9,64);
  delay(1000);
  analogWrite(9,125);
  delay(1000);
  analogWrite(9, 255);
  delay(1000);
  analogWrite(9,125);
  delay(1000);
  analogWrite(9,64);
  delay(1000);
  analogWrite(9, 0);
  delay(1000);
  
  
 
}