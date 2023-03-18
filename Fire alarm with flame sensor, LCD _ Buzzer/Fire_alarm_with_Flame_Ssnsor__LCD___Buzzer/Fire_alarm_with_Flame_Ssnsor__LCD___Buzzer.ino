/*

  The LCD circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * k pin to ground
 * A pin to vcc    " LEC LED "

 
  The Flame and buzzer circuit:
*Buzzer postive pin to 13
*Flame sensor Do pin to 7

 */
 #include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int Buzzer = 13; // Use buzzer for alert 
int FlamePin = 7; // This is for input pin
int Flame = HIGH; 
 
void setup() {
 pinMode(Buzzer, OUTPUT);
 pinMode(FlamePin, INPUT);
 Serial.begin(9600);
  lcd.begin(16, 2);
}
 
void loop() {
 Flame = digitalRead(FlamePin);
 if (Flame== LOW)
 {
 Serial.println("HIGH FLAME");
 digitalWrite(Buzzer, HIGH);
  tone(13,30);
  lcd.setCursor(0, 0);
    lcd.print("HIGH FLAME");
 }
 else
 {
 Serial.println("Everything Ok");
 digitalWrite(Buzzer, LOW);
 noTone(13);
   lcd.setCursor(0, 0);
    lcd.print("NO FLAME");
 }
}

