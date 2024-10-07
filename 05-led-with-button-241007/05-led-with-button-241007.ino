int LEDPIN = 12;
int BUTTONPIN = 2;

int isPressed = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPIN, OUTPUT);
  pinMode(BUTTONPIN, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  isPressed = digitalRead(BUTTONPIN);

  if (isPressed) {
    digitalWrite(LEDPIN, HIGH);
  } else {
    digitalWrite(LEDPIN, LOW);
  }

  Serial.println(isPressed);
  delay(1);
}
