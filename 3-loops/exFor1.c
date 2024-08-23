#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que mostre a soma de todos os números de 0 a 10.
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int soma;

  for (int i = 0; i < 10; i++)
  {
    printf("\n%d", soma += i);
  };

  printf("\nPressione enter para encerrar...");
  getchar();
}
