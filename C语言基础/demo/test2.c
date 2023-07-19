#include <stdio.h>
int main()
{
  int print();
  print();
  return 0;
}

//格式化输出
int print()
{
  int count = 4;
  for (int i = 0; i < count; i++)
  {
    for (int j = 0; j < i; j++)
      printf("  ");
    printf("****\n");
  }
  return 0;
}