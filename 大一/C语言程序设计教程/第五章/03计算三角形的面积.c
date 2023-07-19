#include "test.h"
int main()
{
  float a, b, c, s, area;
  printf("Please input three beside:\n");
  scanf("a = %f, b = %f, c = %f", &a, &b, &c);
  if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
  {
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area = %f\n", area);
  }
  else
    printf("your input have false!\n");
  system("pause");
  return 0;
}