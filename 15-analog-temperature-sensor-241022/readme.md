# Analog Temperature Sensor

Trying to use an analog temperature sensor.

## This did not work

I have a LM35 analog temperatur sensor. Connecting it is easy, but getting meaningful values is hard.

Some videos suggest to just connect to 5V and read it from there. But it seems to be smarter to connect to 3.3V and a sperate ground in order to not interfere with other pins.

According to the Datasheet it has a range von -55 to 150 degrees, but how does that translate to the values I can read at the pin.

There needs do be some calibration and math involved that I do not understand at this point.

[View on Tinkercad](https://www.tinkercad.com/things/4kE4wlpuiqr-15-temperature-sensor-241022)

## Reference
- [How to use a TMP36 Temerature Sensor with Arduino](https://www.youtube.com/watch?v=5nF5R4CGZG4)
- [LM35 Temperatur Sensor with Arduino](https://www.youtube.com/watch?v=3Xc2sPhwWEc)
- [How to use LM35 temperature sensor with Arduino](https://www.youtube.com/watch?v=4D1jQvWOPrY)

## What I have learned
- The LM35 is an analog temperature sensor and has three legs
- An analog temperature sensor looks like a tranistor in its shape and can be distinguised by the writing on it
- Analog temperature sensors seem to be very unprecise and sensitive to noise