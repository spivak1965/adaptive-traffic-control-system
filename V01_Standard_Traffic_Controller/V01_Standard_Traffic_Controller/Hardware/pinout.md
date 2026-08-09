# V01 Hardware Pinout

## Arduino Uno

The Arduino Uno is the primary microcontroller for Version 01.

## MCP23017

The MCP23017 provides the GPIO outputs required for the 12 traffic signal LEDs.

The MCP23017 communicates with the Arduino Uno through the I2C bus.

### I2C Connections

| Arduino Uno | MCP23017 |
|---|---|
| A4 | SDA |
| A5 | SCL |
| 5V | VCC |
| GND | GND |

## Traffic Signal LED Assignment

The 12 LEDs are connected to MCP23017 GPIO pins.

| MCP23017 Pin | Direction | Signal |
|---|---|---|
| GPA0 | North | Red |
| GPA1 | North | Yellow |
| GPA2 | North | Green |
| GPA3 | East | Red |
| GPA4 | East | Yellow |
| GPA5 | East | Green |
| GPA6 | South | Red |
| GPA7 | South | Yellow |
| GPB0 | South | Green |
| GPB1 | West | Red |
| GPB2 | West | Yellow |
| GPB3 | West | Green |

## LED Wiring

Each LED must use a current-limiting resistor.

For each LED:

```text
MCP23017 GPIO
     |
     |
  Resistor
     |
     |
    LED
     |
     |
    GND
