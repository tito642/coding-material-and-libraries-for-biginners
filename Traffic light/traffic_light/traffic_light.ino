int white = 10;
int yellow = 9;
int green = 8;

void setup()
{
    pinMode(white, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}
void loop(){
     digitalWrite(green, LOW);
    digitalWrite(white, HIGH);
    delay(2000);
    digitalWrite(white, LOW);
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    delay(2000);
}

