#include "stdio.h"
#include "stdlib.h"
int main()
{
  FILE *fp;
  char str[15];
  if ((fp = fopen("turnip.txt", "r+")) == NULL)
  {
    printf("cannot open this file\n");
    exit(0);
  }
  fgets(str, 5, fp);
  puts(str);
  printf("Please input less than 14 words:\n");
  //输入英文字母
  gets(str);
  rewind(fp);
  fputs(str, fp);
  rewind(fp);
  fgets(str, 9, fp);
  puts(str);
  fclose(fp);
  return 0;
}