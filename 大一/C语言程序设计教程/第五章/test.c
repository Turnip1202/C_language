#include "stdio.h"
int main()
{
  int x, i;
  scanf("%d", &x);
  for (i = 2; i < x; i++)
  {
    if (x % i == 0)
      printf("不是素数\n");
  }
}