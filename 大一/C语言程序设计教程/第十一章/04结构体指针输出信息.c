#include "string.h"
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
  struct Stu S1;
  struct Stu *p = &S1;
  S1.num = 201701;
  strcpy(S1.name, "turnip");
  S1.sex = 'M';
  S1.age = 18;
  S1.score = 85;
  printf("学号：%d\t姓名：%s\t性别：%c\t年龄：%d\t成绩：%0.1f\n", p->num, p->name, p->sex, p->age, p->score);
  printf("学号：%d\t姓名：%s\t性别：%c\t年龄：%d\t成绩：%0.1f\n", (*p).num, (*p).name, (*p).sex, (*p).age, (*p).score);
  return 0;
}
