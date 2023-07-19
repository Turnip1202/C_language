#include "test.h"
int main()
{
  int num;
  char *month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  char **p;
  printf("Enter month:");
  scanf("%d", &num);
  if (num >= 1 && num <= 12)
  {
    p = month + num - 1;
    printf("%s\n", *p);
  }
  else
  {
    printf("Input error!\n");
  }
  return 0;
}