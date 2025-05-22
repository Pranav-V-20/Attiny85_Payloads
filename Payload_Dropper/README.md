# 🔐 ATtiny85 Payload Dropper

<p align="center">
<img src="https://i.ibb.co/jZ2wvX0/NEWEV-AT.png" width="172" height="123">
</p>

**Educational Payload Dropper using ATtiny85 Microcontroller**

## ⚠️ Disclaimer

> This project is intended **strictly for educational and ethical research purposes only**. Unauthorized use of this tool against systems without explicit permission is illegal and unethical. The developer assumes **no responsibility** for any misuse.

---

## 🧠 Overview

The **ATtiny85 Payload Dropper** is a compact and low-cost device capable of emulating a USB HID keyboard to drop payloads onto a target machine. It is designed for red teaming, penetration testing, or training environments where physical access is part of the threat model.

Inspired by devices like Rubber Ducky or Digispark, this tool provides a minimal footprint option to deploy pre-defined payloads.

---

## 🛠 Features

* ✅ HID Keyboard Emulation
* ✅ Payload Injection (Pre-loaded scripts)
* ✅ Cross-platform (Tested on Windows/Linux)
* ✅ Tiny form-factor
* ✅ Plug-and-drop attack simulation

---

## 🔧 Requirements

* [ATtiny85 Board (e.g., Digispark clone)](https://www.digistump.com/products/1)
* Arduino IDE or PlatformIO
* Micro USB Cable
* [Micronucleus Bootloader](https://github.com/micronucleus/micronucleus)

---

## 📦 Installation & Setup

1. **Install Arduino IDE**

   * Download from [https://www.arduino.cc](https://www.arduino.cc)

2. **Add Digispark Board Support**

   * Open Arduino IDE → Preferences → Add board URL:

     ```
     http://digistump.com/package_digistump_index.json
     ```
   * Go to Tools → Board Manager → Install **Digistump AVR Boards**

3. **Connect ATtiny85**

   * Select board: `Digispark (Default - 16.5mhz)`
   * Connect ATtiny85 when prompted during upload.

4. **Upload Payload**

   * Open `Payload_Dropper.ino`
   * Customize the script payload as needed (e.g., launching cmd, reverse shell, etc.)
   * Upload to ATtiny85.


---

## 🛡️ Best Practices for Testing

* Always test in isolated virtual machines or lab environments.
* Do not deploy without explicit permission.
* Log your activities during demonstrations or CTFs.

---

## 📚 References

* [Digistump Wiki](http://digistump.com/wiki/start)
* [Micronucleus GitHub](https://github.com/micronucleus/micronucleus)
* [Rubber Ducky Payloads](https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Payloads)
