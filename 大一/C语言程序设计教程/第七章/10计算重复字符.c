#include "test.h"
int main()
{
  char str[20];
  int n = 0, i = 0, j = 0, k = 0;
  gets(str);
  while (str[n] != '\0')
  {
    if (str[n] >= '0' && str[n] <= '9')
      i++;
    else if (str[n] >= 'a' && str[n] <= 'z')
      j++;
    else if (str[n] >= 'A' && str[n] <= 'Z')
      k++;
    n++;
  }
  printf("number i = %d, Lowercase letters j = %d, capital k = %d\n", i, j, k);
  system("pause");
  return 0;
}