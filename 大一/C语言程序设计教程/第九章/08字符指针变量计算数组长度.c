#include "test.h"
int length(char *s)
{
  int len = 0;
  while (*s != '\0')
  {
    len++;
    s++;
  }
  return len;
}
int main()
{
  char a[30], *string = a;
  printf("Please input a string:");
  gets(string);
  printf("String = %s, length = %d\n", string, length(string));
  return 0;
}