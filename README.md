# Smart Farming Automation System

# Overview

This Arduino-based project automates a smart farming system by monitoring and controlling various environmental parameters such as soil moisture, light intensity, and temperature. The system uses sensors and relays to control a fan, LED, and buzzer, ensuring optimal conditions for plant growth.

# Features

  1. Soil Moisture Monitoring: Measures soil moisture levels and activates a relay for irrigation control.

  2. Light Intensity Detection: Reads light intensity using an LDR sensor and controls an LED accordingly.

  3. Temperature Monitoring: Uses a DHT11 sensor to monitor temperature and control a fan and buzzer when the temperature exceeds predefined thresholds.

  4. Relay Control: Automates switching of fan, light, and irrigation based on sensor readings.

# Components Used

  1. Arduino Board

  2. DHT11 Temperature and Humidity Sensor

  3. Soil Moisture Sensor

  4. LDR (Light Dependent Resistor) Sensor

  5. Relays (for fan, LED, and irrigation system)

  6. Buzzer

  7. LED

# Pin Configuration

# Component                Arduino Pin
                      
Fan Relay          :             A5

DHT11 Sensor         :           12

Soil Moisture Sensor     :       A0

LDR Sensor         :             A1


LED Indicator       :            13


Relay 1            :             10

Irrigation Relay         :       2

Buzzer              :            3


# Code Functionality

# 1. Initialization:

      * Sets up serial communication.

      * Initializes the DHT sensor.

      * Configures pin modes for inputs and outputs.

# 2. Loop Execution:

    * Reads soil moisture levels and activates irrigation accordingly.

    * Reads light intensity and turns the LED on or off.

    * Monitors temperature and controls the fan and buzzer.

# Temperature Thresholds

    *Upper Threshold: 25°C (Fan & Buzzer ON)

    *Lower Threshold: 20°C (Fan & Buzzer OFF)

# How to Use

    * Connect the components to the Arduino as per the pin configuration.

    * Upload the code to the Arduino board.

    * Monitor serial output for real-time sensor readings and relay activations.

    * Adjust threshold values in the code if needed.

# Future Enhancements

  1. Add humidity monitoring for better irrigation control.

  2. Integrate IoT for remote monitoring and control.

  3. Implement an LCD display for real-time data visualization.

# License

This project is open-source and free to use for educational and personal purposes.
