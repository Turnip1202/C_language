#include "stdio.h"
void swap(int *a, int *b) //交換兩個變數
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int arr[] = {2,
               3,
               1,
               5,
               4};
  int i, j;
  for (i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
  {
    int min = i;
    for (j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++)
      if (arr[j] < arr[min])
        min = j;
    swap(&arr[min], &arr[i]); //做交換
  }

  for (int k = 0; k < 5; k++)
    printf("%d\t", arr[k]);
}