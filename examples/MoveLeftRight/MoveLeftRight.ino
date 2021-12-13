/*  moveRight and moveLeft
 *
 *  This sketch demonstrates the functions moveRight and moveLeft on the Sparkfun 20x4 Serial LCD.
 *
 *  Created 03/21/2013 by Andrew Thiel
 */

#include <SoftwareSerial.h>
#include <BareBones20x4.h>

const int LCDPIN = 6;  //Set this to the connection point of your LCD's RX pin

BareBones20x4 lcd(LCDPIN);

void setup() {
  delay(1000);             //Wait before starting or else sometimes the Arduino/LCD will glitch out
  lcd.clear();             //Clear the LCD
  lcd.print("The quick");
  lcd.moveRight();         //Move cursor one space to the right
  lcd.print("brown");
  lcd.moveRight();         //Move cursor one space to the right
  lcd.print("fox");
  
  lcd.line1(0);  //Move to the beginning of the second line
  
  lcd.print("Ar   no");
  lcd.moveLeft();  //Move the cursor five spaces to the left...
  lcd.moveLeft();
  lcd.moveLeft();
  lcd.moveLeft();
  lcd.moveLeft();
  lcd.print("dui");
}

void loop() {
  
}
