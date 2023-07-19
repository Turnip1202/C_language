#include "test.h"
int main()
{
  int a[10];
  int i, min;
  for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    scanf("%d", &a[i]);
  for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    printf("%4d", a[i]);
  min = a[0];
  for (i = 1; i < sizeof(a) / sizeof(a[0]); i++)
    if (min > a[i])
      min = a[i];
  printf("\nThe minimum number is %d\n", min);
  system("pause");
  return 0;
}