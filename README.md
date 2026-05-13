# Alcohol-Sensing-Engine-locking-system
IoT-based alcohol detection system that automatically locks engine using Arduino Uno and MQ-3 sensor
## Problem Statement
Drunk driving is a leading cause of road accidents. 
This system detects alcohol and automatically locks 
the engine to prevent the vehicle from starting.

## Components Used
- Arduino Uno
- MQ-3 Alcohol Sensor
- Relay Module
- BO Motor (simulates engine)
- LED Indicator
- Buzzer
- 9V Battery
- Breadboard & Jump Wires

## How It Works
1. MQ-3 sensor continuously reads alcohol levels
2. If value exceeds threshold (400), engine locks
3. LED and buzzer activate as alerts
4. When alcohol clears, engine unlocks automatically
