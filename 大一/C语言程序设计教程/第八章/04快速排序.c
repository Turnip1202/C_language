#include "test.h"
#define N 6
int partition(int arr[], int low, int high)
{
  int key;        //轴
  key = arr[low]; //取轴
  while (low < high)
  {
    while (low < high && arr[high] >= key) //比较轴的右边，找到小于轴的值
      high--;

    if (low < high)
      //注意，这里是先arr[low],再low++
      arr[low++] = arr[high]; //将高位的值放到低位

    //原理同上，低位
    while (low < high && arr[low] <= key)
      low++;
    if (low < high)
      arr[high--] = arr[low];
  }
  arr[low] = key;
  return low;
}
void quick_sort(int arr[], int start, int end)
{
  int k;
  if (start < end)
  {
    k = partition(arr, start, end);
    quick_sort(arr, start, k - 1);
    quick_sort(arr, k + 1, end);
  }
  return;
}
int main()
{
  int i;
  int arr[N] = {45,
                15,
                8,
                91,
                33,
                57};
  printf("before sort:");
  for (i = 0; i < N; i++)
  {
    printf("%d\t", arr[i]);
  }
  quick_sort(arr, 0, N - 1);
  printf("\n after sort");
  for (i = 0; i < N; i++)
    printf("%d\t", arr[i]);
  printf("\n");
  return 0;
}
