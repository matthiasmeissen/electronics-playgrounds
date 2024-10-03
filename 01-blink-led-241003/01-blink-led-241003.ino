void setup() {
  // put your setup code here, to run once:

  // Declare LED_BUILTIN as Output Pin 
  // Most Arduinos have a builtin led, which is set to a fixed pin
  // In order to make it easier, the LED_BUILTIN will reference to that pin number
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Set LED_BUILTIN to high (5V)
  digitalWrite(LED_BUILTIN, HIGH);
  // Wait 2 seconds
  delay(2000);
  // Set LED_BUILTIN to low (0V)
  digitalWrite(LED_BUILTIN, LOW);
  // Wait 0.4 seconds
  delay(400);
}
