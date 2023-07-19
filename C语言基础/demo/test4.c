#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(void)
{
  char arr[] = {'t', 'u', 'r', 'n', 'i', 'p', '\0'};
  char str[] = "kang";
  char buffer[18] = {0};
  int count = sizeof(arr) / sizeof(arr[0]);

  printf("%d\n", atoi("123"));
  printf("%d\n", strlen(arr));
  printf("%s\n", arr);
  printf("%d\n", count);
  // sprintf(buffer, "name = %s,age = %s", "turnip", 19);
  // printf("%s\n", buffer);//没反应
  system("pause");
}