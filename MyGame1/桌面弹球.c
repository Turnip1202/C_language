#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int ballNum = 0;
  int x = 100, y = 50;
  //µ¯ÉäÏòÁ¿
  int vx = -2;
  int vy = 2;
  int gameWidth = 400, gameHeight = 200;
  setGameSize(gameWidth, gameHeight);
  createSprite(ballNum, "ball1");
  playSpriteAnimate(ballNum, "rotate");
  while (1) {
    if (x + getSpriteWidth(ballNum) >= gameWidth)
      vx = -vx;
    else if (x <= 0)
      vx = -vx;
    else if (y + getSpriteHeight(ballNum) >= gameHeight)
      vy = -vy;
    else if (y <= 0)
      vy = -vy;
    x += vx;
    y += vy;
    setSpritePosition(ballNum, x, y);
    pauseGame(10);
  }
}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
