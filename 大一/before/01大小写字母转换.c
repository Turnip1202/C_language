#include "stdio.h"
int main()
{
  char a, b;
  a = getchar();
  b = a - 32;
  putchar(b);
  putchar("/n");
  return 0;
}