#include <LiquidCrystal_I2C_AvrI2C.h>

LiquidCrystal_I2C_AvrI2C lcd (0x27, 16, 2);

int sayac = 100 ;

void setup() {

  lcd.begin();

  lcd.print("hello world");

  delay(1000);
}

void loop() {


for(int satir=0;satir <= 15;satir++){

lcd.clear();

  lcd.setCursor(satir,0);

  lcd.print("kayan yazi");
 
delay(200);
  
  }

}
