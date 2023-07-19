
#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int spriteHeight = 0;//���澫��ͼ�ĸ߶�
  int spriteWidth = 0;//���澫��ͼ�Ŀ��
  setGameSize(300, 300);
  createSprite(0, "boy");
  playSpriteAnimate(0, "walk");
  setSpritePosition(0, 100, 100);//���þ���ͼ��ʾλ��
  pauseGame(3000);
  hideSprite(0);
  pauseGame(3000);
  showSprite(0);
  pauseGame(3000);
  setSpriteFlipX(0, TRUE);
  pauseGame(3000);
  setSpriteFlipY(0, TRUE);
  spriteHeight = getSpriteHeight(0);
  printf("%d\n", spriteHeight);
  spriteWidth = getSpriteWidth(0);
  printf("%d", spriteWidth);

  pauseGame(100000);
} 

int main(void)
{
  rpInit(gameMain);
  return 0;
}
