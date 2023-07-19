
#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int x = 0, y = 0;
  int boyNum = 0;
  int gameHeight = 300, gameWidth = 300;
  setGameSize(gameHeight, gameWidth);
  createSprite(boyNum, "boy");
  playSpriteAnimate(boyNum, "walk");
  for (y = 0; y + getSpriteHeight(boyNum) < gameHeight; ++y) {
    //对纵坐标进行迭代，向上走
    setSpritePosition(boyNum, x, y);
    pauseGame(10);//每次移动停留10ms
  };
  setSpriteFlipX(boyNum, TRUE);//反转人物
  //向右走
  for (x = 0; x + getSpriteWidth(boyNum) < gameWidth; ++x) {
    setSpritePosition(boyNum, x, y);
    pauseGame(10);
  }
  //向下走
  for (; y > 0; --y) {
    setSpritePosition(boyNum, x, y);
    pauseGame(10);
  }
  setSpriteFlipX(boyNum, FALSE);
  for (; x > 0; --x) {
    setSpritePosition(boyNum, x, y);
    pauseGame(10);
  }
  pauseGame(5000);


}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
