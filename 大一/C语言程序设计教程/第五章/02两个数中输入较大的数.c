#include "test.h"
int main()
{
  int a, b, max;
  printf("Please input two numbers!\n");
  scanf("%d%d", &a, &b);
  if (a < b)
    max = b;
  else
    max = a;
  printf("big number is %d\n", max);
  system("pause");
  return 0;
}