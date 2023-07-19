#include "stdio.h"
struct Score
{ //分数结构体
  float regular;
  float midterm;
  float final;
  float total;
};
struct student
{
  int num;
  char name[20];
  struct Score grade; //定义结构体变量grade
};
int cal(struct student stu[])
{ //传入结构体数组
  struct student *p;
  //计算成绩
  for (p = stu; p < stu + 2; p++)
    p->grade.total = 0.3 * p->grade.regular + 0.1 * p->grade.midterm + 0.6 * p->grade.final;
  return 0;
};
int main()
{
  struct student s[2] = {
      {201701, "turnip", 'M', 19, 89},
      {201702, "kang", 'M', 18, 90}};
  struct student *p = s;
  cal(p);
  while (p < s + 2)
  {
    printf("学号%d 姓名:%s 平时成绩：%0.1f 期中成绩：%0.1f 期末成绩：%0.1f 总成绩：%0.1f\n", p->num, p->name, p->grade.regular, p->grade.midterm, p->grade.final, p->grade.total);
    p++;
  }
  return 0;
}
