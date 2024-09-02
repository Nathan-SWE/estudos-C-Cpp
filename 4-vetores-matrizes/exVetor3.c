#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _LINHA 2
#define _COLUNA 3

int main()
{
  // programa que preencha duas matrizes 2x2 lendo valores do usuário e depois troque os valores entre a primeira e segunda linha.
  setlocale(LC_ALL, "pt-BR.UTF-8");

  int matriz[_LINHA][_COLUNA];
  int aux1, aux2, aux3;

  printf("Informe os valores que deseja adicionar à tabela:\n");

  for (int i = 0; i < _LINHA; i++)
  {
    for (int j = 0; j < _COLUNA; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  aux1 = matriz[0][0];
  aux2 = matriz[0][1];
  aux3 = matriz[0][2];

  matriz[0][0] = matriz[1][0];
  matriz[0][1] = matriz[1][1];
  matriz[0][2] = matriz[1][2];

  matriz[1][0] = aux1;
  matriz[1][1] = aux2;
  matriz[1][2] = aux3;

  for (int i = 0; i < _LINHA; i++)
  {
    for (int j = 0; j < _COLUNA; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();

  return 0;
}
