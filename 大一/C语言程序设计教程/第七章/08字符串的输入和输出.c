#include "test.h"
int main()
{
  int strSP();
  strSP();
  int strGP();
  strGP();
  system("pause");
  return 0;
}
int strSP()
{
  char a[10];
  scanf("%s", a);
  printf("%s\n", a);
  return 0;
}
int strGP()
{
  char a[10];
  gets(a);
  puts(a);
  return 0;
}