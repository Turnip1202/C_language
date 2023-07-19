#include <stdlib.h>
#include <stdio.h>
#include <yzkgame.h>
#include "time.h"
#pragma comment( linker, "/subsystem:\"console\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "YZKGame.lib")

void gameMain(void)
{
  int i;
  int num = 0;
  int n = 10;
  srand(time(0));//设置时间种子
  for (i = 0; i < 10; ++i) {
    num = rand()*n/RAND_MAX;
    printf("%d\n", num);
  }
  getchar();
}

int main(void)
{
  rpInit(gameMain);
  return 0;
}
