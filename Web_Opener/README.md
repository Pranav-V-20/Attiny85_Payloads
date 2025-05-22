# 🌐 Web Opener using ATtiny85

A simple USB HID device built with the ATtiny85 (Digispark) that emulates a keyboard and opens a web page automatically on a Windows system.

<p align="center">
<img src="https://i.ibb.co/jZ2wvX0/NEWEV-AT.png" width="172" height="123">
</p>

> ⚠️ **Disclaimer**: This project is intended for educational purposes only. Do not use this device on unauthorized machines.

---

## 📌 What It Does

When plugged into a Windows machine, this device:

* Emulates a USB keyboard
* Launches the Windows Run dialog (`Win + R`)
* Opens a specified browser (e.g., Chrome or Edge)
* Navigates to a pre-defined website

Perfect for kiosks, demos, pranks, or productivity shortcuts.

---

## 🧰 Hardware Required

* Digispark ATtiny85 USB Development Board
* USB port on a Windows computer

---

## 🧑‍💻 Software Required

* Arduino IDE
* Digistump AVR Board support
* Digispark USB drivers

---

## 🚀 Setup Instructions

1. **Install Arduino IDE**
   [Download Arduino IDE](https://www.arduino.cc/en/software)

2. **Configure Digispark Support**
   In the Arduino IDE:

   * Go to `File > Preferences`
   * Add the following URL to “Additional Board Manager URLs”:

     ```
     http://digistump.com/package_digistump_index.json
     ```
   * Open `Tools > Board > Boards Manager` and install **Digistump AVR Boards**

3. **Install Digispark Drivers**
   [Download Digispark Drivers](https://github.com/digistump/DigistumpArduino/releases)

4. **Upload the Code**

   * Open `web_opener.ino` in Arduino IDE
   * Go to `Tools > Board > Digispark (Default - 16.5MHz)`
   * Click “Upload”
   * **Plug in the Digispark** when prompted

---

## ⚙️ Example Code

Replace `"https://www.example.com"` with your target URL, and `chrome` with `start` if browser detection is needed.

---

## 🔄 Customization

* ✅ Change browser: Use `chrome`, `msedge`, or `start`
* 🌍 Change URL: Replace the site in the code
* ⏱️ Adjust timing: Increase `DigiKeyboard.delay()` if launch is unreliable

---

## ✅ Tested On

* Windows 10, 11 (x64)
* Digispark ATtiny85 clone

---

## ⚠️ Legal Notice

This project should only be used on devices you own or have explicit permission to test. Unauthorized use may violate computer security laws.

