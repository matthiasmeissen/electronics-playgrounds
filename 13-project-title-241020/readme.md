# Voltage Divider with LDR

Using a voltage divider circuit to read the value of a photoresistor and control an LED with it.

## Voltage Divider Circuit
When you insert a fixed resistor between 5V and ground, you can only measure 5V or 0V, since the voltage drops immediately to 0V after last part in a circuit like this. 

But when you add another resistor to the circuit, the voltage drops some amount after the first one, and then to 0V after the second one. This is called a voltage divider and works well in a series circuit. (Note that the current in a series circuit stays the same throughout the entire circuit)

You can calculate the voltage between the two resistors like this:


```
Vout = Vin x (R2 / R1 + R2)
```

This means, that the order in which you place the resistors matters.

## Using an LDR (Light Dependant Resistor)
An LDR is a light dependant resistor, also called photoresistor. It changes its resistance based on the amount of light it receives. The more light it gets, the less resistance it has.

[View on Tinkercad](https://www.tinkercad.com/things/lE0BAWjul4d-13-voltage-divider-with-ldr-241020)

## Ressources

- [How to use a photoresistor with arduino](https://www.youtube.com/watch?v=XwJQJnY6iUs)
- [What is an LDR (Light Dependant Resistor)](https://www.youtube.com/watch?v=2fvXW4OEWLE)
- [Understanding Photoresistors](https://www.youtube.com/watch?v=WMkN-uHd-Xo)

## Things I have learned
- The analog inputs of the arduino do not have to be initialsed with pinMode
- The voltage drops to 0V after the last element before ground in a series circuit
- Placing two resistors in series creates a voltage divider which enables to measure voltage in between them