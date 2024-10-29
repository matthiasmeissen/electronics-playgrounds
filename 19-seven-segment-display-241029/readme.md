# Seven Segment Display

A seven segment display is an electronic component that consists of seven LEDs and can be used to display numbers and chracters.

## What are 7 Segment Displays
A 7-segment display consists of seven LEDs labeled from A to G. 
The labeling starts at the top (segment A), goes clockwise around the display, with segment G located in the center.

Each LED segment has its own pin, while the other side of each LED is connected together in a shared pin configuration.
- Common Anode Displays: All LEDs share a common anode (positive) pin.
- Common Cathode Displays: All LEDs share a common cathode (ground) pin.

In my setup, I’m using a 5161AS 7-segment display, which is a common cathode display, meaning that all LEDs share the same ground (GND) pin.

[View on Tinkercad](https://www.tinkercad.com/things/bEqdGMWKOwJ-19-seven-segment-display-241029)


## Pinout Diagram
Here's the pinout diagram for the 5161AS display. 
The numbers represent pin numbers, and letters refer to segments.

```
10  09  08  07  06
G   F   GD  A   B

         A
       F   B
         G
       E   C
         D  .
          
E   D   GD  C   .
01  02  03  04  05
```

## Calculating Resistor Use
According to the datasheet, each segment operates at 1.8V and draws 20mA (0.02A).

Since we have a 5V power supply, the required voltage drop across each resistor is: `5V - 1.8V = 3.2V`

Using Ohms Law `R = V / I` we calculate `R = 3.2V / 0.02A = 160 Ohm`

Recommendation: Use a resistor of at least 160Ω for each segment to ensure proper current limiting.

## Ressources
- [How to use 7 Segment Display with arduino](https://www.youtube.com/watch?v=_JbHhfZvfGU)
- [Great Scott - 7 Segment Display](https://www.youtube.com/watch?v=a6D6H6SLa_c)
- [The Learning Circuit - How to Drive a 7 Segment Display](https://www.youtube.com/watch?v=XCJqoae4hgY)

## Things I have learned
- A seven segment display just uses 7 LEDs
- Each LED can be adressed with its own pin and they all share a common one (either anode or cathode)
- You can use such a display to write same basic things 