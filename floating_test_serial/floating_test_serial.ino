#define swPin 7

void setup() {
  // put your setup code here, to run once:
  pinMode(swPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(swPin);
  Serial.println(value);
}
