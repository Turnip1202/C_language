#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
  void interchange(int *x, int *y);
  int x = 5, y = 10;
  printf("Originally x = %d and y = %d.\n", x, y);
  // interchange(x, y);//�����൱������������������ȡ��ַ���õ���ַ��Ӧ�ڴ�ռ������
  interchange(&x, &y);
  printf("Now x = %d and y = %d.\n", x, y);
  return 0;
}
void interchange(int *u, int *v)
{
  int temp;

  // temp = u;//����д��temp��x�ĵ�ַ��u��ֵ����x�ĵ�ַ��
  // u��ֵ��&x������uָ��x����*u���ɱ�ʾx��ֵ
  // �൱��������*ȥ������ַָ����ڴ�
  temp = *u; // ȡu��ָ������ֵ
  *u = *v;
  *v = temp;

  // �������������д������ֻ�Ƕ��βα������� ֵ�Ľ��� ���ֽ����Ǿֲ���
  /*
  temp = u;
  u = v;
  v = temp;
  */
}
