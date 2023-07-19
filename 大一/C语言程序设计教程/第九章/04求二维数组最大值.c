#include "test.h"
int main()
{
  int a[4][3] = {{2, 12, 4}, {55, 7, 98}, {10, 36, 6}, {78, 42, 1}};
  int *p = a[0];
  int max = *p;
  while (p < a[0] + 12)
  {
    if (*p > max)
      max = *p;
    p++;
  }
  printf("MAX = %d\n", max);
  return 0;
}