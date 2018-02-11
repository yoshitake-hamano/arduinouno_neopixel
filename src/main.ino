#include <Adafruit_NeoPixel.h>

#define NEOPIXEL_PIN     6
#define NUM_OF_NEOPIXELS 1

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_OF_NEOPIXELS, NEOPIXEL_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
    pixels.begin();
    pixels.setPixelColor(0, 0xFF, 0x00, 0x00);
    pixels.show();
}

void loop() {
}
