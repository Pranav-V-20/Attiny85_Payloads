# 🪟 Windows Jammer using ATtiny85

A proof-of-concept USB device built with the ATtiny85 microcontroller that simulates keyboard inputs to "jam" or disrupt a Windows system by repeatedly sending keystrokes, opening and closing programs, or executing annoying macros.

<p align="center">
<img src="https://i.ibb.co/jZ2wvX0/NEWEV-AT.png" width="172" height="123">
</p>

> ⚠️ **Disclaimer**: This project is for educational and ethical research purposes only. Do not use this device to interfere with, damage, or access systems without proper authorization.

---

## 🔧 Features

* Emulates a USB keyboard (HID)
* Sends pre-programmed keystrokes to interfere with system usage
* Can open and close apps, spam hotkeys, or trigger scripts
* Stealthy and compact: powered by ATtiny85 and Digispark USB board

---

## 🧰 Hardware Requirements

* [Digispark ATtiny85 USB Development Board](https://digistump.com/products/1)
* USB port (Windows machine)
* Micro USB cable (for programming, if needed)

---

## 🧑‍💻 Software Requirements

* Arduino IDE
* Digispark drivers
* Digistump AVR Board package
* Windows 10 or 11 (tested)

---

## 🔌 Setup & Installation

1. **Install Arduino IDE**

   * [Download here](https://www.arduino.cc/en/software)

2. **Add Digistump Boards**

   * Go to `File > Preferences`
   * Add this to "Additional Board URLs":

     ```
     http://digistump.com/package_digistump_index.json
     ```
   * Then go to `Tools > Board > Boards Manager` and install **Digistump AVR Boards**

3. **Install Digispark Drivers**

   * Download and install from [Digistump Drivers](https://github.com/digistump/DigistumpArduino/releases)

4. **Load Code**

   * Open the `windows_jammer.ino` file
   * Set board to: `Tools > Board > Digispark (Default - 16.5mhz)`
   * Click Upload and **plug in the ATtiny85** when prompted

---

## ⚙️ How It Works

The ATtiny85 uses the Digispark's built-in USB emulation to act like a keyboard. It then sends disruptive input such as:

* `Win + R` to open Run dialog
* Opening Notepad and typing nonsense
* Pressing `Alt + F4` repeatedly
* Triggering system utilities or settings windows

## 🧪 Test Environments

Tested on:

* Windows 10 Pro (x64)
* Windows 11 Home
* ATtiny85 Digispark clone

---

## ❗ Warning & Legal

This project should **only** be used in test environments or with **explicit permission**. Using this tool maliciously could violate computer misuse laws.

---

## 🧠 Inspiration

Inspired by USB Rubber Ducky and HID attacks used in Red Team assessments.
