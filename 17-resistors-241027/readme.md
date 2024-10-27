# Resistors

A resistor is a component that restricts the flow of electric current in a circuit.

## How a Resistor Works
A resistor turns electrical energy into heat as it restricts the flow of current. 
It achieves this by providing a narrow path for electrons, usually made from ceramic or a thin layer of metal. 
The heat dissipation capacity of a resistor is determined by its size—larger resistors can handle more heat, meaning they can manage more power (measured in watts).

## Types of Resistors

### Through Hole Resistors
These resistors have leads that pass through holes in a circuit board. 
Their resistance is created by a helical (spiral) path, which lengthens the electron travel path and increases resistance. 

They come in two primary types:
- Metal Film (Blue): Known for better precision and lower tolerance (closer to the stated resistance value).
- Carbon Film (Brown): Less precise than metal film, often with a wider tolerance range.

### Surface Mounted Device (SMD) Resistors
These compact resistors are directly attached to the surface of a circuit board and are common in modern electronics due to their small size. 
They typically handle lower currents and voltages. 
SMD resistors have laser-cut patterns on the metal layer to extend the path for electrons, allowing precise control over resistance.

## Using Resistors in Circuits

### In Series
When resistors are placed in series, their resistances add up directly. 
For example, two 50-ohm resistors in series provide a total resistance of 100 ohms.

### In Parallel
Resistors in parallel require a more complex calculation. 
The formula for total resistance (Rt) is: 

`Rt = 1 / ((1/R1) + (1/R2)) + ... + (1/Rn)`

For example, two resistors—one 200 ohms and one 50 ohms—would result in:

`Rt = 1 / ((1/200) + (1/50)) = 40 ohms`

Adding resistors in parallel always results in a total resistance lower than the smallest individual resistor value.

## Circuit Simulators
To understand how resistors and circuits work in detail, there are some tools to simulate them:
- [LTspice](https://www.analog.com/en/resources/design-tools-and-calculators/ltspice-simulator.html)
- [Tinkercad](https://www.tinkercad.com)
- [Curcuitlab](https://www.circuitlab.com)

## Ressources
- [MAKE presents: The Resistor](https://www.youtube.com/watch?v=VPVoY1QROMg)
- [James Gatlin - Understand resistors](https://www.youtube.com/watch?v=QHk8vS5c1iE)
- [The Engineering Mindset - The functionality of resistors](https://www.youtube.com/watch?v=DYcLFHgVCn0)
- [The Enginering Mindset - How to use a resistor](https://www.youtube.com/watch?v=lKwjouNT4C8)