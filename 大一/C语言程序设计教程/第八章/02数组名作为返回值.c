#include "test.h"
int swap(int x[2])
{
  int t;
  t = x[0];
  x[0] = x[1];
  x[1] = t;
  printf("In function x[0] = %d, x[1] = %d\n", x[0], x[1]);
  return 0;
}
int main()
{
  int a[2] = {4, 9};
  printf("Before function a[0] = %d, a[1] = %d\n", a[0], a[1]);
  swap(a);
  printf("After function a[0] = %d, a[1] = %d\n", a[0], a[1]);
  return 0;
}