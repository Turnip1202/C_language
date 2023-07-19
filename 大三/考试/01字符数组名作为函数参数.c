#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  int copy_string(char a[], char b[]);
  char a[] = "I am a teacher.";
  char b[] = "You are a student.";
  printf("string a = %s\n string b = %s\n", a, b);
  printf("copy string a to sring b\n");
  copy_string(a, b);
  printf("\nstring a = %s\n string b = %s\n", a, b);

  return 0;
}

int copy_string(char from[], char to[])
{
  int i = 0;
  while (from[i] != '\0')
  {
    to[i] = from[i];
    i++;
  }
  to[i] = '\0';
  return 0;
}