#include <stdio.h>

int main() {
  int a = 10;
  int *p1 = &a;
  int **p2 = &p1;

  printf("a = %d, &a = %p\n", a, &a);
  printf("p1 = %p, &p1 = %p, *p1 = %d\n", p1, &p1, *p1);
  printf("p2 = %p, &p2 = %p, *p2 = %p, **p2 = %d\n", p2, &p2, *p2, **p2);
  printf("\n");

  **p2 = 99;

  printf("a = %d, &a = %p\n", a, &a);
  printf("p1 = %p, &p1 = %p, *p1 = %d\n", p1, &p1, *p1);
  printf("p2 = %p, &p2 = %p, *p2 = %p, **p2 = %d\n", p2, &p2, *p2, **p2);
  printf("\n");

  printf("---------------------------------------------------------------------------------------\n");

  float z = 2.5;
  float *fp;

  fp = &z;

  printf("z = %.2f, &z = %p, *&z = %.2f\n", z, &z, *&z);
  printf("fp = %p, *fp = %.2f\n", fp, *fp);
  printf("**fp = %.2f\n", **&fp);

  printf("---------------------------------------------------------------------------------------\n");
  
  int ab, ba, *p1a, *p2b;

  ab = 4;
  ba = 3;
  p1a = &ab;
  p2b = p1a;

  *p2b = *p1a + 3; ba = ba * (*p1a); (*p2b)++;

  printf("*p1a = %d, *p2b =  %d\n", *p1a, *p2b);
  printf("ab = %d, ba = %d\n", ab, ba);

  return 0;
}
