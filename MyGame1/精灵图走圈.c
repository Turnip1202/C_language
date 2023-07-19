
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
    //����������е�����������
    setSpritePosition(boyNum, x, y);
    pauseGame(10);//ÿ���ƶ�ͣ��10ms
  };
  setSpriteFlipX(boyNum, TRUE);//��ת����
  //������
  for (x = 0; x + getSpriteWidth(boyNum) < gameWidth; ++x) {
    setSpritePosition(boyNum, x, y);
    pauseGame(10);
  }
  //������
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
