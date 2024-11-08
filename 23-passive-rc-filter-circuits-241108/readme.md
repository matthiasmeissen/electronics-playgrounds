# Passive RC Filter Circuits

A passive RC circuit combines a resistor (R) and a capacitor (C) and can be used for signal filtering 

There two main types:
- Integrator (Low Pass)
- Differentiatior (High Pass)


## RC Integrator Circuit (Low Pass Filter)
The resistor is connected in series with the input signal and the capacitor is connected between the output and ground.

```
Input --- R ---+--- Output
               |
               C
               |
              GND
```

The RC integrator passes low-frequency signals and attenuates (weakens) high-frequency signals, acting as a low-pass filter.
This happens because the capacitor charges and discharges slowly compared to rapid changes in the input signal. As a result, quick voltage spikes are filtered out, while slower, smoother changes pass through.

[View Simulation](https://www.falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWEAmaAOSBmMA2ZAWNATnwWRzHxHxxCQUjoFMBaMMAKAHlq5wdGCMMn6MxHAOa9GyNGmkhMyMVA4AnFPka5GW7QKjg0Adg4BjBToWz5Y2PAgtUCTITf4iOBGlJEo9zgAlTX1tfCorGRQ+JBUYBA4Ae0NbXiJ5WOgIRkxqQypMDgALRRRFDiA)

## RC Differentiator Circuit (High Pass Filter)
The capacitor is connected in series with the input signal and the resistor is connected between the output and ground.

```
Input --- C ---+--- Output
               |
               R
               |
              GND
```

The RC differentiator circuit allows high-frequency signals to pass and attenuates low-frequency signals, acting as a high-pass filter.
The capacitor responds quickly to rapid voltage changes, creating a strong output for fast signal transitions. Slow changes, however, do not create a significant output.

[View Simulation](https://www.falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWEA2aAWB8CcBmSy0AOBBAdkJE0sskoFMBaMMAKAGMQAmNWsZWnr35QoseBAZpoyMJDCk0OPEWKckMOKwBOIQeGF7OhCr0KkWAeV1x9tBGE62RkFgHNrtIxT05OtfywASlw8TmBYjnz+XCCEds6iCCwA9rr6IjxYWOD+6CI4aQWOLgAWIAUQLkA)

## Calculating cutoff frequency
For both the integrator and differentiator, the cutoff frequency can be calculated using:

`Fcut = 1 / (2 x PI x R x C)`

## Limitations of Passive RC Filters
- Loss of Gain: They cannot amplify the signal, so the output signal strength is reduced.
- Tuning Precision: Achieving the exact desired cutoff frequency can be difficult due to the tolerances of resistors and capacitors.
- Filter Response Curve: The roll-off is relatively gentle, meaning the filter response curve is not steep.

## How to fix the limitations
By adding an operational amplifier (op-amp) to the circuit, you create an active RC filter, which has several advantages:

- Signal Amplification: It can boost the signal to avoid gain loss.
- More Precise Tuning: Op-amps allow for more consistent and precise cutoff frequencies.
- Sharper Filter Curve: Active filters can have a steeper roll-off, improving the separation between passed and attenuated frequencies.

## Ressources
- [The Integrator Circuit - Analog Computers, Buchla, Serge and Eurorack Modules](https://djjondent.blogspot.com/2019/01/the-integrator-circuit-analog-computers.html)
- [Afrotechmods - Passive RC low pass filter](https://www.youtube.com/watch?v=OBM5T5_kgdI)
- [Afrotechmods - Passive RC high pass filters](https://www.youtube.com/watch?v=4CcIFycCnxU)
- [How low pass filters work](https://www.youtube.com/watch?v=oHKwwvcn77Y)
- [How high pass filters work using a resistor and capacitor (RC)](https://www.youtube.com/watch?v=H30kRgI5bi0)

## Things I have learned
- You can use passive RC Circuits to create low and high pass filters
- Those passive filters are very simple, but also not too precise