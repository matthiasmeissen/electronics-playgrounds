# Custom Subcircuits in LTspice

Understanding the file types of LTspice and building custom subcircuits.

## Terminolgy

**Models**

When you presse R this adds a new resistor
This is a core coponent within the software which means, it does not get more basic than that.
It is called a component, model (sometimes even also intrinsic component)

**Subcircuits**

A subcircuit is just a few models connected with some wires.

**Symbols**

A Symbol defines the visual representation of a model.


## File System

LTspice is installed in this directory
username/Library/Application Support/LTspice

There are several folders located in there:
- cmp: Components (also called Models)
- sub: Subcircuit
- sym: Symbol (Visual Representations)

In the cmp folder there are a few files specifying the definition of res, cap, dio and similar.

In the sub folder there are files with all kind of extensions like .lib .sub .cir and so on, but they all are definition of subcricuits.


## Building your own subcircuits

You can create your own subcircuits by specifying how models are arranged in one file.

And create a symbol that defines how it should look and what connections it has.

Then you place them in the sub and sym folder and can use them.

Whenever you have such a symobl in a circuit you need to specify how to us it by writing `.inc filename.sub` as a spice directive.

This way it know where it should look for the file to use.


## Ressources

- [LTspice Beginner to Expert Part 2: Models, subcircuits and Symbols](https://www.youtube.com/watch?v=c9hl0uoZA48)


## Things I have learned

- It is impressing that most things in LTspice are just simple text files
- Understanding how the program manages files helps a lot to see how it works