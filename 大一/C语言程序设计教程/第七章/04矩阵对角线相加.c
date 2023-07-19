#include "test.h"
int main()
{
  int a[3][3];
  int i, j, sum, result1 = 0, result2 = 0;
  for (i = 0; i < 3; i++)
  {
    printf("Please enter a line:\n");
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
      if (i == j)
        result1 += a[i][j];
      if (i + j == 2 && i != j)
        result2 += a[i][j];
    }
  };
  sum = result1 + result2;
  printf("sum = %d\n", sum);
  system("pause");
  return 0;
}