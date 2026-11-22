Hardware Inventory
This project currently uses the following two hardware components.
1. ESP32-S3 N16R8 Development Board
- Microcontroller: ESP32-S3
- Flash: 16 MB
- PSRAM: 8 MB
- Wireless connectivity: Wi-Fi and Bluetooth LE
- Project role: Main controller for RoboY
2. 1.54-inch IPS TFT LCD Display
- Module model: KMR0154PVGASP1-1
- Display type: Full-color IPS TFT LCD
- Display size: 1.54 inches
- Resolution: 240 × 240 pixels
- Display controller: Sitronix ST7789S
- Interface: 4-wire SPI
- Operating and logic voltage: 3.3 V
- Project role: Visual display for RoboY, including animated eyes
  and interface
Voltage note: The display uses 3.3 V logic. ESP32-S3 GPIOs are
also 3.3 V logic. Do not connect the display's logic pins to 5 V.

Current Hardware Setup
  Component            Model / Specification
  Development board    ESP32-S3 N16R8
TFT display          KMR0154PVGASP1-1
Display controller   ST7789S
Display resolution   240 × 240
Communication        SPI
Logic voltage        3.3 V