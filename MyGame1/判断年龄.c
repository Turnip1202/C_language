#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int textNum = 0;//�ı����
  int age = 20;//�����ʼֵ
  setGameSize(200, 200);
  //if (age > 18) createText(textNum, "������");
  //else createText(textNum, "С����");
  createText(textNum, age > 18 ? "������" : "δ������");
  setTextPosition(textNum, 100, 100);
  pauseGame(10000);
}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
