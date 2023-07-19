
#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int i;
  int txtNum = 0;
  setGameSize(200, 200);
  createText(txtNum, "10");
  setTextPosition(txtNum, 100, 100);
  for (i = 10; i >= 0; --i) {
    char str[10] = { 0 };
    sprintf(str, "%d", i);//将整形转换为字符串
    setText(txtNum, str);
    pauseGame(1000);

  }
  pauseGame(10000);

}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
