#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que leia 3 valores e armazene-os em um vetor, depois calcule média destes valores.
  setlocale(LC_ALL, "pt-BR.UTF-8");
  float notas[3], media;

  printf("Informe os valores das notas a serem calculadas: ");
  scanf("%f %f %f", &notas[0], &notas[1], &notas[2]);

  for (int i = 0; i < 3; i++)
  {
    printf("Nota %d: %.2f\n", (i + 1), notas[i]);
  }

  media = (notas[0] + notas[1] + notas[2]) / 3;
  printf("\nSua média é de: %.2f", media);

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
}
