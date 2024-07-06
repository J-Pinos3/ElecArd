# Arduino

### Here I've got a Ultrasonic Distance Sensor and some information lights

- vcc and ground are provided by arduino's pins.
- Connect the vcc terminal of the ultrasonic distance sensor to vcc in the breadboard.
- Connect the ground terminal of the ultrasonic distance sensor to ground in the breadboard.
- Connect the trigger terminal of the sensor to the PWM 9 pin of the arduino and set it as OUTPUT.
- Connect the echo terminal of the sensor to the PWM 10 pin of the arduino and set it as INPUT.
- Calibrate the sensor by setting the trigger to LOW, then HIGH for 10 microseconds and again to low.
- Read the pulse of the ultrasonic wave with pulseIn and the echo pin.
- Convert that value to distance d=s*t.
- Set the 2,3,4,5,6 and 7 from the Arduino as OUTPUT, we'll get our voltage from them.
- Place some LED's anode to a resistor to the pin and the cathode to ground.
- If distance >= 50.0 and distance < 160.0, then turn on the blue and green LED's.
- If distance >= 25.0 and distance < 50, then turn on the yellow and orange LED's.
- If distance >= 0 and distance < 25, then turn on the red and orange LED's.

## Materials
- 1 Arduino
- 1 Ultrasonic Distance Sensor
- At Least 15 Jumper Wires
- 1 Breadboard
- 6 LED's
- 6 200ohm Resistors
##

## Hook Up

![Information Lights](https://res.cloudinary.com/dp9i6jvfn/image/upload/v1719024007/UltrasoincSensorInfoLeds_rcldlo.png)
