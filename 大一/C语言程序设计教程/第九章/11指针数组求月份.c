#include "test.h"
int main()
{
  int num;
  char *month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  printf("Enter mouth:");
  scanf("%d", &num);
  if (num >= 1 && num <= 12)
  {
    printf("%s\n", month[num - 1]);
  }
  else
  {
    printf("Input error!\n");
  }
  return 0;
}