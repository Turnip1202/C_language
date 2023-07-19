#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  setGameSize(300, 300);
  createImage(0, "slice.png"); // ¥¥Ω®±‡∫≈Œ™ 0 µƒÕº∆¨
  setImagePosition(0, 100, 100); // …Ë÷√ 0 ∫≈Õº∆¨œ‘ æŒª÷√
  hideImage(0); // “˛≤ÿ 0 ∫≈Õº∆¨
  pauseGame(2000); // ‘›Õ£ 1 √Î
  showImage(0); // œ‘ æ 0 ∫≈Õº∆¨
  pauseGame(10000);
}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
