#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que leia 3 números inteiros e imprima se os 3 são maiores que 10

  int num1, num2, num3;

  printf("Informe três números inteiros: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 < 10 || num2 < 10 || num3 < 10)
  {
    printf("Um dos três números informados não é maior que 10");
  }
  else
  {
    printf("Todos os números informados são maiores do que 10");
  }
}