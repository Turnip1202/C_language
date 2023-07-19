#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sushu();
  sushu();
  return 0;
}

//判断一个数是否为素数
int sushu()
{
  int item, i, a = 0;

  printf("请输入一个数：");
  scanf("%d", &item);
  if (item >= 3)
  {
    for (i = 2; i < item; i++)
      if (item % i == 0)
        a++;
    if (a == 0)
      printf("%d 是素数\n", item);

    else
      printf("%d 不是素数\n", item);
  }
  else
    return 0;

  system("pause");
  return 0;
}