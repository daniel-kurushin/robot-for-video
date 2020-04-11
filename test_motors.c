// Настроим выходы:
void setup() 
{
  pinMode(6, 1); // надо будет определить, где правая и левая стороны
  pinMode(7, 1);
  pinMode(8, 1); // и что такое "вперед" и "назад".
  pinMode(9, 1);
  digitalWrite(6, 0); // левый  - назад
  digitalWrite(7, 1); // левый  - вперед
  digitalWrite(8, 1); // правый - вперед
  digitalWrite(9, 0); // правый - назад
}

void loop() // код разгона и торможения
{
  for(int i = 0; i < 255; i++)
  {
    analogWrite( 5, i);
    analogWrite(10, i);
    delay(10);
  }
  for(int i = 255; i > 1; i--)
  {
    analogWrite( 5, i);
    analogWrite(10, i);
    delay(10);
  }
}
