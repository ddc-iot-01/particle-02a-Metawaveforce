/*
 * Project OLED_TEST
 * Description:
 * Author:
 * Date:
 */
#include <Wire.h>
#include <ACROBOTIC_SSD1306.h>

String myname;
String mymsg;
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
// Start Serial Monitor
    Serial.begin(9600);
    while(!Serial);         // wait for serial to start running
    Serial.println("Serial Monitor Up and Running");

  // initialie OLED display
  Wire.begin();  
  oled.init();                      // Initialze SSD1306 OLED display
  oled.clearDisplay();              // Clear screen


  myname = "THEHOMESCHOOLDEV";
  mymsg = "Welcome to IoT";
}

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
oled_write(myname, mymsg, millis());
    delay(5000);
}
