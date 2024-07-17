# Section 3

### Ping Pong Flashers - Astable Multivibrator

- Wire up an RC delayed switch with a transistor that keeps on a LED for 75 seconds.

## The Theory

- An astable multivibrator is a circuit that does not hav a stable state
- It oscillates back and forth between two states.

## Instructions
- Place two transistors and leave some space between them.
- Tie to ground the emitter of each transistor.
- Put 1 200ohm resistor from vcc to a led to the collector side of the transistor for each transistor.
- Add an RC timing circuit to the first transistor
- From vcc go into a 10k resistor, then into the cathode (short leg) of a 100uF capacitor, the anode will go the collector of the transistor, in the same line as the cathode of the led.
- The same circuit for the second transistor.
- Now when the transistor is turned on, the led will light uo and the capacitor wil charge as current flows from collector to emitter.

- Now we need a way to discharge the capacitor and turn the transistors at the base.
- So we will from put a jumper wire from the cathode (short leg) of the second capacitor and send it to the base of the first transistor, this goes for both transistors.
- Now when a capacitor charges and discharges, it will turn on the other transistor at the base.

## Materials
- 2 100uF Capacitor
- 2 NPN PN2222 BJT Transistor 
- 2 10K ohm Resistor
- 2 200 ohm Resistor
- 2 LED
- At Least 7 Jumper Wires
- A 9 Volt Battery
- Aligator Clips



## Wiring
![ping pong1](https://res.cloudinary.com/dp9i6jvfn/image/upload/v1721216445/astable1_kjjudx.png)

![ping pong2](https://res.cloudinary.com/dp9i6jvfn/image/upload/v1721216450/astable2_bdcw5c.png)