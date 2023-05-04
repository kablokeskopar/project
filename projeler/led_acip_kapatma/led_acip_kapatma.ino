int red=7;

void setup() {

pinMode(red,OUTPUT ); //7 numaralı pini çıkış yani OUTPUT hale getiriyoruz

}

void loop() {

digitalWrite(red,HIGH);  //7 numaralı digital pini yani değişkenin içine 1 değeri atar ve led yanar 

delay(100);   //saniyenin 1/1000 demek
 
digitalWrite(red,LOW);  //7 numaralı digital pini yani değişkenin içine yani 0 değeri atar ve led kapanır 

delay(100);

} 
