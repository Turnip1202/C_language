#include "test.h"
int main()
{
  int max(int, int);
  int (*pf)(int, int);
  int a, b, c;
  pf = max;
  printf("Please input a and b:");
  scanf("%d,%d", &a, &b);
  c = (*pf)(a, b);
  printf("a = %d,b = %d, max = %d\n", a, b, c);
  return 0;
}
int max(int x, int y)
{
  return x > y ? x : y;
}