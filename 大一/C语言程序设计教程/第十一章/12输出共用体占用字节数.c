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
  printf("������ռ���ֽ���Ϊ��%d", a);
  return 0;
}
