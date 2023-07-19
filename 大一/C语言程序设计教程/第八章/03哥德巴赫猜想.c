#include "test.h"
int prime(int i)
{
  int j;
  if (i <= 1)
    return 0;
  if (i == 2)
    return 1;
  for (j = 2; j < i; j++)
  {
    if (i % j == 0)
      return 0;
    else if (i != j + 1)
      continue;
    else
      return 1;
  }
}
int main()
{
  int i, j, k, flag1, flag2, n = 0;
  for (i = 6; i <= 50; i += 2)
  {
    for (k = 2; k <= i / 2; k++)
    {
      j = i - k;
      flag1 = prime(k);
      if (flag1)
      {
        flag2 = prime(j);
        if (flag2)
        {
          printf("%2d = %2d +%2d,", i, k, j);
          n++;
          if (n % 8 == 0)
          {
            printf("\n");
          }
        }
      }
    }
  }
  return 0;
}