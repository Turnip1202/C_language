#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>

#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int key = 0;
  setGameSize(300, 300);
  while (1) {
    key = getPressedKeyCode();
    if (RP_KEY_UP == key)
      printf("�ϼ� %d\n", key);
    else if(RP_KEY_DOWN==key)
      printf("�¼� %d\n", key);
    else if(RP_KEY_LEFT==key)
      printf("��� %d\n", key);
    else if (RP_KEY_RIGHT == key)
      printf("�Ҽ� %d\n", key);
    pauseGame(100);
  }

}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
