#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
  void interchange(int *x, int *y);
  int x = 5, y = 10;
  printf("Originally x = %d and y = %d.\n", x, y);
  // interchange(x, y);//这里相当于做了两步操作；即取地址，拿到地址对应内存空间的数据
  interchange(&x, &y);
  printf("Now x = %d and y = %d.\n", x, y);
  return 0;
}
void interchange(int *u, int *v)
{
  int temp;

  // temp = u;//这样写，temp是x的地址（u的值就是x的地址）
  // u的值是&x，所以u指向x，故*u即可表示x的值
  // 相当于是利用*去操作地址指向的内存
  temp = *u; // 取u所指向对象的值
  *u = *v;
  *v = temp;

  // 如果是下面这样写，仅仅只是对形参变量进行 值的交换 这种交换是局部的
  /*
  temp = u;
  u = v;
  v = temp;
  */
}
