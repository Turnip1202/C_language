#include "stdio.h"
int main()
{
  int swap(int, int);
  int a, b;
  int *pointer_1 = NULL, *pointer_2 = NULL;
  printf("Please enter two ineger numbers:\n");
  scanf("%d,%d", &a, &b);
  pointer_1 = &a;
  pointer_2 = &b;
  // if (a < b)
  swap(pointer_1, pointer_2);
  printf("max = %d,min = %d\n", a, b);
}

int swap(int *p1, int *p2)
{
  int p;
  printf("%d\n", p1);
  p = *p1;
  *p1 = *p2;
  *p2 = p;
  return 0;
}

//相当于是在操作局部变量而已（指针变量也是变量）
int swap1(int *p1, int *p2)
{
  int *p;
  p = p1;
  p1 = p2;
  p2 = p;
  return 0;
}