#include <stdio.h>
#include "stdlib.h"
int main()
{
  char c;
  int letters_big = 0, letters_small = 0, space = 0, digit = 0, other = 0;
  printf("������һ���ַ���\n");
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
  printf("��д��ĸ����%d\tСд��ĸ����%d\t�ո�����%d\t��������%d\t�����ַ�����%d\t", 
  letters_big, letters_small, space, digit, other);
  system("pause");
  return 0;
}
