/*
 * Project  Moisturereadingscloud.ino
 * Description:
 * Author:
 * Date:
 */
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include "Particle.h"
#include <wire.h>
#define OLED_ADDR   0x3C
Adafruit_SSD1306 display(-1);
#define SSD1306_128_64

int sensorValue = A5;
int delayTime=1000;
//int printsenorVaule = sensorValue;
// setup() runs once, when the device is first turned on.
void setup() {
   Serial.begin(9600);
   Wire.begin();
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay( );
  display.display();
 //printsensorValue(sensorValue);
 
delay(delayTime);

}
 // Put initialization like pinMode and begin functions here.
  // loop() runs over and over again, as quickly as it can execute.
void loop() {
  int sensorValue = analogRead(A5);
  float voltage = sensorValue*(5.0 / 1023.0);
 Serial.println(voltage);
 printThehomeschooldev();


 }

 void printThehomeschooldev() {
  display.clearDisplay();
  display.display();
  // display a pixel in each corner of the screen
  display.drawPixel(0, 0, WHITE);
  display.drawPixel(127, 0, WHITE);
  display.drawPixel(0, 63, WHITE);
  display.drawPixel(127, 63, WHITE);
 display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print("Thomeschooldev");
   delay(1000);
   display.display();
   delay(1000);
   display.display();


 }
  // The core of your code will likely live here.

      /* code */
    
    
 

  // display a pixel in each corner of the screen
  
  // display a line of text
  

  // update display with all of the above graphics
  