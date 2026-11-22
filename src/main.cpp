#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

const int SCREEN_W = 240;
const int SCREEN_H = 240;

void drawFace(bool blink, int pupilOffset) {
    tft.fillScreen(TFT_BLACK);

    // Outer face
    tft.drawRoundRect(
        20, 35, 200, 170,
        25, TFT_CYAN
    );

    // Eyes
    if (blink) {
        tft.drawLine(55, 100, 105, 100, TFT_WHITE);
        tft.drawLine(135, 100, 185, 100, TFT_WHITE);
    } else {
        tft.fillRoundRect(
            55, 75, 50, 65,
            15, TFT_WHITE
        );

        tft.fillRoundRect(
            135, 75, 50, 65,
            15, TFT_WHITE
        );

        // Pupils
        tft.fillCircle(
            80 + pupilOffset, 105,
            12, TFT_BLUE
        );

        tft.fillCircle(
            160 + pupilOffset, 105,
            12, TFT_BLUE
        );
    }

    // Mouth
    tft.drawRoundRect(
        85, 155, 70, 20,
        8, TFT_GREEN
    );

    // Name
    tft.setTextColor(TFT_YELLOW, TFT_BLACK);
    tft.setTextDatum(MC_DATUM);
    tft.drawString("ROBOY", 120, 20, 2);
}

void setup() {
    Serial.begin(115200);

    tft.init();
    tft.setRotation(0);
    tft.fillScreen(TFT_BLACK);

    drawFace(false, 0);
}

void loop() {
    // Look right
    drawFace(false, 8);
    delay(800);

    // Blink
    drawFace(true, 0);
    delay(250);

    // Look left
    drawFace(false, -8);
    delay(800);

    // Blink again
    drawFace(true, 0);
    delay(250);
}