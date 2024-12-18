# Inductors

Inductors also called coils, are passive electrical components that generate magnetic fields when current flows through them.

## How inductors are made
You can make an inductor by winding insulated copper wire around a core.
Different core materials (air, iron, ferrite) influence the inductance and efficiency of the coil.

## Functions of an Inductor
When current flows through an inductor, it generates a magnetic field. 
The strength of the magnetic field increases in proportion to the current and number of coil turns.

The field stores energy, which is released when the current flow is interrupted or decreased.
The stronger the current and the more turns in the coil, the greater the energy stored.

Inductors are sluggish and resist sudden spikes or drops in current, leading to various applications in circuits.

## Flyback Voltage

When the current is suddenly interrupted, the magnetic field collapses rapidly, inducing a high voltage spike known as flyback.
To avoid this (and to protect other components from damage) a diode is placed in reverse parallel to the inductor.

## Using Inductors

### Filtering and Smoothing in power supplies
Power supplies convert AC to DC, but the resulting signal often has imperfections or fluctuations. 
By inserting an inductor, which is slow to react to sudden changes in current, you can smooth out these fluctuations and achieve a more stable and consistent DC signal.

### Transformers and Mutual Induction
When two coils are placed next to each other in an AC circuit, the electromagnetic field generated by one coil (the primary) induces a current in the other coil (the secondary) without physical contact. 
By varying the number of windings in each coil, we can step up or step down the voltage. 
This principle is essential for electrical grids, where it allows the transmission of high-voltage power over long distances and its conversion to lower, usable voltages for homes and businesses.

### Tuning and Frequency Selection
Combining an inductor and a capacitor creates a resonant circuit, known as an LC circuit. 
This circuit has a natural resonant frequency that can be adjusted by changing the values of the inductor or capacitor. 
LC circuits are especially useful in musical applications, as they keep oscillators tuned to precise frequencies.

## Ressources
- [MAKE presents: The Inductor](https://www.youtube.com/watch?v=STDlCdZnIsw)
- [Schematix - How Inductors Work and how to make your own](https://www.youtube.com/watch?v=d-E12DlzGGc)
- [Great Scott - Electronic Basics: Coils](https://www.youtube.com/watch?v=kdrP9WbJIb8)

## Things I have learned
- There is Conventional Current (Positive to negative) and Electron Flow (Negative to positive)
- Current creates a magnetic field