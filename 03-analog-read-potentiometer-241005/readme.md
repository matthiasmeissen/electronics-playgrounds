
# Analog Read Potentiometer

Connecting a potentiometer and read the resistance with the serial monitor.

## Potentiometers

This is a very simple process, you just take a potentiometer and connect the left pin to ground, the right one to +5V and the center to an analog pin of your arduino.

You can make it a bit more elegant to add a connection to the bus on your breadboard by using the lanes on the side and connect to ground and +5V to those.  
Then you can connect the potentiometer to those lanes, which helps to have things a bit more clean.

The code for that is also very simple. 
You setup a serial communication at 9600 bits/s by writing `Serial.begin(9600)` in the setup function.  
Then in the main loop you add a variable to store the value of the input pin A0 to it by writing `int sensorValue = analogRead(A0)`  
Having done that you only need to print that value to the serial monitor using `Serial.println(sensorValue)`

## Ressources

- [Video - How to use a potentiometer with arduino analogread](https://www.youtube.com/watch?v=Wa8CjGsOFzY)


## Things I have learned

- The text B10K on the Potentiometer the B stands for Linear and 10K for the resistance
- It does not matter in which way you mount the Potentiometer, but left to ground and right to +5V makes turning left give 0V and right 5V
- The analog pins on the arduino are ADC and convert the analog input from 0-5V to a digital signal from 0-1023
- Using the bus on the breadboard for ground and +5V makes things easier
- Serial.begin(rate) means creating a serial connection at 9600 bits in a second
- analogRead(pin) reads the value from an analog pin
