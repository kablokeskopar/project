#include <Servo.h>
#define btn1 7
#define btn2 8

Servo sm; // sm = servo motor

int aci = 0;

int btnDeger1;
int btnDeger2;


void setup() {

  sm.attach(9);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
}

void loop() {

  btnDeger1 = digitalRead(btn1);

  btnDeger2 = digitalRead(btn2);

  if (btnDeger1 == 1) {

    sm.write(aci);

    aci += 5;

    if (aci >= 180) {

      aci = 180;

    }


    delay(100);

  }
  if (btnDeger2 == 1) {

    sm.write(aci);

    aci -= 5;

    if (aci <= 0) {

      aci = 0;

    }


    delay(100);

  }
}
