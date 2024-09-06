#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");

  int linhas, colunas, **matriz;

  printf("Informe o número de linhas e colunas: ");
  scanf("%d %d", &linhas, &colunas);

  matriz = (int **)malloc(linhas * sizeof(int *));

  for (int i = 0; i < linhas; i++)
  {
    matriz[i] = (int *)malloc(colunas * sizeof(int *));
  }

  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      matriz[i][j] = i;
      printf("%d", matriz[i][j]);
    }
    printf("\n");
  }

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}