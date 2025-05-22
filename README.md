# 🔐 ATtiny85 Payload

A curated repository of **HID payloads for ATtiny85-based USB devices** (e.g., Digispark) — built for **ethical hacking**, **red teaming**, **CTF training**, and **educational demonstrations**.

<p align="center">
<img src="https://i.ibb.co/jZ2wvX0/NEWEV-AT.png" width="172" height="123">
</p>

> ⚠️ **Disclaimer:** This repository is intended **strictly for educational and authorized security research purposes only**. Do not use any content from this repo against systems or devices without **explicit permission**. Misuse may lead to legal consequences.

---

## 📦 About This Repo

This repository provides a library of **ready-to-upload payloads** for ATtiny85 devices that emulate USB keyboards. Payloads are written in **Arduino C++** using the [DigiKeyboard library](https://github.com/digistump/DigistumpArduino), enabling fast and stealthy script execution on target machines.

---

## 🛠️ Requirements

* 🔌 [Digispark USB ATtiny85](https://www.digistump.com/products/1)
* 💻 Arduino IDE (or PlatformIO)
* 🔧 DigiStump AVR Boards & Drivers
* 🔒 Testing environment (VMs recommended)

---

## 📚 Usage

1. Open Arduino IDE
2. Install Digistump AVR Boards
3. Plug in your ATtiny85 when prompted
4. Load any `.ino` payload
5. Upload & test in a safe environment (VM recommended)

---

## 🧠 Contributing

Pull requests welcome! If you'd like to contribute:

* Fork the repo
* Add your payload to the appropriate folder
* Include a comment header with description & OS
* Submit a PR with clear commit message

---

## 🛡️ Responsible Usage

Please:

* Use only on systems you own or have explicit permission to test
* Avoid uploading harmful or destructive payloads
* Always disclose usage to stakeholders

---

## 📎 Related Tools

* [Digistump Arduino](https://github.com/digistump/DigistumpArduino)
* [Rubber Ducky Payloads](https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Payloads)
* [Micronucleus Bootloader](https://github.com/micronucleus/micronucleus
