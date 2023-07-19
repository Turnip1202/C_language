
#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  //定义时、分、秒和":"的编号
  int shiNum = 0;
  int num1 = 1;
  int fenNum = 2;
  int num2 = 3;
  int miaoNum = 4;
  int y = 100;
  //定义时、分、秒计数变量
  int min = 0;
  int sec=0;
  int hour;
  setGameSize(200, 200);
  createText(shiNum, "0");
  createText(num1, ":");
  createText(fenNum, "0");
  createText(num2, ":");
  createText(miaoNum, "0");
  //设置时、分、秒和":"文本位置
  setTextPosition(shiNum, 40, y);
  setTextPosition(num1, 60, y);
  setTextPosition(fenNum, 80, y);
  setTextPosition(num2, 100, y);
  setTextPosition(miaoNum, 120, y);
  for (hour = 0; hour < 24; ++hour) {
    char strHour[5] = { 0 };
    sprintf(strHour, "%02d", hour);
    setText(shiNum, strHour);
    for (min = 0; min < 60; ++min) {
      char strMin[5] = { 0 };
      sprintf(strMin, "%02d", min);
      setText(fenNum, strMin);
      for (sec = 0; sec < 60; ++sec) {
        char strSec[5] = { 0 };
        sprintf(strSec, "%02d", sec);
        setText(miaoNum, strSec);
        pauseGame(1000);
      }
    }
 }
  pauseGame(10000);//这个暂停，要到24小时之后了


}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
