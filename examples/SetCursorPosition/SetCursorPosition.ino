/*  line0, line1, line2, and line3
 *
 *  Use line0(X), line1(X), line2(X), line3(X) to position the cursor on the Sparkfun 20x4 Serial LCD.
 *
 *  "X" can be anywhere from 0 (far left) to 19 (the last position in the row).
 *
 *  Created 03/22/2013 by Andrew Thiel
 */

const int LCDPIN = 6;  //Set this to the connection point of your LCD's RX pin

#include <SoftwareSerial.h>
#include <BareBones20x4.h>

BareBones20x4 lcd(LCDPIN);

void setup() {
  delay(1000);  //Wait a little before starting or else sometimes the Arduino/LCD will glitch out and reset randomly
  lcd.clear();  //Clear the screen and put the cursor at the upper left
  
  lcd.line0(6);  //Move to the seventh position of the first line (numbering starts at zero)
  
  lcd.print("20x4 LCD");
  
  lcd.line1(0);  //Move to the first position of the second line
  
  lcd.print("(:");
  
  lcd.line1(18);  //Move to the nineteenth position of the second line
  
  lcd.print(":)");
  
  lcd.line2(0);  //Move to the first position of the third line
  
  lcd.print("01234567890123456789");
  
  lcd.line3(1);  //Move to the second position of the fourth line
  
  lcd.print("Time:");
}

void loop() {
  lcd.line3(7);  //Move to the eighth position of the fourth line
  
  lcd.print(millis()/1000);
}
