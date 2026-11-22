#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define RGB_LED_PIN 48
#define LED_COUNT 1

Adafruit_NeoPixel rgb(
    LED_COUNT,
    RGB_LED_PIN,
    NEO_GRB + NEO_KHZ800
);

void setup() {
    rgb.begin();
    rgb.setBrightness(40);
    rgb.clear();
    rgb.show();
}

void loop() {
    // Red
    rgb.setPixelColor(0, rgb.Color(255, 0, 0));
    rgb.show();
    delay(1000);

    // Green
    rgb.setPixelColor(0, rgb.Color(0, 255, 0));
    rgb.show();
    delay(1000);

    // Blue
    rgb.setPixelColor(0, rgb.Color(0, 0, 255));
    rgb.show();
    delay(1000);

    // Off
    rgb.clear();
    rgb.show();
    delay(1000);
}