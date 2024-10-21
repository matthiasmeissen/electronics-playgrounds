# Calibrate Sensor

Measure min and max values during setup to calibrate a sensor.

## How to calibrate
Within the first 5 seconds of the program, you read all values and detect the min and max. This will be the boundary of your signal.

First you need a while loop in the setup function. And there you check if a new min value or max value is detected and update the variables for it.

In the loop function you first use `constrain()` to clamp the value within the defined boundaries. And the use `map()` to set it to a desired range.

[View in Tinkercad](https://www.tinkercad.com/things/c7ocLipUSbL-14-calibrate-sensor-241021)

## Things I have learned
- With `constrain(value, min, max)` you can clamp a value in a range