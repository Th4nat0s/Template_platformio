/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

#ifdef ARDUINO_AVR_MICRODUINO_CORE_USB
  const int LED_BUILTIN = 30;
#endif

#ifdef ARDUINO_AVR_PROMICRO8
  const int LED_CUSTOM = 30;
#else
  const int LED_CUSTOM = LED_BUILTIN;
#endif

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // If debug version 
  #ifdef __PLATFORMIO_BUILD_DEBUG__
  Serial.println("Start sketch");
  #endif
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_CUSTOM, HIGH);
  // wait for a second
  delay(50);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_CUSTOM, LOW);
   // wait for a second
  delay(50);
}
