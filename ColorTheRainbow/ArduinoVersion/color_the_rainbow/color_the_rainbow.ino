const int PIN_LDR = A4;
const int PIN_POT = A5;

const int PIN_BTN_1 = 10;
const int PIN_BTN_2_LDR = 9;

const int PIN_RED = 6;//pwm pins
const int PIN_GREEN = 5;
const int PIN_BLUE = 3;

int status_btn1 = 0;
int status_btn2_ldr = 0;
int lecture_ldr = 0;
int lecture_pot = 0;

void setup() {
  pinMode(PIN_BTN_1, INPUT);
  pinMode(PIN_BTN_2_LDR, INPUT);

  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  status_btn1 = digitalRead(PIN_BTN_1);
  status_btn2_ldr = digitalRead(PIN_BTN_2_LDR);
  lecture_pot = analogRead(PIN_POT);
  lecture_ldr = analogRead(PIN_LDR);

  if (status_btn1 == 1)
    digitalWrite(PIN_RED, HIGH);
  else
    digitalWrite(PIN_RED, LOW);


  if (status_btn2_ldr == 1){
    analogWrite(PIN_GREEN, lecture_ldr/4);//1023/4 = 256
  }else{
    analogWrite(PIN_GREEN, 0);//1023/4 = 256
  }
    
  
  
  analogWrite(PIN_BLUE, lecture_pot/4);//(lecture_pot*5)/1023 GIVES ME VOLTAJE 0-1023 <-> 0v-5v

  Serial.print("boton2: "); Serial.println(status_btn2_ldr);
  //Serial.print("ldr: "); Serial.println(lecture_ldr);
  //Serial.print("pot: "); Serial.println(lecture_pot);

  delay(100);
}
