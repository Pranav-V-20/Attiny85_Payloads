#include <DigiKeyboard.h>

void setup() {
  DigiKeyboard.sendKeyStroke(0); // Wake up the computer
  
  // Open Command Prompt
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Win + R
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // Type the commands to open the web page multiple times
  DigiKeyboard.print("start https://www.wikipedia.org/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // Do nothing here
}
