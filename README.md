# Adaptive Traffic Control System

A 19-version engineering project that develops an adaptive traffic signal controller from a basic fixed-time traffic light system into a predictive and optimization-based research prototype.

## Project Objective

The objective of this project is to design, implement, test, and document an intelligent traffic signal control system capable of sensing traffic conditions and progressively making more intelligent control decisions.

The project is developed incrementally through 19 versions. Each version introduces one major capability and is tested before the next version is developed.

## System Evolution

| Version | Feature | Status |
|---|---|---|
| V01 | Standard Traffic Controller | 🔄 In Development |
| V02 | Vehicle Detection | ⬜ Planned |
| V03 | Queue Detection | ⬜ Planned |
| V04 | Adaptive Green Time | ⬜ Planned |
| V05 | Four-Way Intersection | ⬜ Planned |
| V06 | Left-Turn Controller | ⬜ Planned |
| V07 | Pedestrian Crossing | ⬜ Planned |
| V08 | Rush Hour Mode | ⬜ Planned |
| V09 | Emergency Vehicle Priority | ⬜ Planned |
| V10 | Night Mode | ⬜ Planned |
| V11 | Weather Mode | ⬜ Planned |
| V12 | Intelligent Queue Prediction | ⬜ Planned |
| V13 | Predictive Traffic Controller | ⬜ Planned |
| V14 | Fault Detection | ⬜ Planned |
| V15 | Data Logger | ⬜ Planned |
| V16 | Performance Metrics | ⬜ Planned |
| V17 | Optimization | ⬜ Planned |
| V18 | Graphical Dashboard | ⬜ Planned |
| V19 | Research Prototype | ⬜ Planned |

## Hardware

The prototype uses:

- Arduino Uno
- MCP23017 I/O expander
- HC-SR04 ultrasonic sensors
- LEDs for traffic signal simulation
- Breadboard
- Jumper wires
- USB connection to the computer

Additional hardware will be introduced in later versions as required.

## Software

The project uses:

- Arduino IDE
- Arduino C/C++
- Python
- Serial communication
- I2C communication
- MCP23017 control
- Data logging and analysis
- Graphical visualization

Additional software tools may be introduced in later versions.

## System Architecture

The basic architecture is:

Computer
|
| USB Serial
v
Arduino Uno
|
| I2C
v
MCP23017
|
v
Traffic Signal LEDs

In later versions, ultrasonic sensors and additional sensing hardware will provide traffic information to the Arduino. Python will process the data and implement higher-level traffic-control algorithms.

## Development Philosophy

Each version follows the same engineering process:

1. Define the objective
2. Design the system
3. Implement the hardware
4. Implement the software
5. Test the system
6. Record measurements
7. Analyze the results
8. Document limitations
9. Freeze the completed version
10. Begin the next version

## Version Documentation

Each version will contain:

- Objective
- System architecture
- Hardware configuration
- Pin assignments
- Circuit/wiring information
- Arduino source code
- Python source code
- Testing procedure
- Experimental results
- Problems encountered
- Solutions implemented
- Limitations
- Future improvements

## Research Direction

The final objective is to develop a research-oriented traffic control prototype capable of:

- Real-time traffic sensing
- Queue estimation
- Adaptive signal timing
- Traffic prediction
- Emergency vehicle priority
- Fault detection
- Performance measurement
- Optimization
- Real-time visualization

## Project Status

Current development stage:

**V01 — Standard Traffic Controller**

The project is currently being rebuilt from the beginning with version-controlled documentation.
