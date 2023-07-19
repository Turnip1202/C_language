#include "test.h"
int main()
{
  int year, leap;
  printf("Please enter the year number:\n");
  scanf("%d", &year);
  if (year % 4 == 0)
  {
    if (year % 100 == 0)
    {
      if (year % 400 == 0)
      {
        leap = 1;
      }
      else
      {
        leap = 0;
      }
    }
    else
    {
      leap = 1;
    }
  }
  else
  {
    leap = 0;
  }
  if (leap)
    printf("%d is leap year!\n", year);
  else
    printf("%d is not a leap year!\n", year);
  system("pause");
  return 0;
}