#include <dht.h>
#define dht_dpin D2

dht DHT;

void setup(){

Serial.begin(115200);

delay(500);//Delay to let system boot

Serial.println("DHT11 Humidity & temperature Sensor");
}//end "setup()"

void loop(){
DHT.read11(D2);

Serial.print("Current humidity = ");

Serial.print(DHT.humidity);

Serial.print("% ");

Serial.print("temperature = ");

Serial.print(DHT.temperature);

Serial.println("Celsius ");

delay(3000);//Wait 3 seconds before accessing sensor again.

}// end loop()
