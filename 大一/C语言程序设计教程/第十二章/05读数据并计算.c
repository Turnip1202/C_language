#include "stdio.h"
#include "stdlib.h"
#define N 6
void read_data(int a[], int n)
{
  int i;
  FILE *fp;
  if ((fp = fopen("k1.txt", "r+")) == NULL)
  {
    printf("文件读取失败!");
    exit(0);
  }
  for (int i = 0; i < n; i++)
    fscanf(fp, "%3d", &a[i]);
  fclose(fp);
}
float Ave(int a[])
{
  int i;
  float ave = 0.0;
  for (i = 0; i < N; i++)
  {
    ave += a[i];
  }
  printf("计算成功！请打开文件查看！\n");
  return ave / 6;
}
void write_data(int a[], float ave)
{
  FILE *fp;
  if ((fp = fopen("k2.txt", "w+")) == NULL)
  {
    printf("文件写入失败！");
    exit(0);
  }
  fprintf(fp, "\n\n这些数的平均值为：");
  fprintf(fp, "%4.2f", ave);
  fclose(fp);
}
int main()
{
  int a[N];
  float ave;
  read_data(a, N);
  ave = Ave(a);
  write_data(a, ave);
  return 0;
}