#include "stdio.h"
#define SUM 100000
int main()
{
  float amount, aver, total = 0;
  int i;
  for (i = 1; i < 1000; i++)
  {
    printf("Please enter amount:");
    scanf("%f", &amount);
    total = total + amount;
    if (total >= SUM)
      break;
  }
  aver = total / i;
  printf("num = %d \n aver = %10.f\n", i, aver);
  return 0;
}