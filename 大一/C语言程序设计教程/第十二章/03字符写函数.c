#include "stdio.h"
#include "stdlib.h"
int main()
{
  FILE *fp;
  char ch[1001], *p = ch;
  if ((fp = fopen(".\\turnip.txt", "a+")) == NULL)
  {
    printf("cannot open this file\n");
    exit(0);
  }
  printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:\n");
  gets(p);
  while (*p != '\0')
  {
    fputc(*p, fp);
    p++;
  }
  fclose(fp);
  return 0;
}