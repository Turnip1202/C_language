#include "stdio.h"
#include "stdlib.h"
int main()
{
  FILE *fp;
  char filename[51], str[100];
  printf("�������ļ�����");
  scanf("%s", filename);
  if ((fp = fopen(filename, "wb+")) == NULL)
  {
    printf("�ļ���ʧ��!\n");
    exit(0);
  }
  printf("������һ�仰:\n");
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