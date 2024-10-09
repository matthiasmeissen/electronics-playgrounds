int LED_PIN = 9;
int intensity = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  intensity += 1;
  intensity = intensity % 255;

  analogWrite(LED_PIN, intensity);
  delay(20);
}
