#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que mostre a tabuada de um número informado pelo usuário.
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int num;

  printf("Informe o número inteiro que deseja ver a tabuada: ");
  scanf("%d", &num);

  for (int i = 0; i <= 10; i++)
  {
    printf("\n%d x %d = %d", num, i, num * i);
  };

  printf("\nPressione enter para encerrar...");
  getchar();
}
