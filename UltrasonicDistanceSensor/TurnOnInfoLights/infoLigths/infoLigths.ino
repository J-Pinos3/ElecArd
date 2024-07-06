const int pinTrigger = 9;
const int pinEcho = 10;

const float speedOfSound = 0.034;

const int pinsLeds[6] = {7,2,3,4,5,6};

void setup() {
  // put your setup code here, to run once:
  pinMode( pinsLeds[0], OUTPUT );
  pinMode( pinsLeds[1], OUTPUT );
  pinMode( pinsLeds[2], OUTPUT );
  pinMode( pinsLeds[3], OUTPUT );
  pinMode( pinsLeds[4], OUTPUT );
  pinMode( pinsLeds[5], OUTPUT );

  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);

  float time = pulseIn(pinEcho, HIGH);
  float distance = speedOfSound * time /2;

  Serial.print("Distance (cm): ");
  Serial.println(distance);

  if(distance >= 50.0 && distance < 160.0){
    digitalWrite( pinsLeds[0], LOW);
    digitalWrite( pinsLeds[1], LOW);
    digitalWrite( pinsLeds[2], LOW);
    digitalWrite( pinsLeds[3], LOW);
    digitalWrite( pinsLeds[4], HIGH);
    digitalWrite( pinsLeds[5], HIGH);
  }else if( distance >= 25.0 && distance < 50 ){
    digitalWrite( pinsLeds[0], LOW);
    digitalWrite( pinsLeds[1], LOW);
    digitalWrite( pinsLeds[2], HIGH);
    digitalWrite( pinsLeds[3], HIGH);
    digitalWrite( pinsLeds[4], LOW);
    digitalWrite( pinsLeds[5], LOW);
  }else if( distance >= 0 && distance < 25 ){
    digitalWrite( pinsLeds[0], HIGH);
    digitalWrite( pinsLeds[1], HIGH);
    digitalWrite( pinsLeds[2], LOW);
    digitalWrite( pinsLeds[3], LOW);
    digitalWrite( pinsLeds[4], LOW);
    digitalWrite( pinsLeds[5], LOW);
  }

  delay(100);
}
