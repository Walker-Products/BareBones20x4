/*
 *  BareBones20x4.cpp - A simple library for the SparkFun 20x4 Serial LCD
 *
 *  This library would not have been possible if not for the help of the following references:
 *  http://arduino.cc/en/Hacking/LibraryTutorial
 *  http://www.sparkfun.com/datasheets/LCD/SerLCD_V2_5.PDF
 *  http://arduino.cc/forum/index.php/topic,22170.msg166584
 *
 *  Copyright 03/21/2013 Andrew Thiel
 */

#include "Arduino.h"
#include "BareBones20x4.h"
#include "SoftwareSerial.h"

BareBones20x4::BareBones20x4(int pin) : SoftwareSerial(pin, pin) {
  pinMode(pin, OUTPUT);
  begin(9600);
  _pin = pin;
}

void BareBones20x4::clear() {
  write(0xFE);  //Command Character
  write(0x01);  //Clear Display
}

void BareBones20x4::moveRight() {
  write(0xFE);  //Command Character
  write(0x14);  //Move cursor right one
}

void BareBones20x4::moveLeft() {
  write(0xFE);  //Command Character
  write(0x10);  //Move cursor left one
}

void BareBones20x4::scrollRight() {
  write(0xFE);  //Command Character
  write(0x1C);  //Scroll right
}

void BareBones20x4::scrollLeft() {
  write(0xFE);  //Command Character
  write(0x18);  //Scroll left
}

void BareBones20x4::displayOn() {
  write(0xFE);  //Command Character
  write(0x0C);  //Turn visual display on
}

void BareBones20x4::displayOff() {
  write(0xFE);  //Command Character
  write(0x08);  //Turn visual display off
}

void BareBones20x4::lineOn() {
  write(0xFE);  //Command Character
  write(0x0E);  //Underline cursor on
}

void BareBones20x4::lineOff() {
  write(0xFE);  //Command Character
  write(0x0C);  //Underline cursor off
}

void BareBones20x4::blinkOn() {
  write(0xFE);  //Command Character
  write(0x0D);  //Blinking Box cursor on
}

void BareBones20x4::blinkOff() {
  write(0xFE);  //Command Character
  write(0x0C);  //Blinking Box cursor off
}

void BareBones20x4::line0(int posa) {
  write(0xFE);         //Command Character
  write(0x80 + posa);  //Set cursor position
}

void BareBones20x4::line1(int posb) {
  write(0xFE);         //Command Character
  write(0xC0 + posb);  //Set cursor position
}

void BareBones20x4::line2(int posc) {
  write(0xFE);         //Command Character
  write(0x94 + posc);  //Set cursor position
}

void BareBones20x4::line3(int posd) {
  write(0xFE);         //Command Character
  write(0xD4 + posd);  //Set cursor position
}

void BareBones20x4::backLight(int bright) {
  bright = bright + 128;
  bright = constrain(bright,128,157);  //Keep bright between 128 and 157
  write(0x7C);                         //Special Command Character
  write(bright);                       //Set backlight PWM value
  delay(5);                            //Delay to keep display from freezing
}

void BareBones20x4::splashToggle() {
  write(0x7C);  //Command Character
  write(0x09);  //Toggle whether or not Splash Screen is enabled
  delay(5);     //Delay to keep display from freezing
}