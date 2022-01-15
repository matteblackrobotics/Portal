#ifndef Heartbeat_h
#define Heartbeat_h

// --------------- Heatbeat ------------- //
// Combined Heartbeat
const int hb_steps_total = 100;               // how long the beat wave lasts
int hb_brightness[hb_steps_total];            // sine array brightness levels
int hb_brightness_max = 175;                  // max brightness of sine array based
int hb_index = 0;

// starting positions
int sy_start_index = hb_steps_total * .25;
int di_start_index = hb_steps_total * .4;

// length of pulses
const int bl_steps_total = hb_steps_total * 1;
const int sy_steps_total = hb_steps_total * .1;
const int di_steps_total = hb_steps_total * .1;


// Baseline Brightness
float bl_a = .1;                    // amplitude
float bl_a0 = .5;                     // normalized amp to 1
float bl_x0 = -Pi / 2;                 // x shift
float bl_y0 = 1.25 ;                      // y shift
float bl_f = (2 * Pi) / bl_steps_total; // frequency
float bl_sq = 1;                      // steepness
int bl_index = 0;                     // index in array
int bl_brightness[bl_steps_total];    // brightness array

// Systolic Brightness
float sy_a = 1;                    // amplitude
float sy_a0 = .5;                     // normalized amp to 1
float sy_x0 = -Pi / 2;             // starting position
float sy_y0 = 1;
float sy_f = (2 * Pi) / sy_steps_total; // frequency
float sy_sq = 10;                      // rate of increase
int sy_index = 0;                     // index in array
int sy_steps = 2 * Pi;                // ??
int sy_brightness_max = 50;           // max brightness
int sy_brightness[sy_steps_total];    // brightness array

// Diastolic Brightness
float di_a = .6;                      // amplitude
float di_a0 = .5;                     // normalized amp to 1
float di_x0 = -Pi / 2;                // x shift
float di_y0 = 1;                      // y shift
float di_f = (2 * Pi) / di_steps_total; // frequency
float di_sq = 12;                     // rate of increase
int di_index = 0;                     // index in array
int di_brightness_max = 20;           // max brightness
int di_brightness[di_steps_total];    // brightness array



#endif