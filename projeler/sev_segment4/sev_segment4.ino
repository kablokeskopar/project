#include <SevSeg.h>
SevSeg ekran; // kütüphaneye isim veriyoruz

void setup() {
  byte basamak = 4;
  byte digitPin[] = {2, 3, 4, 5};
  byte segmentPin[] = {6, 7, 8, 9, 10, 11, 12, 13};
  byte tur = COMMON_ANODE; //COMMON_CATHODE veya COMMON_ANODE
  bool direnc = false; // direncin olmadıgını soyluyoruz
  bool otosure = false; //otomatik sürecin olmadıgını ona soyluyoruz
  bool sifirlar = true; // gilemek için false yapınız
  ekran.begin (tur, basamak, digitPin, segmentPin, direnc, otosure, sifirlar);
  ekran.setBrightness(90);

}

void loop() {
/*
  ekran.setNumber(1111); ekrana sayı yazmak istiyorsak ekran.setChars(4 basamaklı bir sayı yazarız)
  ekran.setChars("tırnak içinde yazılır"); ekrana display ile yazılabilecek harfleri yazarız 
  */
  
  ekran.setChars("ege");
  ekran.refreshDisplay();

}
