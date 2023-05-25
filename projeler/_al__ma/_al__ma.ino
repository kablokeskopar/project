
#include <LiquidCrystal_I2C_AvrI2C.h>

LiquidCrystal_I2C_AvrI2C lcd (0x27, 16 , 2 );

void setup() {

  lcd.begin ();

  lcd.print("hello world");

}

void loop() {

 lcd.clear();

 lcd.println("ba");

 delay(100);
 
}
