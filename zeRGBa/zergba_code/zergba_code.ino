
#define BLYNK_TEMPLATE_ID "TMPL21CPuASC-"
#define BLYNK_TEMPLATE_NAME "LedTricolor"
#define BLYNK_AUTH_TOKEN "EBKDFJGLDKJF45gh5d4gdXDD"

#define BLYNK_PRINT Serial
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>
#include <SoftwareSerial.h>



#define ESP8266_BAUD 115200

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "XTX 1";
char pass[] = "123456789";

SoftwareSerial espSerial(3,2);//rx, tx
ESP8266 wifi(&espSerial);

int pinRED = 9;
int pinGREEN = 10;
int pinBLUE = 11;

void setup() {
  
  Serial.begin(9600);
  espSerial.begin(ESP8266_BAUD);

  pinMode(pinRED, OUTPUT);
  pinMode(pinGREEN, OUTPUT);
  pinMode(pinBLUE, OUTPUT);
  
  Blynk.begin( auth, wifi, ssid, pass);

  Blynk.connectWiFi(ssid, pass);
}

void loop() {
  Blynk.run();

  delay(1000);
}


BLYNK_WRITE(V0){
  int r = param.asInt();
  analogWrite(pinRED, r);
  Serial.print("red = ");
  Serial.println(r);
}

BLYNK_WRITE(V1){
  int b = param.asInt();
  analogWrite(pinBLUE, b);
  Serial.print("blue = ");
  Serial.println(b);
}

BLYNK_WRITE(V2){
  int g = param.asInt();
  analogWrite(pinGREEN, g);
  Serial.print("green = ");
  Serial.println(g);
}
