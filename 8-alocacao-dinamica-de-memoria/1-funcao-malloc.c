#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int *alocaVetor(int tamanho)
{
  int *aux;

  aux = (int *)malloc(tamanho * sizeof(int));

  return aux;
}

void adicionaValor(int *vetor, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("Informe o valor da posição %d: ", i);
    scanf("%d", &vetor[i]);
  }
}

void exibeVetor(int *vetor, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("index %d: %d\n", i, vetor[i]);
  }
}

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int *vetor, tamanho;

  printf("Informe o tamanho para o vetor: ");
  scanf("%d", &tamanho);

  vetor = alocaVetor(tamanho);
  adicionaValor(vetor, tamanho);
  exibeVetor(vetor, tamanho);

  free(vetor);
  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}
