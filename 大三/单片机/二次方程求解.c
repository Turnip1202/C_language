#include "stdio.h"
#include "math.h"
#include "stdlib.h"

int main()
{
	int a, b, c, d, x;
	int root1(int a, int b, int c); // d=0
	int root2(int a, int b, int d); // d>0
	int root3(int a, int b, int d); // d<0
	printf("请输入方程的系数:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a == 0)
	{
		//当方程为一次方程时
		x = -c / b;
		printf("方程有一个实根:%d", x);
	}
	else
	{
		//判断d的符号
		d = b * b - 4 * a * c;
		if (d == 0)
			root1(a, b, c);
		if (d > 0)
			root2(a, b, d);
		if (d < 0)
			root3(a, b, d);
	}
	system("pause");
}
int root1(int a, int b, int c)
{
	printf("方程有两个相等的实根x = %d", (-b / (2 * a)));
}
int root2(int a, int b, int d)
{
	int x1, x2;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	printf("方程有两个根：x1 = %d,x2 = %d\n", x1, x2);
	return 0;
}
int root3(int a, int b, int d)
{
	int p = -b / (2 * a);
	int q = sqrt(-d) / (2 * a);
	printf("方程有两个复根 ");
	printf("x1 = %d + %di 和 ", p, q);
	printf("x2 = %d - %di\n", p, q);
	return 0;
}

