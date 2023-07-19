
#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int spriteNum = 0;
  int x = 0; int y = 0;
  setGameSize(200, 200);
  createSprite(spriteNum, "boy");
  playSpriteAnimate(spriteNum, "walk");
  setSpritePosition(spriteNum, x, y);
  setSpriteFlipX(spriteNum, TRUE);
  for (int i = 0; i < 10; ++i) {
    x += 10;
    y += 10;
    setSpritePosition(spriteNum, x, y);
    pauseGame(1000);
  }
  pauseGame(10000);




}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
