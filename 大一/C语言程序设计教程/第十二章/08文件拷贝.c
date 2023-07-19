#include "stdio.h"
#include "stdlib.h"
int main()
{
  FILE *fp1, *fp2;
  char c;
  if ((fp1 = fopen("y1.txt", "r")) == NULL)
  {
    printf("\nerror:fail in opening myfile!");
    exit(0);
  }
  if ((fp2 = fopen("y2.txt", "w+")) == NULL)
  {
    printf("\nerror:fail in opening myfile!");
    exit(0);
  }
  while (!feof(fp1))
  {
    c = fgetc(fp1);
    fputc(c, fp2);
  }
  rewind(fp2);
  c = fgetc(fp2);
  printf("%c\n", c);
  fclose(fp1);
  fclose(fp2);
  return 0;
}