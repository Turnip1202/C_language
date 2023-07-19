#include "test.h"
int main()
{
  int a[4][3] = {{2, 12, 4}, {55, 7, 98}, {10, 36, 6}, {78, 42, 1}};
  int max, i, j, row, col;
  int(*p)[3];
  p = a;
  max = a[0][0];
  row = col = 0;
  for (i = 0; i < 4; i++)
    for (j = 0; j < 3; j++)
      if (*(*(p + i) + j) > max)
      {
        max = *(*(p + i) + j);
        row = i;
        col = j;
      }
  printf("MAX = a[%d][%d] = %d\n", row, col, max);
}