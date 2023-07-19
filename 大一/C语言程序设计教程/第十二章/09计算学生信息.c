#include "stdio.h"
#include "stdlib.h"
#define N 5
typedef struct
{
  char name[10];
  float score;
} s;
int main()
{
  FILE *fp;
  s stu[N] = {{"Beibei", 85},
              {"Jingjing", 78},
              {"Huanhuan", 83},
              {"Yingying", 92},
              {"Nini", 68}};
  float sum = 0.0;
  float ave;
  int i;
  if ((fp = fopen("score.txt", "w+")) == NULL)
  {
    printf("Cannot open file!");
    exit(0);
  }
  for (i = 0; i < N; i++)
  {
    fprintf(fp, "the student %s score is: %f\n", stu[i].name, stu[i].score);
    sum = sum + stu[i].score;
  }
  ave = sum / N;
  fprintf(fp, "the average score is:");
  fprintf(fp, "%f\n", ave);
  fclose(fp);
  return 0;
}