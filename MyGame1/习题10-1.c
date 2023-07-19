#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int x = 0;
  int y = 0;
  int i = 0;
  setGameSize(300, 300);
  createText(0, "Turnip");
  for (i = 0; i < 300; i++) {
    setTextPosition(0, x, y);
    ++x; ++y;
    pauseGame(200);
  }

}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
