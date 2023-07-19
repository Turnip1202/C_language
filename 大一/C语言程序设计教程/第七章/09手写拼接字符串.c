#include "test.h"
int main()
{
  char str1[50], str2[20];
  int i, j;
  printf("Please enter a string1\n");
  gets(str1);
  printf("Please enter a string2\n");
  gets(str2);
  i = j = 0;
  while (str1[i] != '\0')
  {
    i++;
  };
  while ((str1[i++] = str2[j++]) != '\0')
  {
  };
  printf("The connected string is:%s\n", str1);
  return 0;
}