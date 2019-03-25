// INPUT_PULL 저항으로 내부 LED(13) ON/OFF
int swPin = 4; // INPUT_PULLUP Pin
int ledPin = 13; // 내부 LED Pin

void setup() {
  // put your setup code here, to run once:
  pinMode(swPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT); // 내부 LED
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(swPin);
  Serial.println(value);

  if(value == 1) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}
