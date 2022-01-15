#ifndef Nightsky_h
#define Nightsky_h

#include "PrintOut.h"
#include "Functions.h"

// ---------------- NightSky ------------ //
int ledIndex = 0;                    // which LED
int ledBrightness[numLeds];          // brightness of each LED
int ledStepIndexes[numLeds];         // which index each LED is in the brightness array

// brightness array
// const int total_brightness_steps = 400;       // how long the brightness wave
const int totalBrightnessSteps = 100;       // how long the brightness wave FOR NANO
int brightnessArray[totalBrightnessSteps]; // sine array brightness levels
int brightnessArrayIndex = 0;               // index in brightness array
int nsBrightnessMax = 250;                   // max brightness of brightness sine array

// raw sine array, ns = nightsky
float nsAmplitude = 1;                               // amplitude
float ns_a0 = .5;                             // noralize amplitude to 1
float ns_x0 = -Pi / 2;                        // x shift
float ns_y0 = 1;                              // y shift
float nsFrequency = (2 * Pi) / totalBrightnessSteps; // frequency, length of wave


// Build sine wave as a path that leds travel through once triggered to turn on
// @param brightnessArrayIndex (index in the sine array)
// @param totalBrightnessSteps (size of sine array)
void nightskySetup()
{
  printString("brightnessArray");
  for (int brightnessArrayIndex = 0; brightnessArrayIndex < totalBrightnessSteps; brightnessArrayIndex++)
  {
    rad = nsFrequency * brightnessArrayIndex + ns_x0;
    brightnessArray[brightnessArrayIndex] = nsAmplitude * ns_a0 * (sin(rad) + ns_y0) * nsBrightnessMax;
    printInt(brightnessArray[brightnessArrayIndex]); 
    printLn();
  }
  printLn();
}

#endif