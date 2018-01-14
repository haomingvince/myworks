#include <stdio.h>
#include <stdlib.h>

void swap(int*,int*);

int main(int argc, char** argv)
{
  int a = 0;
  int b = 10;
  printf("a = %d, b = %d, argc = %d, argv = %s\n",a, b, argc, argv[1]);
  swap(&a,&b);
  printf("a = %d, b = %d\n",a, b);
  //printf("the address of a is %p, b is %p\n", &a, &b);
  return EXIT_SUCCESS;
}

void swap(int* a, int* b){
  int temp = 99;//Some random number
  temp = *a;
  *a = *b;
  *b = temp;
  return;
}
