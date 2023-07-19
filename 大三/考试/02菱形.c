#include <stdio.h>
#include "stdlib.h"
int main()
{
  //定义菱形矩阵
  char diamond[][5] = {{' ', ' ', '*'},
   {' ', '*', ' ', '*'},
    {'*', ' ', ' ', ' ', '*'},
     {' ', '*', ' ', '*'}, 
     {' ', ' ', '*'}};
  int i, j;
  //遍历矩阵
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
      printf("%c", diamond[i][j]);
    printf("\n");
  }
  system("pause");
  return 0;
}