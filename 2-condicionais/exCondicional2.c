#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que leia dois números inteiros e imprima qual é o maior, ou se são iguais.

  int num1, num2;

  printf("Informe o primeiro número: ");
  scanf("%d", &num1);

  printf("Informe o segundo número: ");
  scanf("%d", &num2);

  if (num1 > num2)
  {
    printf("%d é o maior.", num1);
  }
  else if (num2 > num1)
  {
    printf("%d é o maior.", num2);
  }
  else
  {
    printf("Os números informados são iguais.");
  }
}