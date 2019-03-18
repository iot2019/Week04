// PULL UP SWITCH

int swPin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(swPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(swPin);
  //Serial.println(value);
  
  if(value == 1) {
    // 13번 핀의 내부 LED가 OFF이면 ON
    Serial.println(value);
    digitalWrite(13, LOW);
  } else {
    // 13번 핀의 내부 LED가 ON이면 OFF
    Serial.println(value);
    digitalWrite(13, HIGH);
  }
}
