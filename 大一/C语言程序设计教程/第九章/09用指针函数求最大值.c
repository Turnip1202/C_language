#include "test.h"
int *max(int *x, int *y)
{
  int *p;
  p = *x > *y ? x : y;
  return p;
}
int main()
{
  int a, b, *pmax;
  printf("Please input a and b:");
  scanf("%d,%d", &a, &b);
  pmax = max(&a, &b);
  printf("max = %d\n", *pmax);
  return 0;
}