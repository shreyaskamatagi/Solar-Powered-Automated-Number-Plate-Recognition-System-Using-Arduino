# Solar-Powered-Automated-Number-Plate-Recognition-System-Using-Arduino
This project presents a smart and eco-friendly system for **automatic license plate detection**, built using **Arduino MEGA** and powered by **solar energy**. Designed for remote areas with limited electricity access, it combines **real-time image capturing and processing** using a C++-based logic system on Arduino.

## Key Features

- Real-time license plate detection using camera module
- Sustainable energy solution via solar panel
- Arduino MEGA used for hardware integration and logic
- Image captured and processed with basic edge detection logic (C++) for number plate localization
- Output displayed/stored for vehicle identification

## Tech Stack

- **Arduino MEGA 2560**
- **C++(Arduino IDE)
- **Solar Panel + Battery 
- **USB Camera Module 
- **LCD/OLED Display (optional)**

## ⚙️ System Workflow

1. System is powered using a solar panel connected to a battery.
2. Camera captures an image when motion or a vehicle is detected (or at regular intervals).
3. C++ code on Arduino processes the image to identify a license plate area (e.g., via light/dark contrast).
4. Detected plate data (or image coordinates) are stored or displayed.
