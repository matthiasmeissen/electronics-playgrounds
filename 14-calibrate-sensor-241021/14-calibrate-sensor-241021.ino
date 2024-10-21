const int sensorPin = A0;
const int ledPin = 11;

int sensorValue;
int sensorMin = 1023;
int sensorMax = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("Start Calibrating");

  while (millis() < 5000) {
    sensorValue = analogRead(sensorPin);
    if (sensorValue < sensorMin) {
      sensorMin = sensorValue;
      Serial.print("Min: ");
      Serial.println(sensorMin);
    }
    if (sensorValue > sensorMax) {
      sensorMax = sensorValue;
      Serial.print("Max: ");
      Serial.println(sensorMax);
    }
  }

  Serial.println("Finish Calibrating");

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  sensorValue = constrain(sensorValue, sensorMin, sensorMax);
  sensorValue = map(sensorValue, sensorMin, sensorMax, 0, 255);

  analogWrite(ledPin, sensorValue);

  Serial.println(sensorValue);
  delay(20);
}
