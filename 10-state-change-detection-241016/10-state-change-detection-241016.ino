const int buttonPin = 2;
const int ledPin1 = 12;
const int ledPin2 = 11;

int buttonRead;
int lastButtonRead;
int buttonState;
int counter;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead = digitalRead(buttonPin);

  if (buttonRead != lastButtonRead) {
    if (buttonRead == HIGH) {
      buttonState = HIGH;
      if (counter < 3) {
        counter ++;
      } else {
        counter = 0;
      }
    }
  }

  getState(counter);

  lastButtonRead = buttonRead;

  Serial.println(counter);
}

void getState(int val) {
  if (val == 0) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  } else if (val == 1) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  } else if (val == 2) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }
}
