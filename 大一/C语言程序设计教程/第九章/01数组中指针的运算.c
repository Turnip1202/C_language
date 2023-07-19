#include "test.h"
int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  int *p = a;
  printf("a is : %x, a + 1 is : %x \n", a, a + 1);
  printf("p is : %x, p + 1 is : %x \n", p, p + 1);
  printf("*a is : %d, *(a + 1) is : %d \n", *a, *(a + 1));
  printf("*p is : %d, *(p + 1) is : %d \n", *p, *(p + 1));
  return 0;
}