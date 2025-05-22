# 💣 BSOD & Fork Bomb Payload via ATtiny85

A proof-of-concept USB HID attack device using the ATtiny85 (Digispark) that demonstrates two potential payloads:

<p align="center">
<img src="https://i.ibb.co/jZ2wvX0/NEWEV-AT.png" width="172" height="123">
</p>

1. **Triggering a Blue Screen of Death (BSOD)** using Windows commands
2. **Launching a Fork Bomb** to crash or freeze the target system by exhausting system resources

> ⚠️ **WARNING: This project is highly destructive. Use only in isolated test environments with full authorization. Misuse of this tool can result in data loss, hardware damage, or legal consequences.**

---

## 🔧 Features

* Emulates a USB keyboard via Digispark/ATtiny85
* Executes a pre-programmed HID script that:

  * Triggers a BSOD using Windows crash command
  * OR spawns an infinite loop of processes (Fork Bomb)
* Minimal form factor, requires no installation on host

---

## 🛠️ Hardware Requirements

* [Digispark ATtiny85 USB Board](https://digistump.com/products/1)
* Windows machine (testing only on local VMs or approved sandboxes)

---

## ⚙️ Software Setup

1. **Install Arduino IDE**:
   [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software)

2. **Install Digistump Board Support**:

   * Arduino IDE → `File > Preferences`
   * Add to "Board Manager URLs":

     ```
     http://digistump.com/package_digistump_index.json
     ```
   * Then open `Tools > Board > Boards Manager` and install **Digistump AVR Boards**

3. **Install Digispark Drivers**:
   [Download from GitHub](https://github.com/digistump/DigistumpArduino/releases)

---

## 💻 Payload 1: BSOD Trigger

This script triggers a manual crash using the Windows “NotMyFault” tool or via keyboard shortcut if crash-on-ctrl-scroll is enabled.

> 💡 **Alternative**: You can also trigger BSOD via a tool like SysInternals’ `NotMyFault.exe` or enabling Ctrl+Scroll crash in registry.

---

## 🌀 Payload 2: Fork Bomb

Spams new `cmd.exe` instances in a recursive loop:

> 💀 **Impact**: This will quickly freeze the system by spawning infinite command prompt windows.

---

## ⚠️ DISCLAIMER

This repository is intended **only** for:

* Security research
* Red Team simulations
* Malware analysis labs
* Ethical hacking education

Do not deploy these payloads on any system you do not explicitly own or control with permission. Doing so may violate the [Computer Fraud and Abuse Act](https://www.law.cornell.edu/uscode/text/18/1030) or equivalent laws in your jurisdiction.

---

## 🧪 Testing

Use in:

* Virtual Machines
* Controlled lab environments
* Malware sandboxes (e.g., Cuckoo, Any.Run)

Do **not** use on personal, school, or corporate devices.
