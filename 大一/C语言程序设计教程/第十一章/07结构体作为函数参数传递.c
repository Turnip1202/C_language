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
int show(struct Stu *p) //����ṹ��ָ����մ����ָ��
{
  int i;
  for (i = 0; i < 2; i++)
  {
    printf("ѧ�ţ�%d\t������%s\t�Ա�:%c\t���䣺%d\t�ɼ���%0.1f\n", p->num, p->name, p->sex, p->age, p->score);
    p++;
  }
  return 0;
}
