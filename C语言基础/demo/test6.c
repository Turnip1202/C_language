#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a = 2;
  float b = 2.78, c = 5.2456;
  a = 2 + (int)c;
  b = (int)(1.56 + a);
  printf("a = %d, b = %f,c = %f\n", a, b, c);
  system("pause");
  return 0;
}