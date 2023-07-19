#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>
#include "time.h"
#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int coinNums[] = { 1,2,3,4,5,6,7,8 };
  int coinXs[8] = { 0 }; // ��ս�� x ��������
  int coinYs[8] = { 0 }; // ��ս�� y ��������
  int bombNums[] = { 9,10,11,12,13 };
  int bombXs[] = { 299,17,118,181,50 };
  int bombYs[] = { 110,200,155,340,299 };
  int imageNum = 0;
  int marioNum = 0;
  int i;
  int key = 0;
  int size = sizeof(coinNums) / sizeof(int);
  int bombSize = sizeof(bombNums) / sizeof(int);
  int marioX = 0;
  int marioY = 0;
  int scoreCoinNum = 1;
  int scoreTxt = 0;
  int count = 0;
  setGameSize(400, 400);
  createImage(imageNum, "��Ƭ�ݵ�.png");
  createSprite(marioNum, "mario");
  playSpriteAnimate(marioNum, "walk");
  setSpriteFlipX(marioNum, TRUE);
  createImage(scoreCoinNum, "bigcoin.png");
  setImagePosition(scoreCoinNum, 330, 370);
  createText(scoreTxt, "X0");
  setTextPosition(scoreTxt, 360, 370);
  setTextFontSize(scoreTxt, 40);
  srand(time(0)); // ����ʱ������
  for (i = 0; i < size; i++)
  {
    coinXs[i] = rand() * 400 / RAND_MAX; // ���ɽ�� x ����
    coinYs[i] = rand() * 360 / RAND_MAX; // ���ɽ�� y ����
  }
  for (i = 0; i < size; i++)
  {
    int coinNum = coinNums[i];
    int coinX = coinXs[i];
    int coinY = coinYs[i];
    createSprite(coinNum, "coin");
    playSpriteAnimate(coinNum, "rotate");
    setSpritePosition(coinNum, coinX, coinY);
  }
  for (i = 0; i < bombSize; i++)
  {
    int bombNum = bombNums[i];
    int bombX = bombXs[i];
    int bombY = bombYs[i];
    createSprite(bombNum, "bomb");
    playSpriteAnimate(bombNum, "laser");
    setSpritePosition(bombNum, bombX, bombY);
  }
  while (1)
  {
    key = getPressedKeyCode();
    if (RP_KEY_UP == key)
    {
      marioY++; //y ����� 1
    }
    else if (RP_KEY_DOWN == key)
    {
      marioY--; //y ����� 1
    }
    else if (RP_KEY_LEFT == key)
    {
      marioX--; //x ����� 1
      setSpriteFlipX(marioNum, FALSE);
    }
    else if (RP_KEY_RIGHT == key)
    {
      marioX++; //x ����� 1
      setSpriteFlipX(marioNum, TRUE);
    }
    setSpritePosition(marioNum, marioX, marioY);
    for (i = 0; i < size; i++)
    {
      int coinNum = coinNums[i];
      int coinX = coinXs[i];
      int coinY = coinYs[i];
      int dist = (coinX - marioX) * (coinX - marioX) + (coinY - marioY) * (coinY - marioY);
      if (dist < 100 && isSpriteVisible(coinNum))
      {
        char text[10] = { 0 };
        count++;
        sprintf(text, "X%d", count);
        setText(scoreTxt, text);
        hideSprite(coinNum);
      }
    }
    for (i = 0; i < bombSize; i++)
    {
      int bombX = bombXs[i];
      int bombY = bombYs[i];
      int dist = (bombX - marioX) * (bombX - marioX) + (bombY - marioY) * (bombY - marioY);
      if (dist < 100) // �ж� dist �Ƿ�С�� 100
      {
        exit(0); // ������Ϸ
      }
    }
    pauseGame(10);
  }

}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
