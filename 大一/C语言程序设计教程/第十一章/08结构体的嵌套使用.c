#include "stdio.h"
struct Score
{ //�����ṹ��
  float regular;
  float midterm;
  float final;
  float total;
};
struct student
{
  int num;
  char name[20];
  struct Score grade; //����ṹ�����grade
};
int cal(struct student stu[])
{ //����ṹ������
  struct student *p;
  //����ɼ�
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
    printf("ѧ��%d ����:%s ƽʱ�ɼ���%0.1f ���гɼ���%0.1f ��ĩ�ɼ���%0.1f �ܳɼ���%0.1f\n", p->num, p->name, p->grade.regular, p->grade.midterm, p->grade.final, p->grade.total);
    p++;
  }
  return 0;
}
