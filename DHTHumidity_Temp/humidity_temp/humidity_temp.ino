#include <dht.h>

dht DHT;

const int pin_data_dht11 = 7;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int check = DHT.read11(pin_data_dht11);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);

  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);  

  delay(1000);
}
