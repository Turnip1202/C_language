#include <stdio.h>
#include "stdlib.h"

int main()
{
  int i, j;
  int max, row, colum;
  //定义矩阵
  int a[3][4] = {{1, 2, 3, 4}, {9, 8, 7, 6}, {-10, 10, -5, 2}};
  max = a[0][0];
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++)
      if (max < a[i][j])
      {
        max = a[i][j];
        row = i;
        colum = j;
      }
  printf("max=%d row=%d colum=%d\n", max, row, colum);
  system("pause");
  return 0;
}