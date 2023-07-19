#include <stdio.h>
#include "stdlib.h"
int main()
{
  int a, b, c; // a是A的对手 b是B的对手 c是C的对手
  for (a = 'X'; a <= 'Z'; a++)
  {
    for (b = 'X'; b <= 'Z'; b++)
    {
      if (a != b) // 避免重复比赛
      {
        for (c = 'X'; c <= 'Z'; c++)
        {
          if (a != c && b != c) // 避免重复比赛
          {
            if (a != 'X' && c != 'X' && c != 'Z')
            {
              printf(" A --- %c\n B --- %c\n C --- %c\n", a, b, c);
            }
          }
        }
      }
    }
  }
  system("pause");
  return 0;
}