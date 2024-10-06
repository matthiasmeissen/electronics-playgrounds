int pushButton = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(pushButton);
  Serial.println(value);
  delay(1);
}
