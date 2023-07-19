#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a;
  float b;
  double c, e;
  int d;
  a = 1;
  b = 2.1;
  c = 3.2;
  d = a + b + c; //将结果赋值给整型变量d
  e = a + b + c; //将结果赋值给双精度型变量e
  printf("d = %d, e = %f\n", d, e);
  system("pause");
  return 0;
}