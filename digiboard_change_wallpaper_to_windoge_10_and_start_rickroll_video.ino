#include "DigiKeyboard.h"
void setup() {
  // The following will change your wallpaper to doge theme or any link to image you put in 11h line
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client = new-object System.Net.WebClient;$client.DownloadFile(\"https://i.imgur.com/0sFg0CS.jpg\" , \"doge.jpg\");reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /d \"%USERPROFILE%\\doge.jpg\" /f;RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True;exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // ----------------------------------------end---------------------------------------------
  // The following will open the youtube video link on line 17th in fullscreen on default browser
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(50);
  DigiKeyboard.print("https://www.youtube.com/watch?v=a3Z7zEc7AXQ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_F);
  // ----------------------------------------end---------------------------------------------
}
void loop() {
  // You can run the upper scipt here and then it will have the same exact effect but the scipt will run again and again untill you unplug the board.
  //empty
}
