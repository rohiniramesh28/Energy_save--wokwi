Energy Efficient Smart Home (PIR & LDR Integration)
This project uses an ESP32 and integrates a PIR sensor for motion detection and an LDR (Light Dependent Resistor) sensor to control lighting based on ambient light intensity. The system automatically turns on a light when motion is detected and the surrounding light level is below a threshold. This project demonstrates an energy-efficient smart home setup where the light is only active when needed, contributing to energy conservation.

Key Features:
PIR Sensor: Detects motion and triggers the light when motion is detected.

LDR Sensor: Measures ambient light intensity and determines whether it is dark enough to turn on the light.

ESP32: The central microcontroller that processes inputs from both sensors and controls the LED light.

Energy Efficiency: The light remains off when no motion is detected or when there is sufficient natural light.

Components Required:
ESP32 Development Boar

PIR Motion Sensor

LDR (Light Dependent Resistor)

10k Resistor (for LDR)

LED

Jumper wires and breadboard

How It Works:
The PIR sensor detects motion in the room.

The LDR sensor measures the light intensity.

If the PIR sensor detects motion and the LDR sensor reads a light intensity below a predefined threshold, the ESP32 turns on the LED light.

The system conserves energy by turning the light off when no motion is detected or when there is enough ambient light.

Installation:
Connect the components (PIR sensor, LDR, LED) to the ESP32 following the pin configuration in the code.

Upload the code to the ESP32 board using the Arduino IDE.

Monitor the Serial Output for debugging and to check sensor readings.

Code
The project utilizes the Arduino IDE to write and upload the code. The code reads the sensor values and controls the LED accordingly.

