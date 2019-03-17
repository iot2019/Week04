# Week04
* 소스 코드 : INPUT_PULLUP을 사용하여 LED ON/OFF
<pre>
<code>
int LedPin = 8;  // LED PIN
int swPin = 7;   // INPUT_PULLUP SWITCH PIN
void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin, OUTPUT);
  pinMode(swPin, INPUT_PULLUP); 
  
  // 시리얼 통신 설정 
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
* 회로도(INPUT_PULLUP 저항)
<div>
<img width="600" alt="screen01" src="https://user-images.githubusercontent.com/1857075/53737146-0dab6700-3ecf-11e9-8c45-dc18ac296338.jpg">
</div>

<HR>

* 회로도 : PULL UP 저항
<div>
<img width="600" alt="screen01" src="https://user-images.githubusercontent.com/1857075/54485001-ba64eb80-48b4-11e9-9c80-444b2e6d5eef.jpg">
</div>

* 소스 코드 : PULL UP 저항
<pre>
<code>
#define ledPin 13 // 아두이노 내부 LED
#define swPin 7

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(swPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(swPin);
  Serial.println(value);

  if(value == 1) {
    digitalWrite(ledPin, HIGH);
    delay(20);
  } else {
    digitalWrite(ledPin, LOW);
    delay(20);
  }
}
</code>
</pre>

<HR>
                                     
* 회로도 : PULL DOWN 저항
<div>
<img width="600" src="https://user-images.githubusercontent.com/1857075/54485003-be910900-48b4-11e9-9976-daddc7d2490a.jpg">
</div>


* 소스 코드 : PULL DOWN 저항
<pre>
<code>
#define ledPin 13 // 아두이노 내부 LED
#define swPin 7

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(swPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(swPin);
  Serial.println(value);

  if(value == 1) {
    digitalWrite(ledPin, HIGH);
    delay(20);
  } else {
    digitalWrite(ledPin, LOW);
    delay(20);
  }
}
</code>
</pre>
                                     
                                     
                                     
                                     
                                     
                                     
