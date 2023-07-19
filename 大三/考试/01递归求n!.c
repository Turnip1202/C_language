#include <stdio.h>
#include "stdlib.h"
int main()
{
  int n;
  int y;
  printf("input a integer number:");
  scanf("%d", &n);
  y = fac(n);
  printf("%d!=%d\n", n, y);
  system("pause");
  return 0;
}
int fac(int n)
{
  int f;
  if (n < 0)
    printf("n<0,data error!");
  else if (n == 0 || n == 1)
    f = 1;
  else
    f = fac(n - 1) * n; // 递归调用
  return (f);
}
