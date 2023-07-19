#include "stdlib.h"
int main()
{
  //判断文件是否打开
  if (fp = fopen(, "r") == NULL)
  {
    printf("connot open is this file\n");
    exit(0);
  }
  //判断文件是否关闭
  if ((fp = fclose(fp)) != 0)
    printf("\nerror：fail in file close!");
}
