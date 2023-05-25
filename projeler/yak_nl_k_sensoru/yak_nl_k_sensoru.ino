
#include <LiquidCrystal_I2C_AvrI2C.h>

LiquidCrystal_I2C_AvrI2C lcd (0x27, 16, 2);
#define buzzer 8

#define trigPin 4
#define echoPin 2

long sure, mesafe;

void setup() {

  Serial.begin (9600);
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.println("Ardunio İle Mesafe Sensörü Uygulaması Başlatılıyor...");
  lcd.begin();
  lcd.print("Basliyor!");
  delay(3000);

}

void loop() {
  lcd.clear();
  digitalWrite(trigPin, LOW ); //başlangıçta trigi yani çıkış pini low olur
  delayMicroseconds(3); // 3 mikrosaniye bekleme yapıyor
  digitalWrite(trigPin , HIGH );// bekleme sonrasında trig pinini HİGH olarak değiştiriyor
  delayMicroseconds(10);// tekrar 10 mikrosaniye bekleme yapıyor
  digitalWrite(trigPin, LOW ); // trig pini bekleme sonrası low oluyor
  sure = pulseIn(echoPin, HIGH );
  mesafe = (sure / 2) * 0.0343;
  Serial.print("mesafe");
  Serial.println(" cm uzaklıkta");
  lcd.print(mesafe);
  lcd.print(" M");

  if (mesafe <= 5) {
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);
    delay(200);
  }

  else if (mesafe >= 5 and mesafe <= 10) {

    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    delay(500);

  }

  else {

    digitalWrite(buzzer , LOW);

  }


  delay(100);







}
