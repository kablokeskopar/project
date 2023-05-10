#define btn 7
#define led 8
int btnDeger;

void setup() {
  pinMode(led, OUTPUT);

  pinMode(btn, INPUT); // 7 numaralı digital pinini GİRİŞ olarak belirliyoruz

  Serial.begin(9600);

}

void loop() {

  btnDeger = digitalRead(btn);

  Serial.print("buton icindeki deger:");

  Serial.println(btnDeger);

  if (btnDeger == 1){
    digitalWrite(led, true);

  }
  else {

    digitalWrite(led, false);

  }

}
