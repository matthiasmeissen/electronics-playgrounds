# Fade LED with PWM

Using Pulse Width Modulation on a digital pin to fade the brightness of an LED.

## Pulse Width Modulation

A digital pin usually outputs only a high or a low signal. However by turning it on and off very quickly you can use it to fade an LED. This is called pulse with modulation (pwm) and it can be done by using a digital pin with `analogWrite(pinNumber, value)` and setting the value between 0 which means low and 255 which means high.

[View in Tinkercad](https://www.tinkercad.com/things/00STJWpllXF-07-fade-led-with-pwm-241009)


## Things I have learned

- Using a digital pin with pwm requires to use the `analogWrite` function