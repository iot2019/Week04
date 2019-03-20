
// PULL DOWN SWITCH
// read 값에 따라 내부 LED(13번) ON/OFF
int swPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(swPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(swPin);
  //Serial.println(value);

  if(value == 1) {
    // 버튼을 누르면 내부 LED(13)가 ON
    Serial.println(value);
    digitalWrite(13, LOW);
  } else {
    // 버튼을 때면 내부 LED(13)가 OFF
    Serial.println(value);
    digitalWrite(13, HIGH);
  }
}
