#include "test.h"
void swap(int *p1, int *p2)
{
  int t;
  t = *p1;
  *p1 = *p2;
  *p2 = t;
}
int main()
{
  int i = 2, j = 3;
  printf("Before Swap:i = %d, j = %d\n", i, j);
  swap(&i, &j);
  printf("After Swap:i = %d, j = %d\n", i, j);
  return 0;
}
