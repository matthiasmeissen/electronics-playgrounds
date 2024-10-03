# Blink LED

The first thing I was doing, was to make the onboard LED blink. 

This is done by turning it on, waiting a few seconds, turning it off and waiting a few seconds again.

Almost each arduino has an onboard LED, but it is set to different pins. To make things easier each arduino has a constant named LED_BUILTIN linked to the pin of the board.

## Things I have learned:

- LED_BUILTIN (is a constant refering to the pin linked to the onboard LED)
- pinMode('Pin Number', 'Type') declares how the pin behaves, pinMode(LED_BUILTIN, OUTPUT) sets the pin for the builtin LED as Output
- digitalWrite('Pin Number', 'Value') sets the volate level of a pin, pinMode(LED_BUILTIN, HIGH) sets the builtin LED pin tp 5V (at least I think it is like that)
- delay('seconds') waits for a fixed time interval, delay(2000) waits 2 seconds to do things