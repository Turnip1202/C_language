#include "reg52.h"
#include <intrins.h> //因为要用到左右移函数_crol_()，所以加入这个头文件

typedef unsigned int u16;
typedef unsigned char u8;

void delay(u16 t)
{
  u16 x, y;
  for (x = 0; x < t; x++)
    for (y = 0; y < 330; y++)
      ;
}
void main()
{
  u16 i;
  P2 = 0XFE;
  CA while (1)
  {
    for (i = 0; i < 7; i++) //将led左移一位
    {
      P2 = _crol_(P2, 1);
      delay(300);
    }
    for (i = 0; i < 7; i++) //将led右移一位
    {
      P2 = _cror_(P2, 1);
      delay(300);
    }
  }
}
