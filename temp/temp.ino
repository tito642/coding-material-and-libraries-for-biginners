float temp;
void setup() {
  Serial.begin(9600);
}

void loop() {
  temp = analogRead(A0);
  temp = temp * 0.48828125;// (5/1024)*100
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print("C");
  Serial.println();
  delay(1000);
}
