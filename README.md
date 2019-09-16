# BlackBoxMission
Everything you need to create a new black box.

The Fall 2019 Black Box has an on/off switch; a red LED on/off indicator; a blinking IR LED that is on for 50ms, off for 200ms; and an RGB LED with three switches that turn it red, green, or blue.

## CAD
There should be .ipt and .stl files for the black box body, black box top, and black box cone.

## Circuitry
There should be a circuit diagram including an arduino.

## Arduino Code
The only thing the arduino controls is the IR LED blinking on pin 3. Everything else is static. This can be implemented in pure hardware if you understand how to set the time up and time down on a 555 timer.

## IR Tester
Since the IR signal is invisible to human eyes, the IR tester blinks a visible LED whenever the IR LED is on. In the future this should be upgraded to include an arduino that calculates the average time high and time low to verify that these are correct.
