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
  struct Stu S1 = {202201, "turnip", 'T', 18, 85};
  struct Stu S2 = {202202, "kang", 'T', 19, 91};
  printf("height score is:");
  if (S1.score > S2.score)
    printf("%d,%s,%c,%d,%f", S1.num, S1.name, S1.sex, S1.age, S1.score);
  else if (S1.score < S2.score)
    printf("%d,%s,%c,%d,%f", S2.num, S2.name, S2.sex, S2.age, S2.score);
  else
    printf("Same score!");
  return 0;
}