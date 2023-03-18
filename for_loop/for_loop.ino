void setup() {
  pinMode(9, OUTPUT);

}

void loop() {
 for( int i =1 ; i <=7 ; i++);
 {
digitalWrite(9,HIGH);
delay(500);
digitalWrite(9,LOW);
delay(500);
}
 }

