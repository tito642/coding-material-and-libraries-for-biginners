/*


 This sketch prints "I Love Arduino" to the LCD


  The circuit:
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
 


 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 0 is the 1st row, since counting begins with 0):
  lcd.setCursor(0, 0);
  // Print a message to the LCD.
  lcd.print("I Love ... ");
    // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
    // Print a message to the LCD.
  lcd.print("  Arduino  ");
}

