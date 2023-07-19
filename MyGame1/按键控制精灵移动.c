#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int boyNum = 0;
  int x = 100;
  int y = 100;
  int key = 0;
  setGameSize(300,300);
  createSprite(boyNum, "boy");
  playSpriteAnimate(boyNum, "walk");
  setSpritePosition(boyNum, x, y);
  while (1) {
    key = getPressedKeyCode();
    if (RP_KEY_UP == key) {
      ++y;
      setSpritePosition(boyNum,x,y);
    }
    else if (RP_KEY_DOWN == key) {
      --y;
      setSpritePosition(boyNum, x, y);
    }
    else if (RP_KEY_LEFT == key) {
      --x;
      setSpriteFlipX(boyNum, FALSE);
      setSpritePosition(boyNum, x, y);
    }
    else if (RP_KEY_RIGHT == key) {
      ++x;
      setSpriteFlipX(boyNum, TRUE);
      setSpritePosition(boyNum, x, y);
    }
    pauseGame(10);
  }
}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
