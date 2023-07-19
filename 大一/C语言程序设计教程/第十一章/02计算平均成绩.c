#include "stdio.h"
struct Stu
{
  int num;
  char name[20];
  char sex;
  int age;
  float score;
};

int main()
{
  int i;
  float sum = 0.0;
  struct Stu s[30] = {
      {201701, "Turnip", "M", 18, 89},
      {201702, "kang", "M", 19, 99},
      {201703, "kkk", "M", 20, 100}};
  for (i = 0; i < 3; i++)
    sum = sum + s[i].score;
  printf("平均分为：%5.lf\n", sum / 3.0);
  return 0;
}