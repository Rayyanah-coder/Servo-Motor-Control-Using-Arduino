# Servo-Motor-Control-Using-Arduino
## 📌 Project Overview
This project simulates the control of **four servo motors** using an **Arduino Uno** inside **Tinkercad Circuits**. The servos are programmed to:
1. Perform a sweeping motion (0° to 180°) for **2 seconds**.
2. Then hold a fixed position at **90°** (centered angle).

This simulates basic coordinated movement in robotic applications like walking limbs or arm joints.

<img width="1920" height="1200" alt="Image" src="https://github.com/user-attachments/assets/1fc71ce0-9082-478a-b616-bbb24cd0f4e6" />

---

## 🧱 Components Used
- 1x Arduino Uno
- 4x Servo Motors
- Breadboard (optional for better wiring)
- Jumper wires

---

## 🔌 Circuit Design

### 🔋 Wiring:
Each servo has 3 connections:
- **GND** (black/brown) → Arduino GND
- **VCC** (red) → Arduino 5V
- **Signal** (yellow/orange) → Arduino digital pins

| Servo | Signal Pin | Power (VCC) | Ground (GND) |
|-------|-------------|-------------|--------------|
| Servo 1 | D9  | 5V | GND |
| Servo 2 | D10 | 5V | GND |
| Servo 3 | D11 | 5V | GND |
| Servo 4 | D12 | 5V | GND |

All four servos share the same **5V** and **GND** lines.


## 💻 Arduino Code Logic
look into file "ServoMotorControl.cpp"

## 🎯 Purpose
This task demonstrates:

Synchronous control of multiple servos

Use of millis() for timing

How to hold servo angles

Basic simulation of robotic movement (arms, legs, etc.)

## 🧠 Notes
Tinkercad uses virtual power, but in real life, external power is recommended for more than 2 servos.

You can expand this by adding more servos or changing motion patterns.


