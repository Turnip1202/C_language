#include "stdio.h"
#include "stdlib.h"
struct date
{
  int day;
  int month;
  int year;
};
typedef struct date d; //�����
int main()
{
  FILE *fp;
  d date1[3], date2[3];
  int i;
  if ((fp = fopen("t1.dat", "w+")) == NULL)
  {
    printf("�ļ���ȡʧ�ܣ�");
    exit(0);
  }
  printf("������3�����ڣ��ꡢ�¡����Կո����:\n");
  for (i = 0; i < 3; i++)
    scanf("%d %d %d", &date1[i].year, &date1[i].month, &date1[i].day);
  fwrite(date1, sizeof(d), 3, fp);
  rewind(fp);
  fread(date2, sizeof(d), 3, fp);
  printf("t1.dat�ļ��е�����Ϊ��\n");
  for (i = 0; i < 3; i++)
    printf("%d %d %d ", date2[i].year, date2[i].month, date2[i].day);
  fclose(fp);
  return 0;
}