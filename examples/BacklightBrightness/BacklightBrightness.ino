/*  backLight
 *
 *  This sketch demonstrates the use of backLight(X) to set the brightness of the Sparkfun 20x4 Serial LCD.
 *
 *  Backlight brightness can be set from 0 (off) to 29 (brightest).
 *
 *  Warning: The backlight setting is persistent!
 *           Make sure you have it where you want it before uploading your next sketch!
 *
 *  Created 03/22/2013 by Andrew Thiel
 */

const int BRIGHTNESS = 29;  //Enter you desired brightness setting here (0-29)

const int LCDPIN = 6;  //Set this to the connection point of your LCD's RX pin

#include <SoftwareSerial.h>
#include <BareBones20x4.h>

BareBones20x4 lcd(LCDPIN);

void setup() {
  delay(1000);  //Wait before starting or else sometimes the Arduino/LCD will glitch out
  lcd.clear();
  
  lcd.backLight(BRIGHTNESS);  //Set the backlight brightness to the desired value
  
  lcd.print("Current setting: ");
  lcd.print(BRIGHTNESS);
}

void loop() {
}
