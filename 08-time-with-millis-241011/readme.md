# Time with Millis

Using millis to blink an LED without using delay.

## The problem with delay()
While we can use the delay function to wait until the next line of code is executed, we can't do nothing else while waiting. This makes it impractical for more complex programs.

## Get time with millis()
There is a function call `millis()` that returns the current time in milliseconds since the arduino started to execute the program. It is store in variable of type `unsigned long` which means it only has positive values. It is in 32bit which means that it can be really large. In fact millis returns to 0 after around 50 days of running.

## Check with previousTime
To write a program that does something after some amount of time you need three things:
- currentTime (increasing value)
- loggedTime (saves a particular time)
- interval (fixed value)

To decide when some code should be executed you write:
```
if (currentTime - loggedTime >= interval) {
    loggedTime = currentTime

    do something
}
```
This way you can check if enough time has passed and if so, you can run some code there.

## Things I have learned
- writing `const int x = 10` declares a constant and `int x = 10` declares a variable
- an `unsigned long` is a datatype with positive numbers in 32bit and should be used for time variables
- the function `millis()` returns the time in ms since the arduino started to execute the program