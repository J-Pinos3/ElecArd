const int PIN_LED = 7;
const int PIN_PIR = 6;
int motion = 0;
void setup() {

  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_PIR, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  motion = digitalRead(PIN_PIR);
  if(motion){
    digitalWrite(PIN_LED, HIGH);
  }else{
    digitalWrite(PIN_LED, LOW);
  }
  Serial.println(motion);

}
