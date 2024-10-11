const int ledPin = 12;
int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    ledState = !ledState;
  }
  Serial.println(ledState);
  digitalWrite(ledPin, ledState);
}
