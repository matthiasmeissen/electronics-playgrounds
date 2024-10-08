# Toggle LED with Internal Pullup

Using a pushbutton with the internal pullup resistor of the arduino to toggle an LED.

## Using built in Pullup Resistors

The pullup approach places a resistor between the pushbutton and the input pin. This makes that when the switch is not pressed it defaults to 5V and when its is pressed to 0V. This is counter intuitive but you have to simply switch the isPressed variable in the code.

The nice thing is that the arduino has built in pullup resistors, so you do not need to place one in the circuit. You can access them with `pinMode(pinNumber, INPUT_PULLUP)`

[Circuit in Tinkercad](https://www.tinkercad.com/things/jdlPhpqggOw-06-toggle-led-with-internal-pullup-241008)

## Ressources

- [Video - Pull Up Resistor Tutorial](https://www.youtube.com/watch?v=wxjerCHCEMg)

## Things I have learned

- The arduino has a built in pullup resistor
- You can write `int buttonState = LOW` since LOW is internally converted to 0 and HIGH to 1 which makes things easier to read