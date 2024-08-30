#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que preencha duas matrizes 2x2 lendo valores do usuário e depois troque os valores entre a primeira e segunda linha.
  setlocale(LC_ALL, "pt-BR.UTF-8");

  int minhaMatriz[2][2], aux1, aux2, i, j;

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("Digite um valor para [%d][%d]:", i, j);
      scanf("%d", &minhaMatriz[i][j]);
    }
  }

  aux1 = minhaMatriz[0][0];
  aux2 = minhaMatriz[0][1];

  minhaMatriz[0][0] = minhaMatriz[1][0];
  minhaMatriz[0][1] = minhaMatriz[1][1];
  minhaMatriz[1][0] = aux1;
  minhaMatriz[1][1] = aux2;

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d ", minhaMatriz[i][j]);
    }
    printf("\n");
  }

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
}
