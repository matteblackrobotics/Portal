#ifndef Utilities_h
#define Utilities_h

#include "PrintOut.h"

// serialport: /dev/cu.usbserial-14320

String fileName = " ------------------ Portal ------------------";
String author = " Matt Pfeiffer   Jan, 2022 ";
const int baud1 = 9600;
const int baud2 = 19200;
const int baud3 = 115200;
const int baud4 = 250000;

int delay1 = 50;

void utilitiesSetup()
{
  Serial.begin(baud1); 
  delay(10);
  printLn();
  printString(fileName);
  printString(author);
  printLn();
}


#endif
