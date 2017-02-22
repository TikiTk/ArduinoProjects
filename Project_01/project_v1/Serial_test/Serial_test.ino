#include <serialGLCD.h>

void setup()
{
   Serial.begin(115200);
   delay(5000);
}
serialGLCD lcd;
void loop(){
  lcd.clearLCD();
  delay(10);
  lcd.toggleFont();
  Serial.print("Would you like ?");
  lcd.toggleFont();
  delay(10);
  while(1){};
}
