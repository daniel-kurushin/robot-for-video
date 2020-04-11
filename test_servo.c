#include <Servo.h> // подключили библиотеку (хотя можно и без нее )

Servo s; // переменная, привязываемая к приводу.

long measure() // функция измерения
{
  long duration, cm;
  
  digitalWrite(4, 0);
  delayMicroseconds(2);
  digitalWrite(4, 1);
  delayMicroseconds(5);
  digitalWrite(4, 0);
  
  duration = pulseIn(3, 1);
  cm = duration / 58;
  return cm;
}

void setup() 
{
  s.attach(11); // на 11 выводе
  Serial.begin(9600);
  pinMode(3,0); // Echo
  pinMode(4,1); // Trig
}

void loop() 
{
  s.write( 65); // Код теста
  delay(1000);
  Serial.println(measure());
  s.write(165);
  delay(1000);
  Serial.println(measure());
}
