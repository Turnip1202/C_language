#include "stdio.h"
#include "stdlib.h"
int main()
{
  int copy_string(char *a, char *b);
  char *a = "I am a teacher.";
  char b[] = "You are a student.";
  char *p = b;
  printf("string a = %s\nsting b = %s\n", a, b);
  printf("copy string a to string b\n");
  copy_string(a, p);
  printf("\nstring a = %s\nstring b = %s\n", a, b);
  system("pause");
  return 0;
}
int copy_string(char *from, char *to)
{
  while (*from != '\0')
  {
    *to = *from;
    from++;
    to++;
  }
  *to = '\0';
}