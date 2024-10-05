void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);

  float voltage = sensorValue * (5.0 / 1023.0);

  Serial.print("The voltage is: ");
  Serial.print(voltage);
  Serial.print(" and the value is: ");
  Serial.println(sensorValue);
  delay(1);
}
