/* ESP32-WLAN-WiFi_testing
   en Hanna P 2025 */

// Load Wi-Fi library
#include <WiFi.h>

void setup() {

  //SetUp code runs, once:
  Serial.println("Setup start.. ");
  WiFi.mode(WIFI_AP);
  Serial.begin(115200);
  
  Serial.println("Setup done");
}

void loop() {
  // put your main code here, to run repeatedly:

}
