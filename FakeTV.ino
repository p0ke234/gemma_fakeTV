#include <Adafruit_NeoPixel.h>

#define PIN            0
#define NUMPIXELS      8

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int red;
int green;
int blue;
int white;
int delaytime;

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
  pixels.show();
}

void loop() {
    red = random(40,100);
    green = random(40,100);
    blue = random(40,100);
    white = random(40,100);
    delaytime = random(1,10);
    pixels.setPixelColor(1, pixels.Color(white,white,white)); 
    pixels.setPixelColor(2, pixels.Color(red,0,0));
    pixels.setPixelColor(3, pixels.Color(0,0,blue));
    pixels.setPixelColor(5, pixels.Color(0,0,blue));
    pixels.setPixelColor(6, pixels.Color(0,green,0));
    pixels.setPixelColor(7, pixels.Color(white,white,white));
    pixels.show(); 
    delay(3000 / delaytime);
  }
