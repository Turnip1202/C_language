#include "stdio.h"
#include "stdlib.h"
int main()
{
  FILE *fp;
  char filename[51], str[100];
  printf("请输入文件名：");
  scanf("%s", filename);
  if ((fp = fopen(filename, "wb+")) == NULL)
  {
    printf("文件打开失败!\n");
    exit(0);
  }
  printf("请输入一句话:\n");
  getchar();
  gets(str);
  fputs(str, fp);
  fseek(fp, 10L, 0);
  fgets(str, 5, fp);
  if (feof(fp) == 1)
    printf("It's the end of the file.\n");
  else
    printf("It isn't the end of the file\n");
  puts(str);
  fclose(fp);
  return 0;
}