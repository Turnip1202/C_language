#include "stdio.h"
int t()
{
  printf("t\n");
}
int g()
{
  printf("g\n");
  t();
}
int f()
{
  printf("f\n");
  g();
}

int main()
{
  f();
}