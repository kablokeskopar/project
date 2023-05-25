#include <LiquidCrystal_I2C_AvrI2C.h>

#define suPin A0



LiquidCrystal_I2C_AvrI2C lcd (0x27, 16, 2);

int suDeger;

void setup() {
  lcd.begin();

  lcd.print("HOSGELDİNİZ");



}

void loop() {

  suDeger =  analogRead (suPin);

  lcd.clear();

  lcd.print("suyun Degeri:");

  lcd.print(suDeger);

  delay(300);
}
