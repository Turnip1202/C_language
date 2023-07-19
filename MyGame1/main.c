#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain1(void)
{
  setGameSize(300, 300);
  createSprite(0, "boy");
  playSpriteAnimate(0, "walk");
  setSpritePosition(0, 100, 100);//设置精灵图显示位置
  pauseGame(3000);
  setSpriteFlipX(0, TRUE);
  pauseGame(3000);
  setSpriteFlipY(0, TRUE);
  pauseGame(100000);
}

int main1(void)
{
  rpInit(gameMain1);
  return 0;
}
