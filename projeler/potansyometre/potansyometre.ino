#include <Servo.h>
#define servoPin 9
#define potpin A0

int potdeger;

int aci;

Servo sm;

void setup() {

  sm.attach(servoPin);

  Serial.begin (9600);
  Serial.println("Merhaba Dunya!");


}

void loop() {

  potdeger = analogRead(potpin); // potdeger değişkenin içini A0 içindeki degerle eşitledik

  aci = map(potdeger,0,1023,0,180);

  Serial.print("pot deger:");

  Serial.println(potdeger);

  sm.write(aci);

  
    
  




}
