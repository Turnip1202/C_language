#include "test.h"
int main()
{
  int n, f[20];
  f[0] = f[1] = 1;
  for (n = 2; n < 20; n++)
    f[n] = f[n - 1] + f[n - 2];
  for (n = 0; n < sizeof(f) / sizeof(f[0]); n++)
  {
    if (n % 4 == 0)
      printf("\n");
    printf("%10d", f[n]);
  }
  printf("\n");
  return 0;
}