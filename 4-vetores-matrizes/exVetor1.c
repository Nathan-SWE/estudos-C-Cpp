#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que leia 3 valores e armazene-os em um vetor, depois calcule média destes valores.
  setlocale(LC_ALL, "pt-BR.UTF-8");
  float notas[3], media;

  printf("Informe os valores das notas a serem calculadas: \n");
  for (int i = 0; i < 3; i++)
  {
    printf("%d° nota: ", i + 1);
    scanf("%f", &notas[i]);
  }
  
  media = (notas[0] + notas[1] + notas[2]) / 3;
  printf("\nSua média é de: %.2f", media);

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
}
