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
  struct Stu *p; //����ṹ��ָ��
  p = s;         //�ṹ��ָ��ָ��ṹ������
  while (p < s + 2)
  {
    /* code */
    printf("ѧ�ţ�%d\t������%s\t�Ա�%c\t���䣺%d\t�ɼ���%0.1f\n", p->num, p->name, p->sex, p->age, p->score);
    p++;
  }
  return 0;
}