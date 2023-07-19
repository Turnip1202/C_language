
#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int txtNum = 0;
  int fontSize = 0;
  setGameSize(300, 300);
  createText(txtNum, "Turnip–°”Œœ∑");
  setTextPosition(txtNum, 100, 100);
  while (1)
  {
    for (fontSize = 20; fontSize < 40; ++fontSize) {
      setTextFontSize(txtNum, fontSize);
      pauseGame(1000);
    }
    for (fontSize = 40; fontSize > 20; --fontSize) {
      setTextFontSize(txtNum, fontSize);
      pauseGame(100);
    }

  }




}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
