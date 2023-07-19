
#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int spriteNum = 0;
  setGameSize(200, 200);
  createSprite(spriteNum, "boy");
  setSpritePosition(spriteNum, 100, 100);
  playSpriteAnimate(spriteNum, "walk");
  pauseGame(3000);
  playSpriteAnimate(spriteNum, "jump");
  pauseGame(3000);
  playSpriteAnimate(spriteNum, "fly");
  pauseGame(10000);
}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
