// INPUT_PULLUP 저항으로 LED ON/OFF

int LedPin = 7;  // LED PIN
int swPin = 4;   // INPUT_PULLUP SWITCH PIN
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

  // 초기 상태는 swState가 1이므로 LED OFF
  if (swState == 1 ) {
      digitalWrite(LedPin, LOW);
  } else {
    digitalWrite(LedPin, HIGH);
  }
}
