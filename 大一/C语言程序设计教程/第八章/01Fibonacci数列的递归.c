#include "test.h"
int f(int n)
{
  if (n == 1 || n == 2)
    return 1;
  else
    return (f(n - 2) + f(n - 1));
}
int main()
{
  int num;
  printf("请输入一个整数:\n");
  scanf("%d", num);
  for (int i = 1; i <= num; i++)
  {
    printf("%-6d", f(i));
    if (i % 4 == 0)
      printf("\n");
  }
  system("pause");
  return 0;
}