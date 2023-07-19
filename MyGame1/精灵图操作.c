#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  setGameSize(300, 300);
  createSprite(0, "boy");
  playSpriteAnimate(0, "walk");
  pauseGame(100000);
}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
