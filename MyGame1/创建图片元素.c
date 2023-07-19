#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  setGameSize(300, 300);
  createImage(0, "slice.png"); // �������Ϊ 0 ��ͼƬ
  setImagePosition(0, 100, 100); // ���� 0 ��ͼƬ��ʾλ��
  hideImage(0); // ���� 0 ��ͼƬ
  pauseGame(2000); // ��ͣ 1 ��
  showImage(0); // ��ʾ 0 ��ͼƬ
  pauseGame(10000);
}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
