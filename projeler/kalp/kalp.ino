
#include <LiquidCrystal_I2C_AvrI2C.h>



LiquidCrystal_I2C_AvrI2C lcd (0x27, 16, 2); 
int x=0;
byte customChar[] = {
  B00000,
  B00000,
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};

void setup() {
  lcd.begin();
  lcd.createChar(0, customChar);
  lcd.home();
  lcd.write(0);


}

void loop() {
  for (x = 0; x <= 16 ; x++ ) {
    lcd.clear();
    lcd.home();
    lcd.setCursor(x, 0);
    lcd.write(0);

    delay(300);


  }

}
