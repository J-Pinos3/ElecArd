# Section 3

### Here I've got a bjt NPN PN2222 transistor.
### Emitter Side of the transistor

- The base is connected to vcc with a 100k ohm resistor, this should provide the required voltage to turn on the transistor.
- The emitter will be connected with a 200 ohm resistor and then to an led to ground.
- the collector is connected to vcc.

- the base must be 0.7v higher than the emitter (the voltage requiered across the resistor and the led) for the diode to turn on.
- For example 1.5v across the 200 ohm resistor and 3.7v across the 100k resistor.
- So we drop less voltage in the first resistor which limits the current to the base.
- The base current  is limited because the load (200ohm resistor and led are on the emitter side)

- The voltage meassured between the base and the emitter will be almost 0.648 A

## Materials
- 1 LED
- 1 NPN PN2222 Transistor
- 1 200 ohm Resistor
- 1 100K ohm Resistor
- At Least 15 Jumper Wires
- A 9 Volt Battery
- Aligator Clips


## Wiring

[![image.png](https://i.postimg.cc/0Qh9KQWM/image.png)](https://postimg.cc/2bdsPzfr)
