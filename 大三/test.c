#include <stdio.h>
void copy(char f[], char t[])
{
  for (int i = 0; *f != '\0'; i++) //*f相当于是取值了，所以是错的
  {
    t[i] = f[i];
  }
}
int main()
{
  // char a[]={"asfagff"} ,*from=a,b[20],*to=b;
  char a[] = {"asfagff"}, b[20], *from = a, *to = b;
  for (int i = 0; i < 7; i++)
  {
    printf("%c", a[i]);
  }
  copy(from, to);
  printf("\n-----------\n");
  for (int i = 0; i < 7; i++)
  {
    printf("%c", b[i]);
  }
  return 0;
}
