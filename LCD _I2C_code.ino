#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2); //if your code doesn't work then change 0x3F to 0x27
void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();
}

void loop()
{
lcd.setCursor(0, 0);        
  lcd.print("Petty");        // print message at (0, 0)
  lcd.setCursor(0,1);         // move cursor to   (2, 1)
  lcd.print("Scientist");
  }
