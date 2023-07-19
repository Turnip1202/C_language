#include "stdio.h"
int main()
{
  struct Stu
  {
    int num;
    char name;
    char sex;
    int age;
    float score;
  };
  struct Stu s[3], *p; //定义结构体数组和指针变量
  p = s;               //指针变量p指向结构体数组的首地址
}