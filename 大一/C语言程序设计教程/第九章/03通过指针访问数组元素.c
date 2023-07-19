#include "test.h"
int main()
{
  int a[5], i, *p;
  int len = sizeof(a) / sizeof(a[0]);
  for (i = 0; i < len; i++)
    a[i] = i + 1;
  p = a;
  for (i = 0; i < len; i++)
    printf("*(p+%d) : %d\t", i, *(p + i));
  for (i = 0; i < len; i++)
    printf("*(a + %d) : %d\t", i, *(a + i));
  for (i = 0; i < len; i++)
    printf("p[%d]:%d\t", i, p[i]);
  for (i = 0; i < len; i++)
    printf("a[%d]:%d\t", i, a[i]);
  return 0;
}