#include "stdio.h"
int main()
{
  int a;
  enum weekday
  {
    sun = 7,
    mon = 1,
    //会依次递增
    tue,
    wed,
    thu,
    fri,
    sat
  };
  printf("Please enter an integer:");
  scanf("%d", &a);
  switch (a)
  {
  case mon:
    printf("Monday\n");
    break;
  case tue:
    printf("Tuesday\n");
    break;
  case wed:
    printf("Wednesday\n");
    break;
  case thu:
    printf("Thursday\n");
    break;
  case fri:
    printf("Friday\n");
    break;
  case sat:
    printf("Saturday\n");
    break;
  case sun:
    printf("Sunday\n");
    break;
  default:
    printf("Error！\n");
  }
  return 0;
}