/*
 * Project SCREEN_TEST
 * Description:
 * Author:
 * Date:
 */
#include "Adafruit_SSD1306.h"

#define OLED_DC A1
#define OLED_CS A2
#define OLED_RESET A0

static Adafruit_SSD1306 display(OLED_DC, OLED_RESET, OLED_CS);

void display_init()
{
  display.begin(SSD1306_SWITCHCAPVCC);
  display.display(); // show the splash screen
  delay(2000);
  display.clearDisplay(); // clear the screen buffer
  display.display();  
}

// setup() runs once, when the device is first turned on.
void setup() {

  // Put initialization like pinMode and begin functions here.

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

}