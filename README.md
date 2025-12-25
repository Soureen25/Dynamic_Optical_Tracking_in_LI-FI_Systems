# Intermidiate Prototype Implementing Dynamic Optical Tracking in LI-FI Systems

##  Introduction
Light Fidelity (Li-Fi) is an emerging wireless communication technology that uses visible light instead of radio frequency waves for data transmission. While Li-Fi offers ultra-high data rates, improved security, and immunity to electromagnetic interference, conventional Li-Fi systems require strict line-of-sight alignment between the transmitter and receiver.

This project implements a **Dynamic Optical Tracking Li-Fi System** that automatically aligns the transmitter with the receiver in real time. By integrating optical sensors, a microcontroller, and servo-based motion control, the system maintains uninterrupted optical communication even when the receiver is in motion.

---

##  Project Objectives
- Design a smart Li-Fi prototype with automatic alignment.
- Track receiver movement using light intensity feedback.
- Maintain continuous communication without manual adjustment.
- Develop a low-cost, Arduino-based dynamic tracking system.

---

##  Key Features
- Real-time optical signal tracking using multiple LDR sensors.
- Automatic servo-controlled transmitter alignment.
- Continuous and stable Li-Fi communication.
- Smooth motion with reduced jitter.
- Simple, affordable, and scalable design.

---

##  System Overview
The system operates through a closed-loop feedback mechanism involving four major processes:

1. **Transmission** – LED transmits data using intensity-modulated light.
2. **Reception** – LDRs convert optical signals into electrical signals.
3. **Tracking** – Servo motor adjusts transmitter direction.
4. **Decoding** – Arduino processes data and controls alignment.

---

##  Hardware Components Used
| Component | Description |
|--------|------------|
| Arduino Uno R3 | Central microcontroller for processing and control |
| LED | Li-Fi transmitter |
| LDR (4×) | Optical receivers for intensity detection |
| Servo Motor | Dynamic alignment of transmitter |
| 10 kΩ Resistors | LDR voltage divider circuits |
| 220 Ω Resistor | LED current limiting |
| 1 kΩ Resistor | Servo motor protection |
| Breadboard | Circuit prototyping |
| Jumper Wires | Electrical connections |
| 9V DC Power Supply | Servo motor power |

---

##  Software & Tools Used
- **Arduino IDE** – Programming and uploading code to Arduino  
- **Arduino Servo Library** – Precise servo motor control  
- **TinkerCAD Circuits** – Circuit simulation and testing  
- **Serial Monitor** – Real-time sensor data monitoring and debugging  

---

##  Working Principle
1. The LED emits modulated light carrying data.
2. LDR sensors detect variations in light intensity.
3. Arduino compares sensor readings to find the strongest signal.
4. Servo motor repositions the transmitter accordingly.
5. The process repeats continuously, maintaining alignment.

---

##  Simulation
The complete circuit and code were tested using **TinkerCAD Circuits**, ensuring correct logic flow, stable servo movement, and reliable sensor readings before hardware implementation.

---

##  Applications
- High-speed indoor wireless communication  
- Autonomous robots and drones  
- Smart lighting and adaptive illumination systems  
- Secure point-to-point optical links  
- Underwater optical data transmission  
- Interactive displays and exhibitions  

---

##  References
- Wikipedia – Li-Fi Technology  
- GeeksforGeeks – Introduction to Li-Fi  
- pureLiFi – About Li-Fi  
- Telecom Engineering Centre (TEC) – Li-Fi Study Paper  
- TinkerCAD – Circuit Simulation  
- OpenAI & Gemini – Diagrams and flowcharts  

---

##  Author
**Soureen Majumder**  
Instrumentation and Electronics Engineering Student  

---

##  Acknowledgements
Thanks to online technical communities and simulation tools that supported the development of this project.

---

##  License
This project is licensed under the **MIT License** – free to use, modify, and distribute with attribution.


https://www.tinkercad.com/things/gSSDZFEf3xi-li-fi-2/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard
<img width="1913" height="755" alt="image" src="https://github.com/user-attachments/assets/ca04d387-b950-41fc-8726-bad3e8a9c82b" />
