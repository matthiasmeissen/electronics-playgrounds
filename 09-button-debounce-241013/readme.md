# Button Debounce

Using debounce to get a clean signal from a button.

## Button Bounce
A button is a mechanical thing and when you press it, it is vibrating very fast and creates a lot of high and low signals. This can cause the arduino to read many presses instead of only one. The time it takes for the button to settle and give a clean signal is depending on its type.

## Debounce
In order to get a clean signal, we can save the current time, when we detect a state change. And only after some time has passed check again if the signal is still different. Then update the button state.
We need three variables for that:
- currentState (current reading of pin)
- lastState (last reading of pin)
- debouncedState (the state we give to the button)

## Things I have learned
- A button is sort of vibrating really fast when pressed, which can cause some wrong readings
- The code is executed a couple of times updating the debounce timer, until it is stable