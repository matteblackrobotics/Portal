// Portal

#include "Nightsky.h"
#include "PrintOut.h"
#include "LED.h"
#include "Utilities.h"
#include "Functions.h"
#include "Sonar.h"

// random value
int randomVal = 0;
// int on_random_max = 2000;    // How likely to turn on
int randomMax = 1000;    // How likely to turn on

// -------- pots ------- //
const int rangePotPin = 12;
int rangePot;

const int brightnessPotPin = 13;
float brightnessPot;
float brightnessScale;


// -------------------------------------------------------- void setup ------------------------------------------------- //
void setup()
{
  utilitiesSetup();
  ledSetup();
  nightskySetup();
}

// ------------------------------------------------- VOID LOOP -------------------------------------------------- //
void loop()
{
  // update ledBrightess[] array
  // determine if LED should randomly turn on if its already off
  // if its already on, iterate the brightness from the brightness array matrix
  for (ledIndex = 0; ledIndex < numLeds; ledIndex++)
  {
    if (ledStepIndexes[ledIndex] == 0)                           // if led state is 0
    {
      randomVal = random(0, randomMax);              // roll dice
      if (randomVal >= randomMax - 1)               // if condition is met
      {
        ledStepIndexes[ledIndex]++;       // shift index from 0 to 1
      }
    }
    else 
    {
      ledStepIndexes[ledIndex]++; // if state != 0 shift index
    } 

    if (ledStepIndexes[ledIndex] >= totalBrightnessSteps) 
    {
      ledStepIndexes[ledIndex] = 0; // loop back index
    }

    brightnessArrayIndex = ledStepIndexes[ledIndex];
    ledBrightness[ledIndex] = brightnessArray[brightnessArrayIndex];  // led brightness = brightness from array index
    R = ledBrightness[ledIndex];
    G = ledBrightness[ledIndex];
    B = ledBrightness[ledIndex];
    ledStrip.setPixelColor(ledIndex, R, G, B);
  }
  ledStrip.show();
  printLn();
  delay(0);
}

// END VOID LOOP