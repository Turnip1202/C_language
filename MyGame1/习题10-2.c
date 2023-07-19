#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int spriteX = 0;
  int boyWidth = 0;
  setGameSize(300, 300);
  createSprite(0, "boy");
  setSpritePosition(0, 0, 100);
  playSpriteAnimate(0, "walk");
  while (1)
  {
    boyWidth = getSpriteWidth(0);
    setSpriteFlipX(0, TRUE);
    for (spriteX = 0; spriteX < 300 - boyWidth; ++spriteX) {
      setSpritePosition(0, spriteX, 100);
      pauseGame(10);
    }
    setSpriteFlipX(0, FALSE);
    for (spriteX = 300 - boyWidth; spriteX > boyWidth; --spriteX) {
      setSpritePosition(0, spriteX, 100);
      pauseGame(10);
    }

  }

}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
