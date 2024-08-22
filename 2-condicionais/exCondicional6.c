#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que leia dois números inteiros e imprima se algum é maior que dez.

  int num1, num2;

  printf("Informe dois números inteiros: ");
  scanf("%d %d", &num1, &num2);

  if (num1 > 10 || num2 > 10)
  {
    printf("Um dos números informados é maior do que 10");
  }
  else
  {
    printf("Um dos números informados não é maior do que 10");
  }
}