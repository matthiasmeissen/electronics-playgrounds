# Simulations with LTspice

Reflecting on my progress and looking into LTspice to simulate circuits.

## Current Status

I am struggling a bit with how to continue with electronics. 
Real circuits seem very intimidating to me. 
Have bought some components to build things, but maybe I need an oscilloscope to visualize what I am doing. 
I might also need a smaller project that I can learn from step by step.


## LTspice

There is a way to simulate circuits called SPICE. 
This method is used in various software and is also available in CircuitsLab, which can be used in the browser. 
While it's intuitive to use and seems quite capable, it is not free. 
Therefore, I have decided to try learning LTspice, which is free but completely unintuitive to use.


### Shortcuts

Since there is no real UI other than right-clicking to access menus, it makes sense to learn the shortcuts:

- F2: Open Component Menu
- CTRL + R: Rotate Component
- F3: Draw Wire
- Spacebar: Home circuit to fit view
- F4: Ground and assign NET Name
- S: Open SPICE directive


## Simulating a circuit

To simulate a circuit, you need to instruct LTspice by setting up a directive. A directive is a command that tells the software what to do, and it is placed as text into the circuit diagram.

To plot the voltage at different points, you need to perform a transient analysis with a command like `.trans 10`, which simulates for a time interval of 10ms.

You also need some points to measure. This can be done by adding a NET name to the nodes you want to monitor. Then, press the run button, and a window will appear. Next, you need to select what to show in this window—in this case, the NET names you just added.

In this window, the range is set to the minimum and maximum of the values. To change it, right-click on the graph labels and set the bounds.


## Things I have learned
- The software LTspice is very complicated but seems very powerfull
- It takes a lot of time to learn electronics in detail