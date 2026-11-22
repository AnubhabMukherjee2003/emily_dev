#include <Arduino.h>
#include <TFT_eSPI.h>

// Enable TFT-specific optimizations
#define ROBOEYES_TFT_MODE
#include <TFT_RoboEyes.h>

// Our working TFT display
TFT_eSPI tft = TFT_eSPI();

// RoboEyes object using our TFT display
TFTRoboEyes<TFT_eSPI> eyes(tft);

void setup() {
    Serial.begin(115200);

    // Initialize TFT
    tft.init();
    tft.setRotation(0);
    tft.fillScreen(TFT_BLACK);

    // Initialize RoboEyes for 240x240 display
    eyes.begin(240, 240, 50);

    // Background and eye color
    eyes.setDisplayColors(TFT_BLACK, TFT_CYAN);

    // Automatic blinking
    eyes.setAutoblinker(true, 3, 2);

    // Random idle eye movement
    eyes.setIdleMode(true, 2, 2);
}

void loop() {
    // Keep the animation running
    eyes.update();
}