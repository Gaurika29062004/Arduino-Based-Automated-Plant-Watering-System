# 🌿 Arduino-Based Automated Plant Watering System

This project involves building an Arduino-powered system that automatically waters plants based on soil moisture levels.

---

## 📘 Project Title
**Arduino-Based Automated Plant Watering System**

---

## 🎯 Aim
To design an Arduino-based automated watering system and water level indicator that optimizes plant care through automation.

---

## 🔧 Components Used
- Arduino UNO
- Soil Moisture Sensor
- Relay Module
- LCD Screen (16x2) + I2C Module
- Buzzer
- Water Pump
- Jumper Wires
- Breadboard
- Battery (9V)
- Micro USB Type-B

---

## 🖥️ Software Used
- Arduino IDE

---

## ⚙️ Functionality
- Monitors soil moisture using a sensor.
- Automatically activates pump and buzzer when soil is dry.
- Displays real-time moisture level on LCD.
- Stops watering when soil is sufficiently humid or wet.

---

## 🧠 How It Works
- The soil moisture sensor reads analog values.
- Values above 920 indicate dryness → activates pump + buzzer.
- Values between 450 and 920 indicate humidity → turns off pump.
- Below 450 → moisture is sufficient.

---

## 🔌 Circuit and Wiring
- The I2C module is connected to the LCD to reduce wiring.
- Relay is connected to Arduino digital pin 7.
- Buzzer is connected to pin 8.
- Moisture sensor is connected to analog pin A0.

See detailed diagrams and wiring in the report.

---

## 📄 Code Used
See [`automated_watering_system.ino`](automated_watering_system.ino) for complete code.

---

## 📝 Report Highlights
- Overview of all components including breadboard, Arduino, relay, LCD, I2C, soil moisture sensor, and pump.
- Circuit diagrams and block diagrams included.
- Gantt chart to demonstrate time management.
- Working demonstration with live readings and pump response.

---

## 📌 Conclusion
The project was successfully implemented. It detects soil moisture, waters plants accordingly, and alerts users when action is required. Future upgrades can include IoT integration for remote monitoring and notifications.

