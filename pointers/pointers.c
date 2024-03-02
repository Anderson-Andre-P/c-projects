#include <stdio.h>

int main() {
  /*
  variável - firstName
  endereço - 00xFF19089
  valor da variável - "Anderson"

  variável - lastName
  endereço - *firstName = 00xFF19089
  valor da variável lastName - "Anderson"
  */

  int firstAge = 24;
  int* lastAge = &firstAge;

  printf("%d, %p\n", firstAge, &firstAge);
  printf("%d, %p\n", *lastAge, lastAge);
  printf("\n");

  int a = 10;
  int *p1 = NULL;
  int *p2;

  printf("&a = %p, a = %d\n", &a, a);
  printf("&p1 = %p, p1 = %p\n", &p1, p1);
  printf("&p2 = %p, p2 = %p\n", &p2, p2);
  printf("\n");

  p1 = &a;
  p2 = p1;
  *p2 = 4;

  printf("&a = %p, a = %d\n", &a, a);
  printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
  printf("&p2 = %p, p2 = %p, *p1 = %d\n", &p2, p2, *p2);
  printf("\n");

  return 0;
}
