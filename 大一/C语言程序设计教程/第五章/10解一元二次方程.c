#include "test.h"
int main()
{
  double a, b, c, disc, x, x1, x2, p, q;
  printf("Please enter the values of a, b, c, in the unary quadratic equation,
  separated by commas
  ");
  scanf("%lf,%lf,%lf",&a,&b,&c);
  if(a == 0){
    x = -c / b;
    printf("The equation is a quadratic equation with noe variable: x = %8.4f\n", x);
  }
  else{
    disc = b * b - 4 * a * c;
    if (disc == 0)
    {
      x = -b / (2 * a);
      printf("The equation has two identical roots,namely: x = %8.4f\n", x);
    }
    else
    {
      if (disc > 0)
      {
        x1 = (-b + sqrt(disc)) / (2 * a);
        x2 = (-b - sqrt(disc)) / (2 * a);
        printf("The equation has two roots, namely: %8.4f 和 %8.4f\n ", x1, x2);
      }
      else
      {
        p = -b / (2 * a);
        q = sqrt(-disc) / (2 * a);
        printf("The equation has two conjugate complex roots, namely:");
        printf("%8.4f + %8.4fi\n", p, q);
        printf("%8.4f - %8.4fi\n", p, q);
      }
    }
    system("pause");
    return 0;
  }
}