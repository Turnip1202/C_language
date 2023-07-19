#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  int copy_string(char a[], char b[]);
  char a[] = "I am a teacher.";
  char b[] = "You are a student.";
  char *from = a, *to = b;
  printf("string a = %s \nstring b = %s\n", a, b);
  printf("copy string a to string b\n");
  copy_string(from, to);
  printf("\nstring a = %s \n string b = %s\n", a, b);
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
}