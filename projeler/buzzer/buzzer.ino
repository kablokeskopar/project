#define buzzer 9

void setup() {

 pinMode(buzzer,OUTPUT);
  
  
}

void loop() {

  digitalWrite(buzzer,true);
  delay(100);
  digitalWrite(buzzer,false);
  delay(100);
  
  
}
