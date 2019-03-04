# Week04
* Switch 원리, Floating 현상, INPUT_PULL_UP,  DigitalRead(), 회로 제작(Switch로 LED ON/OFF 하기), 스케치 작성

* 소스 설명 : INPUT_PULLUP을 사용하여 LED ON/OFF
<pre>
<code>
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
</code>
</pre>
* 회로도
<div>
<img width="600" alt="screen01" src="https://user-images.githubusercontent.com/1857075/53737146-0dab6700-3ecf-11e9-8c45-dc18ac296338.jpg">
</div>

