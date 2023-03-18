const int OUTPUT_PIN = 7;

void setup() {
  pinMode(OUTPUT_PIN, OUTPUT);

}

void loop() {
 playShortBeep();  // Plays a short beep
 playShortBeep();
  playLongBeep();  // Plays a long beep
  delay(300);  // Waits for 300 milliseconds

}
void playShortBeep()
{
  digitalWrite(OUTPUT_PIN, HIGH);
  delay(400);
  digitalWrite(OUTPUT_PIN, LOW);
  delay(400);
}
// Generates a pulse of duty cycle 50%
// and period 1.4 seconds
void playLongBeep()
{
  digitalWrite(OUTPUT_PIN, HIGH);
  delay(700);
}
