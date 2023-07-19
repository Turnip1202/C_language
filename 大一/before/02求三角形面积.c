#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, s, area;
  printf("Please input condition of area \n");
  scanf("a = %f, b = %f, c = %f", &a, &b, &c);
  s = 1.0 / 2 * (a + b + c);
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("area = %.4f\n", area);
  return 0;
}