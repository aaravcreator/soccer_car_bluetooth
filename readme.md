# Arduino Bluetooth-Controlled Car

This is an Arduino-based Bluetooth-controlled car that can be operated using a mobile app. It supports forward, backward, left, right movements and includes an additional attack mechanism.

## Features
- Bluetooth control using **HC-05** module
- Motor control using **L298N Motor Driver**
- Attack mechanism toggled via Bluetooth
- Hardware Serial communication

## Components Required
- **Arduino Uno/Nano**
- **HC-05 Bluetooth Module**
- **L298N Motor Driver**
- **4 DC Motors & Wheels**
- **Battery Pack (9V or Li-ion)**
- **Jumper Wires**

## Wiring Diagram
### **L298N Motor Driver**
| L298N Pins | Arduino Pins |
|-----------|--------------|
| IN1       | 4            |
| IN2       | 5            |
| IN3       | 6            |
| IN4       | 7            |
| ENA       | Jumper Cap   |
| ENB       | Jumper Cap   |
| VCC       | Battery 12V  |
| GND       | Arduino GND  |

### **HC-05 Bluetooth Module**
| HC-05 Pins | Arduino Pins |
|-----------|--------------|
| VCC       | 5V           |
| GND       | GND          |
| TX        | RX (Pin 0)   |
| RX        | TX (Pin 1)   |

### **Attack Mechanism**
| Component | Arduino Pin |
|-----------|-------------|
| Attack Output | 10 |

## Bluetooth Commands
| Command | Action |
|---------|---------|
| F       | Move Forward |
| B       | Move Backward |
| L       | Turn Left |
| R       | Turn Right |
| S       | Stop |
| A       | Toggle Attack |

## Installation & Setup
1. Upload the Arduino code to your **Arduino Uno/Nano**.
2. Pair the **HC-05** module with your smartphone (**Default PIN: 1234 or 0000**).
3. Use a Bluetooth controller app (e.g., **Arduino Bluetooth Controller**) to send commands.
4. Control the car using the app and observe the attack mechanism toggle with the **'A'** command.

## Future Improvements
- **PWM Speed Control** for smoother movement
- **Ultrasonic Sensor** for obstacle detection
- **Mobile App UI** for better control

## License
This project is open-source and can be modified as needed. 🚀

---
### **Made with ❤️ using Arduino!**


