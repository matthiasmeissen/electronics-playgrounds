const int knobPin = A0;
const int ledPin = 11;
const int numReadings = 10;

int readings[numReadings];
int index = 0;
int total;
int average;

void setup() {
  // put your setup code here, to run once:
  pinMode(knobPin, INPUT);
  for (int i = 0; i < numReadings; i++) {
    readings[i] = 0;
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int inputValue = analogRead(knobPin);
  int mappedValue = map(inputValue, 0, 1023, 0, 255);

  total = total - readings[index];
  readings[index] = mappedValue;
  total = total + readings[index];

  index += 1;

  if (index >= numReadings) {
    index = 0;
  }

  average = total / numReadings;

  analogWrite(ledPin, average);

  Serial.println(average);
  delay(10);
}
