#include "test.h"
int main()
{
  int a, b, c, max;
  printf("Please input three numbers:\n");
  scanf("%d,%d,%d", &a, &b, &c);
  if (a > b)
  {
    if (a > c)
      max = a;
    else
      max = c;
  }
  else
  {
    if (b > c)
      max = b;
    else
      max = c;
  }
  printf("max = %d\n", max);
  system("pause");
  return 0;
}