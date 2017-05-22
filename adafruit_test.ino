#include <Arduino.h>
#include <Adafruit_RA8875.h>
#include <Adafruit_GFX.h>
#include <SPI.h>

#define RA8875_INT 3
#define RA8875_CS 10
#define RA8875_RESET 9

Adafruit_RA8875 tft = Adafruit_RA8875(RA8875_CS, RA8875_RESET);

void setup() {
    tft.begin(RA8875_800x480);
    tft.displayOn(true);
    tft.GPIOX(true);      // Enable TFT - display enable tied to GPIOX
    tft.PWM1config(true, RA8875_PWM_CLK_DIV1024); // PWM output for backlight
    tft.PWM1out(255);
}

void loop() {
    tft.fillRect(100, 100, 100, 100, RA8875_BLUE);
}
