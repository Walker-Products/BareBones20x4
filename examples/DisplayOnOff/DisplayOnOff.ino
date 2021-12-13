/*  displayOn and displayOff
 *
 *  This sketch shows you how displayOn and displayOff turn the Sparkfun 20x4 Serial LCD's output on or off.
 *
 *  Note that these functions have no effect on the backlight brightness.
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
  lcd.print("Visible text");
  delay(3000);
  
  lcd.displayOff();  //Turn visual display off
  
  lcd.line1(0);               //You can still position the cursor while the display is off
  lcd.print("Secret Text!");  //You can still manipulate the text while the display is off
  delay(3000);
  
  lcd.displayOn();  //Turn visual display on to reveal the updated text
  
  delay(3000);
}
