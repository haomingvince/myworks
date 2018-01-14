#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  int a = 0;
  int b = 10;

  printf("a = %d, b = %d, argc = %d, argv = %s\n",a, b, argc, argv[1] );
  return EXIT_SUCCESS;
}
