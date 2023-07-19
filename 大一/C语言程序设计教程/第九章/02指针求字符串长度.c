#include "test.h"
int main()
{
  char str[50];
  printf("Enter string\n");
  char *p = str;
  gets(str);
  while (*p)
    p++;
  printf("String length = %d\n", p - str);
  return 0;
}