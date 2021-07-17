#include <FastLED.h>
#define LED_PIN     6
#define NUM_LEDS    72
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  for (int i = 0; i <= 41; i++) {
    leds[72-i] = CRGB ( 0, 0, 255);
    if(i>10)
      leds[i-11] = CRGB ( 255, 0, 0);
      
    FastLED.show();
    
    if(i>0)
    {
      leds[72-i] = CRGB ( 0, 0, 0);
      if(i>11)
        leds[i-12] = CRGB ( 0, 0, 0);
      FastLED.show();
    }      
    delay(15);
  }
  leds[30] = CRGB ( 255, 255, 255);
  FastLED.show();
  delay(15);
  leds[30] = CRGB ( 0, 0, 0);
  FastLED.show();

}
