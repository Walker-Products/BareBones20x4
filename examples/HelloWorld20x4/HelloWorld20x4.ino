/*  Hello World
 *
 *  This gives you the basics to get started with your own sketch for the Sparkfun 20x4 Serial LCD.
 *
 *  Created 03/21/2013 by Andrew Thiel
 */

#include <SoftwareSerial.h>
#include <BareBones20x4.h>

const int LCDPIN = 6;  //Set this to the connection point of your LCD's RX pin

BareBones20x4 lcd(LCDPIN);

void setup() {
  delay(1000);  //Wait a little before starting or else sometimes the Arduino/LCD will glitch out and reset randomly
  lcd.clear();
  lcd.print("Hello, World!");
}

void loop() {
  
}
