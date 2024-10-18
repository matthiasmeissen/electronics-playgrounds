# Tone with Buzzers

Using a passive buzzer to play melodies with an arduino.

## Type of Buzzers
There are two types of buzzers that work slightly different.

### Active Buzzer
- Sealed bottom and sometimes sticker on top
- Has a crystal inside
- Can produce tone when connected to battery
- Can be used with pwm, but sounds not to well

### Passive Buzzer
- Some electronics at the bottom
- Has not crystal inside
- Needs a pwm signal from arduino to produce a tone

## Using Tone()
The arduino has a built in function suitable to generate sounds. The function `tone()` generates a square wave with a specified frequency (and a 50% duty cycle) on a specified pin.
It has can have two or three arguments: 
- `tone(pin, frequency)` generates a tone untile `noTone()` is called
- `tone(pin, frequeny, duration)` generates a tone for the defined duration 

## Ressources
- [How to use Buzzers (Active and Passive) with and Arduino](https://www.youtube.com/watch?v=gj-H_agfd6U)
- [Difference between Active and Passive Buzzers](https://www.youtube.com/watch?v=4U5eYG8NnL4)


## Things I have learned
- There are active and passive buzzers 
- For melodies you should use passive buzzer an control it with pwm
- With `tone()` you get a square wave with 50% duty cycle
- Using `#define name value` will replace the name with value during preprocessing, so it does not use memory for it