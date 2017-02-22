#include <Servo.h>

Servo myservo;

int const potPin = A0;
int potVal;
int angle;

void setup()
{
  myservo.attach(9);
  
  Serial.begin(9600);
}

void loop()
{
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);
  Serial.println();
  angle = map(potVal,0 ,1023, 0, 255);
  Serial.print(" , angle: ");
  Serial.print(angle);
  Serial.println();
  
  myservo.write(angle);
  delay(10);
}
