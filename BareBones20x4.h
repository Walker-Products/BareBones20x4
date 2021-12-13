/*
 *  BareBones20x4.h - A simple library for the SparkFun 20x4 Serial LCD
 *
 *  This library would not have been possible if not for the help of the following references:
 *  http://arduino.cc/en/Hacking/LibraryTutorial
 *  http://www.sparkfun.com/datasheets/LCD/SerLCD_V2_5.PDF
 *  http://arduino.cc/forum/index.php/topic,22170.msg166584
 *
 *  Copyright 03/21/2013 Andrew Thiel
 */

#ifndef BareBones20x4_h
#define BareBones20x4_h

#include "Arduino.h"
#include "SoftwareSerial.h"

class BareBones20x4 : public SoftwareSerial {
  public:
    BareBones20x4(int pin);
    void clear();
    void moveRight();
    void moveLeft();
    void scrollRight();
    void scrollLeft();
    void displayOn();
    void displayOff();
    void lineOn();
    void lineOff();
    void blinkOn();
    void blinkOff();
    void line0(int posa);
    void line1(int posb);
    void line2(int posc);
    void line3(int posd);
    void backLight(int bright);
    void splashToggle();
  private:
    int _pin;
};

#endif