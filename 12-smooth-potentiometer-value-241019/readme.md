# Smooth Potentiometer Value

Using moving average to smooth the value from a potentiometer and control the brightness of an LED.

## Basic setup
We read the input value of an analog pin. 
Map that value from a 1024 range to a 255 range. 
And use that to set the pwm of a digital output pin.

[View on Tinkecad](https://www.tinkercad.com/things/igLJfdPMM3G-12-smooth-potentiometer-value-241019)

## Smoothing a value with moving average
To get a clean value from a noise analog input you can use an approach called Moving Average.
You need to define an array with a fixed set of values.
Then you have an index variable that is incremented by 1 each loop and cycles from 0 to the array length.
Each loop you replace the value of the current index in the array with the value from the input.
And then you calculate the average from that.

There is one part for efficiency. We calculate the sum once and then only subtract the current index value and add the new value to the total sum. This makes the code more efficient, since we do not need to add all values of the array each time.

### Types of moving average
- SMA (Simple Moving Average) the approach used here, where all data points have equal weight
- WMA (Weighted Moving Average) gives more weight to the most recent data points
- EMA (Exponential Moving Average) gives more weight to recent values, but with exponential decay for further data points 


## Things I have learned
- With `map(value, inMin, inMax, outMin, outMax)` you can remape a value
- You can use moving average to smooth values