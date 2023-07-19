#include "test.h"
int main()
{
  char a[50], b[30];
  char *str1, *str2;
  printf("Enter string1:");
  gets(a);
  printf("Enter string2:");
  gets(b);
  str1 = a;
  str2 = b;
  while (*str1 != '\0')
    str1++;
  while (*str1++ = *str2++)
    ;
  printf("a + b = %s\n", a);
  return 0;
}