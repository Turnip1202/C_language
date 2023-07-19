#include "test.h"
int main()
{
  char C[] = {'t', 'u', 'r', 'n', 'i', 'p'};
  for (int i = 0; i < sizeof(C) / sizeof(C[0]); i++)
  {
    printf("%c", C[i]);
    if (i == sizeof(C) / sizeof(C[0]) - 1)
      printf("\n");
  }
  system("pause");
  return 0;
}