#include "test.h"
int main()
{
  float x, m1, m2, m;
  char y, z;
  printf("Please enter which type of gasoline to add, a 
  represents NO.89, b represents NO.92, and c represents No.95.
  ");
  scanf("%c",&y);
  getchar();//Accept carriage return
  printf("Please enter the type of fueling service to be performed, m represents fueling by
  the fueller, e represents self-service fueling\n");
  scanf("%c",&z);
  getchar();
  printf("Please enter the quantity of refueling\n");
  scanf("%f",&x);
  switch(y){
  case 'm':
    m2 = 5.88;
    break;
  case 'b':
    m1 = 6.28;
    break;
  case 'c':
    m1 = 6.68;
  }
  switch (z)
  {
  case 'm':
    m2 = 0.02;
    break;
  case 'e':
    m2 = 0.05;
    break;
  }
   m = x * m1 *(1 - m2);
   printf("The amount spent is:%.2f\n",m);
   system("pause");
   return 0;
}