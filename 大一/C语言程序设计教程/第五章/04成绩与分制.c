#include "test.h"
int main()
{
  int score;
  printf("Please you inputs score:");
  scanf("%d", &score);
  if (score > 100 || score < 0)
  {
    printf("input data is false");
    system("pause");
    return 0;
  };
  if (score >= 90)
    printf("very good\n");
  else if (score >= 80)
    printf("big good\n");
  else if (score >= 70)
    printf("good \n");
  else if (score >= 60)
    printf("small good\n");
  else
    printf("not good\n");
  system("pause");
  return 0;
}