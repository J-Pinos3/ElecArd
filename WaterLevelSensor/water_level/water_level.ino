const int pinSensor = A0;
const int pinLed1 = 2;// red
const int pinLed2 = 3;// orange
const int pinLed3 = 4;// green

void setup() {

  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int valor = analogRead(pinSensor);//0->1023 0v - 5v
  /*
    1023 = 5    ->    x = 5 * 539 
    536  = x                1023
  */

  if(valor >= 0 && valor < 584){
    digitalWrite(pinLed3, HIGH);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed1, LOW);
  
  }else if(valor >= 585 && valor < 620){
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed1, LOW);
  }else{
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed1, HIGH);  
  }



  Serial.print("medicion: ");
  Serial.println(valor);

  delay(500);
}
