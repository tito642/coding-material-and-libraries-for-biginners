int sensorPin = 0; //the analog pin the TMP36's Vout (sense) pin is connected to
                        //the resolution is 10 mV / degree centigrade with a
                        //500 mV offset to allow for negative temperature
void setup() {
 Serial.begin(9600);  //Start the serial connection with the computer
                       //to view the result open the serial monitor 

}

void loop() {
  //getting the voltage reading from the temperature sensor
 int reading = analogRead(sensorPin);  
 

 float voltage = reading * 5.0;
 voltage /= 1024.0; 
 
 // print out the voltage
 Serial.print(voltage); Serial.println(" volts");
 
 // now print out the temperature
 float temperatureC = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
                                               //to degrees ((voltage - 500mV) times 100)
 Serial.print(temperatureC); Serial.println(" degrees C");
 
 
 delay(1000);                                     //waiting a second

}
