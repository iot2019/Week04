int LedPin = 7;  // LED PIN
int swPin = 8;   // INPUT_PULLUP SWITCH PIN
void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin, OUTPUT);
  pinMode(swPin, INPUT_PULLUP); 
  
  // 시리얼 모니터 설정 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int swState = digitalRead(swPin);
  // 시리얼 모니터에 출력
  Serial.println(swState);
  
  if (swState == LOW ) {
      digitalWrite(LedPin, HIGH);
  } else {
    digitalWrite(LedPin, LOW);
  }
}
