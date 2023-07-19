#include "test.h"
int main()
{
  int *p,
      a[][2] = {{1, 2},
                {3, 4},
                {5, 6}};
  p = a;
  printf("%d\n", &(*(p + 1)));
  printf("%d\n", a[1]);
  printf("%d\n", &a == a[0]);
  printf("%d\n", (((&a[0]))));
  printf("%d\n", (*((a[0]))));
  printf("%d\n", (*(*((a)))));
  printf("%d\n", (*(*(&a[0]))));
  printf("%d\n", (*(*(*(&a)))));
  return 0;
}