# Arduino

### Here I've got the ESP8266 (ESP-01) WiFi module
### In this case I make a circuit to control a Tri Color LED
### And for that I used blynk cloud

- The ESP8266 ESP-01 is a WiFi module that allows microcontrollers connect to a WiFi Network, this system on a chip contains the ESP8266 this is the microcontroller for the ESP-01 module, 1 LED, contact pins, memory flash and WiFi antenna.
- It has 8 pins, one for vcc (3.3 volts), one for ground, 2 GPIO pins, 1 TXD to send data, one RXD to receive data, (en) that enables the arduino or (ch_pd) that is the modules power control pin and RST to reset the module.
- I used blynk cloud web and app versions in order to control widgets and send data to change colors in the tri-color led.
- The blynk widget I used was the zeRGBa that allows the user to choose color and send them as RGB values.
- The Tri color led's pins will be tied to analog pins of the arduino so I can vary
the colors of the LED.

- The RXD pin  of the ESP-01 module will be connected to a TXD pin in the arduino set by me previously.
- The TXD pin  of the ESP-01 module will be connected to a RXD pin in the arduino set by me previously.
- The en or the ch_pd pin will be tied to 3.3 volts too.

## Materials
- 1 Arduino
- 1 ESP8266 ESP-01 Module
- At Least 15 Jumper Wires
- 1 Tri-Color LED
- 3 200ohm Resistors
- 1 Breadboard
- Your own account in Blynk
##



## Hook Up

[![IMG-3408.jpg](https://i.postimg.cc/QCBvQL9b/IMG-3408.jpg)](https://postimg.cc/Wqv9VH7F)

[![IMG-3409.jpg](https://i.postimg.cc/HxkqL8TF/IMG-3409.jpg)](https://postimg.cc/94s88MRB)

[![IMG-3410.jpg](https://i.postimg.cc/d3zpnWGK/IMG-3410.jpg)](https://postimg.cc/Mfm9pmss)

[![IMG-3412.jpg](https://i.postimg.cc/xCpWNjC8/IMG-3412.jpg)](https://postimg.cc/62RHDXCx)

![purple](https://res.cloudinary.com/dp9i6jvfn/image/upload/v1723842968/IMG_3403_jwmw6l.jpg)

![purpleControl](https://res.cloudinary.com/dp9i6jvfn/image/upload/v1723842929/IMG_3402_mregay.jpg)

![cyan](https://res.cloudinary.com/dp9i6jvfn/image/upload/v1723842900/IMG_3398_iflqho.jpg)

![cyanControl](https://res.cloudinary.com/dp9i6jvfn/image/upload/v1723842900/IMG_3399_isenvu.jpg)

![blue](https://res.cloudinary.com/dp9i6jvfn/image/upload/v1723842827/IMG_3394_wziv9w.jpg)

![blueControl](https://res.cloudinary.com/dp9i6jvfn/image/upload/v1723842825/IMG_3395_yzizk3.jpg)

## Credits 
* https://www.xecor.com/blog/esp-01-pinout-programming-datasheet-and-comparison#title-11esp-01-advantages-and-disadvantages

* https://www.ariat-tech.com/blog/esp-01-functional-features,pin-configuration,applications-and-relationship-with-esp-01s-and-esp8266.html

* https://programarfacil.com/podcast/como-configurar-esp01-wifi-esp8266/