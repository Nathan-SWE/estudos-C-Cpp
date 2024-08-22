#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que imprime números pares, a partir de 10 até o número informado pelo usuário.
  setlocale(LC_ALL, "pt-BR.UTF-8");

  int num, limit = 10;
  printf("Informe um número para ver os valores pares de 10 até o valor desejado: ");
  scanf("%d", &num);

  while (limit <= num)
  {
    if (limit % 2 == 0)
    {
      printf("\n%d", limit);
    }
    limit++;
  }

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
}