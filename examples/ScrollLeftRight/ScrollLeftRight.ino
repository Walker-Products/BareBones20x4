/*  scrollRight and scrollLeft
 *
 *  This sketch demonstrates the functions scrollRight and scrollLeft on the Sparkfun 20x4 Serial LCD.
 *
 *  Note how text scrolls between the first and third lines, and likewise with the second and fourth.
 *
 *  Created 03/21/2013 by Andrew Thiel
 */

#include <SoftwareSerial.h>
#include <BareBones20x4.h>

const int LCDPIN = 6;  //Set this to the connection point of your LCD's RX pin

BareBones20x4 lcd(LCDPIN);

void setup() {
  delay(1000);  //Wait before starting or else sometimes the Arduino/LCD will glitch out
  lcd.clear();  //Clear the LCD
  
  lcd.print("01234567890123456789");  //Fill the top two lines with some text that we can scroll
  lcd.print("They see me scrollin");
}

void loop() {
  for(int i=0; i<60; i++) {
    lcd.scrollLeft();  //Scroll display to the left
    delay(100);
  }
  
  for(int i=0; i<5; i++) {
    lcd.scrollRight();  //Scroll display to the right
    delay(200);
  }
}
