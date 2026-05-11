````markdown
# Parking Sensor System Simulation

A simple C++ project that simulates a car parking sensor system using the concept of an ultrasonic sensor (HC-SR04) and buzzer alerts.

The system detects the distance between a vehicle and an obstacle, then changes the buzzer beep speed depending on how close the object is.

---

# Features

- Simulates ultrasonic distance sensing
- Dynamic buzzer alert system
- Faster beeping as distance decreases
- Safe, Warning, and Danger zones
- Continuous monitoring loop
- Stop the program using `stop` command

---

# Technologies Used

- C++
- Standard Library
  - `<iostream>`
  - `<thread>`
  - `<chrono>`
  - `<string>`

---

# Project Structure

```text
ParkingSensor/
│
├── parking_sensor.cpp
└── README.md
````

---

# How It Works

The system simulates the behavior of an HC-SR04 ultrasonic sensor.

1. User enters distance value
2. Program checks obstacle distance
3. Buzzer response changes based on distance

Distance calculation concept:

[
\text{Distance} =
\frac{\text{Speed of Sound} \times \text{Time}}{2}
]

---

# Distance Zones

| Distance Range | Status        | Buzzer Speed |
| -------------- | ------------- | ------------ |
| > 100 cm       | Safe          | OFF          |
| 50 – 100 cm    | Nearby Object | Slow         |
| 20 – 50 cm     | Warning       | Medium       |
| < 20 cm        | STOP          | Very Fast    |

---

# Compilation

## Linux / macOS

```bash
g++ parking_sensor.cpp -o parking_sensor
./parking_sensor
```

## Windows (MinGW)

```bash
g++ parking_sensor.cpp -o parking_sensor.exe
parking_sensor.exe
```

---

# Usage

Run the program and enter distance values in centimeters.

Example:

```text
Enter distance: 80
Status: Object Nearby
BEEP!

Enter distance: 25
Status: Warning! Getting Close
BEEP!

Enter distance: stop
System Stopped Successfully.
```

---

# Future Improvements

* Real HC-SR04 sensor integration
* Arduino implementation
* LED indicators
* LCD/OLED display support
* ESP32/STM32 support
* Bluetooth monitoring
* Real-time obstacle visualization

---

# Applications

* Car parking assistance systems
* Robotics obstacle detection
* Smart vehicle systems
* Embedded systems learning projects
* Sensor simulation projects

---

# Author

Developed as a C++ Embedded Systems Simulation Project.

```
```