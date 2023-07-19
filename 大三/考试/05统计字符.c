#include <stdio.h>
#include "stdlib.h"
int main()
{
  char c;
  int letters_big = 0, letters_small = 0, space = 0, digit = 0, other = 0;
  printf("请输入一行字符：\n");
  while ((c = getchar()) != '\n')
  {
    if (c >= 'A' && c <= 'Z')
      letters_big++;
    else if (c >= 'a' && c <= 'z')
      letters_small++;
    else if (c == ' ')
      space++;
    else if (c >= '0' && c <= '9')
      digit++;
    else
      other++;
  }
  printf("大写字母数：%d\t小写字母数：%d\t空格数：%d\t数字数：%d\t其他字符数：%d\t", 
  letters_big, letters_small, space, digit, other);
  system("pause");
  return 0;
}
