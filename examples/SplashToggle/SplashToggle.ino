/*  splashToggle
 *
 *  This sketch uses splashToggle to turn the splash screen of the Sparkfun 20x4 Serial LCD on or off.
 *
 *  After running the sketch, cycle power to see presence/absence of the splash screen.
 *  Be aware that unless you upload another sketch, the setting will be toggled again.
 *
 *  Warning: The Splash Screen setting is persistent!
 *           Make sure you have it where you want it before uploading your next sketch!
 *
 *  Created 03/22/2013 by Andrew Thiel
 */

const int LCDPIN = 6;  //Set this to the connection point of your LCD's RX pin

#include <SoftwareSerial.h>
#include <BareBones20x4.h>

BareBones20x4 lcd(LCDPIN);

void setup() {
  delay(1000);             //Wait before starting or else sometimes the Arduino/LCD will glitch out
  lcd.clear();
  
  lcd.splashToggle();  //Toggle the value controlling whether or not the splash screen is displayed
  
  lcd.print("Splash Screen has");
  lcd.line1(0);
  lcd.print("been toggled. Upload");
  lcd.line2(0);
  lcd.print("new sketch or reset");
  lcd.line3(0);
  lcd.print("to toggle again.");
}

void loop() {
}
