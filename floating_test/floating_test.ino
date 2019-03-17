
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
