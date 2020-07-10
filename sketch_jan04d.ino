#include <ESP8266WiFi.h>
const char* ssid = "Brijal"; // SSID i.e. Service Set Identifier is the name of your WIFI
const char* password = "Brijal07"; // Your Wifi password, in case you have open network comment the whole statement.
void setup() {
Serial.begin(115200);
delay(10);
// Connect to WiFi network
Serial.println();
Serial.println();
Serial.print("Connecting to ");
Serial.println(ssid);
WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED) {
delay(500);
Serial.print(".");
}
Serial.println("");
Serial.println("WiFi connected");
}

void loop()
{
}
