#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimeVetor(int *vetor, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", vetor[i]);
  }
}

void modificaVetor(int *vetor, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", vetor[i] += 1);
  }
}

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int vetor[3] = {15, 24, 33};

  imprimeVetor(vetor, 3);
  printf("\n");
  modificaVetor(vetor, 3);

  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}
