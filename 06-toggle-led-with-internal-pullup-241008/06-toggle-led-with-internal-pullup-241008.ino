int LED_PIN = 12;
int BUTTON_PIN = 2;

int ledState = LOW;
int buttonState = LOW;
int lastButtonState = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = !digitalRead(BUTTON_PIN);

  if (buttonState == LOW && lastButtonState == HIGH) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    delay(40);
  }

  lastButtonState = buttonState;
}
