int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {

  sifir();
  delay(1000);
  bir();
  delay(1000);
  iki();
  delay(1000);
  uc();
  delay(1000);
  dort();
  delay(1000);
  bes();
  delay(1000);
  alti();
  delay(1000);
  yedi();
  delay(1000);
  sekiz();
  delay(1000);
  dokuz();
  delay(1000);
}
//void sifir diye bir fonksiyon oluşturuyouz
void sifir() {

  digitalWrite(a, false);
  digitalWrite(b, false);
  digitalWrite(c, false);
  digitalWrite(d, false);
  digitalWrite(e, false);
  digitalWrite(f, false);
  digitalWrite(g, true);
}

void bir() {

  digitalWrite(a, true);
  digitalWrite(b, false);
  digitalWrite(c, false);
  digitalWrite(d, true);
  digitalWrite(e, true);
  digitalWrite(f, true);
  digitalWrite(g, true);
}

void iki() {

  digitalWrite(a, false);
  digitalWrite(b, false);
  digitalWrite(c, true);
  digitalWrite(d, false);
  digitalWrite(e, false);
  digitalWrite(f, true);
  digitalWrite(g, false);
}

void uc(){

  digitalWrite(a, false);
  digitalWrite(b, false);
  digitalWrite(c, false);
  digitalWrite(d, false);
  digitalWrite(e, true);
  digitalWrite(f, true);
  digitalWrite(g, false);
}
void dort(){

  digitalWrite(a, true);
  digitalWrite(b, false);
  digitalWrite(c, false);
  digitalWrite(d, true);
  digitalWrite(e, true);
  digitalWrite(f, false);
  digitalWrite(g, false);
}
void bes(){

  digitalWrite(a, false);
  digitalWrite(b, true);
  digitalWrite(c, false);
  digitalWrite(d, false);
  digitalWrite(e, true);
  digitalWrite(f, false);
  digitalWrite(g, false);
}
void alti(){

  digitalWrite(a, false);
  digitalWrite(b, true);
  digitalWrite(c, false);
  digitalWrite(d, false);
  digitalWrite(e, false);
  digitalWrite(f, false);
  digitalWrite(g, false);
}
void yedi(){

  digitalWrite(a, false);
  digitalWrite(b, false);
  digitalWrite(c, false);
  digitalWrite(d, true);
  digitalWrite(e, true);
  digitalWrite(f, false);
  digitalWrite(g, true);
}
void sekiz(){

  digitalWrite(a, false);
  digitalWrite(b, false);
  digitalWrite(c, false);
  digitalWrite(d, false);
  digitalWrite(e, false);
  digitalWrite(f, false);
  digitalWrite(g, false);
}
void dokuz(){

  digitalWrite(a, false);
  digitalWrite(b, false);
  digitalWrite(c, false);
  digitalWrite(d, false);
  digitalWrite(e, true);
  digitalWrite(f, false);
  digitalWrite(g, false);
}
