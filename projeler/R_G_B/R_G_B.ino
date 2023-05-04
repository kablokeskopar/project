int red = 9;
int green = 10;
int blue = 11;
int bekleme = 100;

void setup() {
  pinMode (red, OUTPUT);
  pinMode (green, OUTPUT);
  pinMode (blue, OUTPUT);
}

void loop() {

analogWrite(red,255); // 9 numaralı pwm pinini 255 değeride eşitledik
analogWrite(green,255); //10 numaralı pwm pinini 255 değeride eşitledik
analogWrite(blue,255); // 11 numaralı pwm pinini 255 değeride eşitledik
delay(bekleme);

analogWrite(red,0);
analogWrite(green,255);
analogWrite(blue,255);
delay(bekleme);

analogWrite(red,255);
analogWrite(green,0);
analogWrite(blue,255);
delay(bekleme);

analogWrite(red,5);
analogWrite(green,200);
analogWrite(blue,145);
delay(bekleme);

analogWrite(red,random(0,255));
analogWrite(green,random(0,255));
analogWrite(blue,random(0,255));
delay(bekleme);
}
