#include "stdio.h"
int main()
{
  struct Stu
  {
    int num;
    char name[20];
    char sex;
    int age;
    float score;
  };
  struct Stu s[2] = {
      {201701, "turnip", 'M', 19, 89},
      {201702, "kang", 'M', 18, 90}};
  struct Stu *p; //定义结构体指针
  p = s;         //结构体指针指向结构体数组
  while (p < s + 2)
  {
    /* code */
    printf("学号：%d\t姓名：%s\t性别：%c\t年龄：%d\t成绩：%0.1f\n", p->num, p->name, p->sex, p->age, p->score);
    p++;
  }
  return 0;
}