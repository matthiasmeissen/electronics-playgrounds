const int buttonPin = 2;

int debouncedState = 0;
int lastState = 0;

unsigned long lastDebounceTime = 0;
const unsigned long debounceTime = 50;

int count;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int currentState = !digitalRead(buttonPin);

  // If the button state has changed, reset debounce timer
  if (currentState != lastState) {
    lastDebounceTime = millis();
  }

  // After debounce time has passed, update the debounced state
  if (millis() - lastDebounceTime > debounceTime) {
    if (currentState != debouncedState) {
      debouncedState = currentState;

      increaseCounter(debouncedState);
    }
  }

  lastState = currentState;
}

void increaseCounter(int state) {
  if (state == 1) {
    count ++;
    Serial.println(count);
  }
}
