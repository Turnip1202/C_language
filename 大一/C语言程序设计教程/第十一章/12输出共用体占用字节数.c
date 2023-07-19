#include "stdio.h"
union sample
{
  short s;
  char c;
  float f;
};
int main()
{
  int a;
  union sample ul = {2};
  a = sizeof(ul);
  printf("联合体占用字节数为：%d", a);
  return 0;
}
