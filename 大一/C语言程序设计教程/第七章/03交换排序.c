#include "test.h"
#define N 10
int main()
{
  int a[N];
  int i, j, t;
  printf("Please input ten numbers\n");
  for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
  {
    printf("a[%d]=", i);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < sizeof(a) / sizeof(a[i]); i++)
  {
    for (j = i + 1; j < sizeof(a) / sizeof(a[i]); j++)
    {
      if (a[i] > a[j])
      {
        t = a[j];
        a[j] = a[i];
        a[i] = t;
      }
    }
  }
  printf("sort after is \n");
  for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    printf("%d\t", a[i]);
  printf("\n");
  system("pause");
  return 0;
}