int ledPin = 13;
int ledPin2 = 14;
int ledPinInverted = 15;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPinInverted, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPinInverted, LOW);
  delay(500);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPinInverted, HIGH);
  delay(500);
}
