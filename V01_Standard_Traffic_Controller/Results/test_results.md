# V01 Test Results

## Test Date

August 8, 2026

## Hardware Test

The Arduino Uno successfully communicated with the MCP23017 I/O expander at I2C address `0x27`.

## LED Test

All 12 traffic signal LEDs were tested through the MCP23017.

| Direction | Red | Yellow | Green |
|---|---|---|---|
| North | PASS | PASS | PASS |
| East | PASS | PASS | PASS |
| South | PASS | PASS | PASS |
| West | PASS | PASS | PASS |

## Traffic Sequence Test

The complete fixed-time traffic sequence was successfully demonstrated.

### Phase 1

North/South Green  
East/West Red

**Result: PASS**

### Phase 2

North/South Yellow  
East/West Red

**Result: PASS**

### Phase 3

East/West Green  
North/South Red

**Result: PASS**

### Phase 4

East/West Yellow  
North/South Red

**Result: PASS**

## Timing

| Phase | Duration |
|---|---:|
| North/South Green | 5 seconds |
| North/South Yellow | 2 seconds |
| East/West Green | 5 seconds |
| East/West Yellow | 2 seconds |

## Overall Result

**V01 Hardware Test: PASS**

The fixed-time traffic signal hardware operates correctly using the Arduino Uno and MCP23017 I/O expander.

## Notes

The system has not yet been connected to the Python controller. Python-based control will be tested separately.
