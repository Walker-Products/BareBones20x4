/*  blinkOn and blinkOff
 *
 *  The blinking box can show you where the cursor is on the Sparkfun 20x4 Serial LCD.
 *
 *  Created 03/22/2013 by Andrew Thiel
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
  
  lcd.blinkOn();  //Turn on the Blinking Box Cursor

  delay(1000);
  lcd.print("Ar   no");
  delay(1000);
  lcd.line0(2);  //Move to the third position of the first line (numbering starts at zero)
  delay(1000);
  lcd.print("dui");
  delay(1000);
  lcd.line1(0);  //Move to the first position of the second line (numbering starts at zero)
  delay(1000);
  
  lcd.blinkOff();  //Turn off the Blinking Box Cursor
  
  delay(1000);
}
