#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int num = 0;
  int gender = 0;
  setGameSize(300, 300);
  createImage(num, (gender == 0 ? "1.png" : "0.png"));
  setImagePosition(num, 50, 50);
  pauseGame(10000);
}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
