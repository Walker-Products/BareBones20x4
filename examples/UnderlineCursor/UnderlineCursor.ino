/*  lineOn and lineOff
 *
 *  The underline cursor can show you where the cursor is on the Sparkfun 20x4 Serial LCD.
 *
 *  Created 03/21/2013 by Andrew Thiel
 */

#include <SoftwareSerial.h>
#include <BareBones20x4.h>

const int LCDPIN = 6;  //Set this to the connection point of your LCD's RX pin

BareBones20x4 lcd(LCDPIN);

void setup() {
  delay(1000);  //Wait a little before starting or else sometimes the Arduino/LCD will glitch out and reset randomly
}

void loop() {
  lcd.clear();
  
  lcd.lineOn();  //Turn on the Underline Cursor

  delay(1000);
  lcd.print("Ar   no");
  delay(1000);
  lcd.line0(2);  //Move to the third position of the first line (numbering starts at zero)
  delay(1000);
  lcd.print("dui");
  delay(1000);
  
  lcd.lineOff();  //Turn off the Underline Cursor
  
  delay(1000);
}
