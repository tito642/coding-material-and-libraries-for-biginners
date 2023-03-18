
int FlamePin = 7; // This is for input pin
int Flame = HIGH; 
 
void setup() {

 pinMode(FlamePin, INPUT);
 Serial.begin(9600);
 
}
 
void loop() {
 Flame = digitalRead(FlamePin);
 if (Flame== LOW)
 {
 Serial.println("FIRE FIRE");

 }
 else
 {
 Serial.println("Peace");

 }
}

