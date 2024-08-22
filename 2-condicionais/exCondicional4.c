#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que leia número inteiro e imprima se ele está entre 0 e 10

  int num;

  printf("Informe um número inteiro: ");
  scanf("%d", &num);

  if (num > 0 && num < 10)
  {
    printf("O número %d está dentro do range entre 0 e 10", num);
  }
  else
  {
    printf("O número %d está fora do range entre 0 e 10", num);
  }
}