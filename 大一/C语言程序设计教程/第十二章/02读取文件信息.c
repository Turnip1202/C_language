#include "stdio.h"
#include "stdlib.h"
int main()
{
  FILE *fp;
  char ch;
  if ((fp = fopen("turnip.txt", "r")) == NULL)
  {
    printf("connot open this file\n");
    exit(0);
  }
  ch = fgetc(fp);
  while (ch != EOF)
  {
    putchar(ch);
    ch = fgetc(fp);
  }
  fclose(fp);
  printf("\n");
  return 0;
}