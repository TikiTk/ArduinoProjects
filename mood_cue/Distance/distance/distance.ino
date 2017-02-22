#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

int const sensorPin = A0;
int sensorVal;
int const sensorTest = A1;
int senTest;
int cm;
void setup()
{
   Serial.begin(9600);
   lcd.begin(16,2);
   lcd.print("hello :)");
   
}
void loop()
{
     sensorVal = analogRead(sensorPin);
     senTest = analogRead(sensorTest);
     Serial.println("Sensor value "+(String)(senTest));
     cm = 4800/(sensorVal-20);
    Serial.println(cm+(String)("cm"));
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print(cm);
    delay(1000);
}

    
