int red = 8;
int yellow = 9;
int green = 10;

void setup() {

  pinMode (red, OUTPUT);
  pinMode (yellow, OUTPUT);
  pinMode (green, OUTPUT);
}

void loop() {

  digitalWrite(red, HIGH);

  delay(10000);

  digitalWrite(red, LOW);



  digitalWrite (yellow, HIGH);

  delay(1000);

  digitalWrite(yellow, LOW);



  digitalWrite(green, HIGH);

  delay(20000);

  digitalWrite(green, LOW);


  digitalWrite(yellow, HIGH);

  delay(1000);

  digitalWrite(yellow, LOW);


}
