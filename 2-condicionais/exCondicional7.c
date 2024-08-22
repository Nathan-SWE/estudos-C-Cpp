#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que leia dois números inteiros e imprime se algum é par

  int num1, num2;

  printf("Informe dois números inteiros: ");
  scanf("%d %d", &num1, &num2);

  if (num1 % 2 == 0 || num2 % 2 == 0)
  {
    printf("Um dos números informados é par");
  }
  else
  {
    printf("Nenhum dos números informados é par");
  }
}