#include <Wire.h>
#include <VL53L1X.h>

VL53L1X sensor;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  if (!sensor.init())
  {
    Serial.println("Failed to detect and initialize sensor!");
    while (1);
  }

  sensor.setDistanceMode(VL53L1X::Medium);
  sensor.setMeasurementTimingBudget(50000);

  sensor.startContinuous(50); 
}

void loop() {
  Serial.print(sensor.read());

  if (sensor.timeoutOccurred()) {
    Serial.print(" TIMEOUT");
  }

  Serial.println();
}
