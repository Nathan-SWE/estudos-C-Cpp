#include <stdio.h>
#include <stdlib.h>

void main()
{
  int a, b;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  printf("\nsum: %d", a + b);
  printf("\nsub: %d", a - b);
  printf("\ndiv: %d", a / b);
  printf("\nmod: %d", a % b);
  printf("\nmult: %d", a * b);
  printf("\nmult absolute value: %d", abs(a * b));
}