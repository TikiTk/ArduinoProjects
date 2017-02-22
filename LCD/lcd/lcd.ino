/*Author: Mphahlele Tk
Purpose: Displaying on arduino LCD
Date: 2015/02/01
*/

/* This code is for displaying text on the lcd, code for resetting
using a tilt switch isn't included but if you want it let me know 
check out http://arduino.cc/en/Reference/LiquidCrystal for more cool stuff on lcds*/
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2); //Pins which the lcd is connected to on the board
const int sensorPin = A0;
const float baselineTemp = 21;


void setup()
{
  lcd.begin(16,2);  // LCD consists of 16x2 grid so this initialises the entire lcd grid
  lcd.setCursor(0,0); // sets the cursor to grid(0,0) i.e uses matrix layout
  lcd.print("D: It is written"); //Prints on the lcd
  
 
}

void loop()
{
  int sensorVal = analogRead(sensorPin);
  lcd.clear();
  float voltage = (sensorVal/1024.0)*5.0;
  float temperature = (voltage -.5)*100;
  lcd.print("Temp is: "+String(temperature));
  
  
  if(temperature < baselineTemp)
  {
     lcd.clear();
     lcd.print("Are you Human?");
  }
   else if(temperature >= baselineTemp+3 && temperature < baselineTemp+5)
  {
     lcd.clear();
    lcd.print("Reptile");
    lcd.setCursor(0,1);
    lcd.print("Temp is: "+String(temperature));
    
  } 
   else if(temperature >= baselineTemp+6 && temperature < baselineTemp+8)
  {
     lcd.clear();
    lcd.print("Mammal");
    lcd.setCursor(0,1);
    lcd.print("Temp is: "+String(temperature));
  } 
   else if(temperature >= baselineTemp+10)
  {
     lcd.clear();
    lcd.print("Valcano!!! Fire");
    lcd.setCursor(0,1);
    lcd.print("Temp is: "+String(temperature));
  } 
  lcd.noBlink();// will take away the blinking
  lcd.blink(); //Makes the little blockie blink
  delay(3000); // Delays the blinking rate
}
