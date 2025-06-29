
# Time of Flight Sensor

Measuring distance by shooting laser beams and detecting how long it takes for them to bounce back.

## VL53L1X or VL53L0/1XV2

```
Pinout Diagram

VIN     -> 3.3V or 5V
GND     -> GND
SCL     -> A4               (i2c clock line)
SDA     -> A5               (i2c data line)
GPIO01  -> unconnected
XSHUT   -> unconnected
```

[VL53L1X Arduino Library](https://github.com/pololu/vl53l1x-arduino)

### Distance Modes
The VL53L1X has three modes. This is a trade-off.
- VL53L1X::Short: Best for short range (<1.3m), works better in bright ambient light.
- VL53L1X::Medium: Default mode, a balance.
- VL53L1X::Long: Can reach up to 4m in the dark, but is more susceptible to errors from ambient light.

### Timing Budget
This is how much time you allow the sensor for a single measurement (in microseconds).
- Longer budget (e.g., 200000 for 200ms) -> Higher accuracy, better range, but slower readings.
- Shorter budget (e.g., 20000 for 20ms) -> Faster readings, but less accuracy and reduced range.
