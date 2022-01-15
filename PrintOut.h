#ifndef PrintOut_h
#define PrintOut_h

#include <Arduino.h>
#include <math.h>

void printInt(String a, int b)
{
  Serial.print(" ");
  Serial.print(a);
  Serial.print(": ");
  Serial.print(b); 
  Serial.print("  ");
}


void printFloat(String a, float b)
{
  Serial.print(" ");
  Serial.print(a);
  Serial.print(": ");
  Serial.print(b); 
  Serial.print("  ");
}


void printBool(String a, bool b)
{
  if(b == true)
  {
    Serial.print(" ");
    Serial.print(a);
    Serial.print(": true ");
  }

  if(b == false)
  {
    Serial.print(" ");
    Serial.print(a);
    Serial.print(": false ");
  }
}


void printString(String a)
{
  Serial.print(" ");
  Serial.print(a);
  Serial.print(" ");
}


void printLn()
{
  Serial.println(" ");
}

void print1()
{

}  
#endif
