#include "stdio.h"
#include "stdlib.h"
int main()
{
  int a = 10;
  printf("%x\n", &a);
  getchar();
  printf("%d\n", a);
  system("pause");
  return 0;
}