#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int score;
  printf("Please enter score:\n");
  scanf("%d", &score);
  if (score > 100 || score < 0)
  {
    printf("data is not true\n");
  }
  else
  {
    switch (score / 10) //这里会进行隐式类型转换
    {
    case 10:
    case 9:
      printf("A\n");
      break;
    case 8:
      printf("B\n");
      break;
    case 7:
      printf("C\n");
      break;
    case 6:
      printf("D\n");
      break;

    default:
      printf("E\n");
    }
  }
  system("pause");
  return 0;
}