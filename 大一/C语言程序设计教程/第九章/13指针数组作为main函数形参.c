#include "test.h"
int main(int argc, char *argv[])
{
  while (argc > 0)
  {
    printf("%s\n", *argv);
    ++argv;
    --argc; // parameters count
  }
  return 0;
}
