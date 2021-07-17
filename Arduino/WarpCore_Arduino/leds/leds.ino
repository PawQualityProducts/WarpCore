#include <FastLED.h>
#define LED_PIN     6
#define NUM_LEDS    72
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  for (int i = 0; i <= 36; i++) {
    leds[i] = CRGB ( 0, 0, 255);
    //FastLED.show();
    leds[72-i] = CRGB ( 0, 0, 255);
    FastLED.show();
    
    if(i>0)
    {
      leds[i-1] = CRGB ( 0, 0, 0);
    //FastLED.show();
      leds[72-i] = CRGB ( 0, 0, 0);
    FastLED.show();
    }      
  
    //FastLED.show();
    delay(15);
  }
/*
  for (int i = 7; i >= 0; i--) {
    leds[i] = CRGB ( 255, 0, 0);
    FastLED.show();
    delay(40);
  }
   for (int i = 0; i <= 7; i++) {
    leds[i] = CRGB ( 0, 255, 0);
    FastLED.show();
    delay(40);
  }
*/
}
