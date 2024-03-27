#include <Servo.h>

Servo myservo;

int pos = 0;

void setup()
{
  Serial.begin(9600); // sensor buart rate
  myservo.attach(9);
}
void loop()
{
  int s11 = analogRead(A0); // LDR Sensor output pin connected
  Serial.println(s11);
  delay(50);
  if (s11 < 900)
  {
    pos = 50;
    myservo.write(pos);
    delay(5);
  }

  else
  {
    pos = 0;
    myservo.write(pos);
    delay(5);
  }
}
