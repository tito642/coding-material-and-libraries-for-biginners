int flamepin = 2 ;// pin 2 for flame sensor
int flame = HIGH;
void setup() {
  Serial.begin(9600);
  pinMode(flamepin, INPUT);//define FLAME input pin
}

void loop() {
  flame = digitalRead(flamepin);// read FLAME sensor
  

  if(flame == HIGH)
  {
    Serial.println("Fire! Fire!");
   
  }else{
    Serial.println("Peace");
  }}
