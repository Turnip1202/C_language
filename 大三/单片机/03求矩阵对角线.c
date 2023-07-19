#include <stdio.h>
int main()
{
  int arr[][3] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};
  int sum = 0, r1 = 0, r2 = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i == j)
        r1 += arr[i][j];
      if (i + j == 2 && i != j)
        r2 += arr[i][j];
    }
  }
  sum = r1 + r2;
  printf("sum = %d\n", sum);
  return (1);
}
