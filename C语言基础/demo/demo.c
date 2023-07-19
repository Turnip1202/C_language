#include "stdio.h"
#include "stdlib.h"
int main()
{
  int *p = NULL;
  scanf("%x", &p);
  *p = 20;
  printf("success");
  system("pause");
  return 0;
}