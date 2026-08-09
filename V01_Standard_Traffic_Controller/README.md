# V01 — Standard Traffic Controller

## Objective

The objective of Version 01 is to develop a basic four-direction traffic signal controller using fixed-time traffic signal operation.

This version establishes the fundamental hardware and software architecture that will be expanded throughout later versions.

## System Description

The system represents a four-way intersection using 12 LEDs:

- North: Red, Yellow, Green
- East: Red, Yellow, Green
- South: Red, Yellow, Green
- West: Red, Yellow, Green

The traffic signals operate using a fixed timing sequence.

## Traffic Signal Sequence

The initial timing sequence is:

1. North/South Green
2. North/South Yellow
3. East/West Green
4. East/West Yellow
5. Repeat

Initial timing:

| Signal Phase | Duration |
|---|---:|
| North/South Green | 5 seconds |
| North/South Yellow | 2 seconds |
| East/West Green | 5 seconds |
| East/West Yellow | 2 seconds |

These values may be modified during testing.

## Hardware

### Microcontroller

- Arduino Uno

### I/O Expansion

- MCP23017 I/O expander

### Traffic Signals

- 12 LEDs
- 4 red LEDs
- 4 yellow LEDs
- 4 green LEDs

### Supporting Components

- Breadboard
- Jumper wires
- Current-limiting resistors
- USB cable

## Communication

The Arduino communicates with the MCP23017 using I2C.

The computer will communicate with the Arduino through USB serial communication.

## Software

- Arduino IDE
- Arduino C/C++
- Python
- I2C communication
- Serial communication

## V01 Architecture

```text
                 Computer
                    |
                    | USB Serial
                    |
                    v
              Arduino Uno
                    |
                    | I2C
                    |
                    v
              MCP23017
                    |
                    |
                    v
          12 Traffic Signal LEDs
