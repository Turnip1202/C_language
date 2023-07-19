#include "stdio.h"
#include "math.h"
#include "stdlib.h"
int main(void)
{
    int a, b, g;
    //定义求最大公约数的函数
    int gcd(int m, int n);
    //求最小公倍数的函数
    int mul(int x, int y, int z);
    printf("请输入任意两个正整数：\n");
    scanf("%d %d", &a, &b);
    g = gcd(a, b); //得到最大公约数
    printf("%d和%d的最大公约数是：%d\n", a, b, g);
    printf("%d和%d的小公倍数是：%d\n ", a, b, mul(a, b, g));
    system("pause");
    return 0;
}
//定义求最大公约数的函数
int gcd(int m, int n)
{
    int rem;
    while (n > 0)
    {
        rem = m % n; /*取余操作*/
        m = n;
        n = rem;
    }
    return m;
}

//求最小公倍数的函数
int mul(int x, int y, int z)
{
    //最小公倍数 = 两数之积 / 最大公约数
    return x * y / z;
}
