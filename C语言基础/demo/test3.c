#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sushu();
  sushu();
  return 0;
}

//�ж�һ�����Ƿ�Ϊ����
int sushu()
{
  int item, i, a = 0;

  printf("������һ������");
  scanf("%d", &item);
  if (item >= 3)
  {
    for (i = 2; i < item; i++)
      if (item % i == 0)
        a++;
    if (a == 0)
      printf("%d ������\n", item);

    else
      printf("%d ��������\n", item);
  }
  else
    return 0;

  system("pause");
  return 0;
}