#include<dht.h>

dht DHT;
#define DHT11_PIN2 // D4

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
 int check = DHT.read11(DHT11_PIN);
 Serial.print("Temp :");
 Serial.println(DHT.temperature);
}
