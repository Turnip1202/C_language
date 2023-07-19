#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int titleText = 0;
  int singleText = 1;
  int doubleText = 2;
  int demoText = 3;
  int x = 80;
  int font = 30;
  setGameSize(300, 300);
  createImage(0, "����Ӣ����������.png");
  createText(titleText, "����Ӣ��");
  setTextPosition(titleText, x, 260);
  setTextFontSize(titleText, 40);
  createText(singleText, "1 ������Ϸ");
  setTextPosition(singleText, x, 200);
  setTextFontSize(singleText, font);
  createText(doubleText,"2 ������Ϸ");
  setTextPosition(doubleText, x, 160);
  setTextFontSize(doubleText, font);
  createText(demoText, "3 ��Ϸ��ʾ");
    setTextPosition(demoText, x, 120);
    setTextFontSize(demoText, font);
    pauseGame(10000);


}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
