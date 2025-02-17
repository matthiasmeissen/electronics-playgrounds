# Simple Oscillator in LTspice

Simulating a simple osciallator using a Schmitt Trigger Inverter circuit.


## CD40106 or Schmitt Trigger Inverter

This time I was trying to simulate an Oscillator using a CD40106.

It is not part of the standard library, so I decided to use a single Scmitt Trigger Inverter to do that.

It was hard at first, but after reading the blog post about [Schmitt Trigger in LTspice](https://www.mikrocontroller.net/topic/428100) it was a bit easier.

It is important that you add details to your components. In this instance I need to specify the values for the hysteresis range of the component.

Also it helped to add uic to the transient command which somehow does prevent it from simulating endlessly which is not desirable.

However later I discovered, that it seems to be available as a library according to [LTSPICE: Adding A CD4000 Library (With 40106 Oscillator Example!)](https://www.youtube.com/watch?v=4MIDWyavapY)

But it also worked with the individual component.


## Things I have learned

- Always add details to the components in LTspice
- Do simple things and try to understand them