// 从结构体和联合体的定义，可以发现，其声明变量的语句较为复杂
// typedef应运而生
#include "stdio.h"
typedef int i;
struct student
{
  int uid;
  char name[20];
};

i main()
{
  typedef struct student s;
  s s1 = {12, "kang"};
  s *S = &s1;
  printf("%d   %s\n", S->uid, S->name);
  return 0;
}