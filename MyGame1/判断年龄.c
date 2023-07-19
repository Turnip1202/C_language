#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int textNum = 0;//文本编号
  int age = 20;//年龄初始值
  setGameSize(200, 200);
  //if (age > 18) createText(textNum, "成年人");
  //else createText(textNum, "小朋友");
  createText(textNum, age > 18 ? "成年人" : "未成年人");
  setTextPosition(textNum, 100, 100);
  pauseGame(10000);
}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
