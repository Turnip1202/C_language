#include "stdio.h"
#include "math.h"
#include "stdlib.h"
int main(void)
{
    int a, b, g;
    //���������Լ���ĺ���
    int gcd(int m, int n);
    //����С�������ĺ���
    int mul(int x, int y, int z);
    printf("����������������������\n");
    scanf("%d %d", &a, &b);
    g = gcd(a, b); //�õ����Լ��
    printf("%d��%d�����Լ���ǣ�%d\n", a, b, g);
    printf("%d��%d��С�������ǣ�%d\n ", a, b, mul(a, b, g));
    system("pause");
    return 0;
}
//���������Լ���ĺ���
int gcd(int m, int n)
{
    int rem;
    while (n > 0)
    {
        rem = m % n; /*ȡ�����*/
        m = n;
        n = rem;
    }
    return m;
}

//����С�������ĺ���
int mul(int x, int y, int z)
{
    //��С������ = ����֮�� / ���Լ��
    return x * y / z;
}
