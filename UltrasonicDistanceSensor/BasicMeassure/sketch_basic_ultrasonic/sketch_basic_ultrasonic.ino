const int pinTrigger = 9;
const int pinEcho = 10;
// The speed of sound is  340 m/s
const float speedOfSound = 0.034;// cm/us(micro seconds)

void setup() {
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrigger, HIGH);//generate ultra sound wave
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);

  //time = distance / speed
  //suposing distance of 10cm
  //t=d/v = 10/0.034 = 294us

  //WE GET t from the echo pin
  float t = pulseIn(pinEcho, HIGH);

  // divide by 2 because the signal emitted from the trigget
  // because the signal crashes with the object and 
  // the echo receives that signal
  float distance = t *speedOfSound/2;

  Serial.print("Distancia (cm): ");
  Serial.println(distance);

  delay(500);
}
