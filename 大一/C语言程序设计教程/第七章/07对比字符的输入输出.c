#include "test.h"
int main()
{
  int strTP(void);
  strTP();
  int strSP();
  strSP();
  system("pause");

  return 0;
}
int strTP(void)
{
  char a[10];
  int i;
  for (i = 0; i < 10; i++)
  {
    a[i] = getchar();
  }
  for (i = 0; i < 10; i++)
  {
    putchar(a[i]);
  }
  printf("\n");
  return 0;
}
int strSP()
{
  char a[10];
  int i;
  for (i = 0; i < 10; i++)
  {
    scanf("%c", &a[i]);
  }
  for (i = 0; i < 10; i++)
  {
    printf("%c", a[i]);
  }
  printf("\n");
  return 0;
}