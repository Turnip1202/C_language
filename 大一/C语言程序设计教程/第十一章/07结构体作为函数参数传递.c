#include "stdio.h"
struct Stu
{
  int num;
  char name[20];
  char sex;
  int age;
  float score;
};
int show(struct Stu *);
int main()
{
  struct Stu s[2] = {
      {201701, "turnip", 'M', 19, 89},
      {201702, "kang", 'M', 18, 90}};
  struct Stu *p;
  p = s;
  show(p);
  return 0;
}
int show(struct Stu *p) //定义结构体指针接收传入的指针
{
  int i;
  for (i = 0; i < 2; i++)
  {
    printf("学号：%d\t姓名：%s\t性别:%c\t年龄：%d\t成绩：%0.1f\n", p->num, p->name, p->sex, p->age, p->score);
    p++;
  }
  return 0;
}
