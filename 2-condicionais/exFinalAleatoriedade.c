#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main()
{
  // programa que joga 3 dados de seis lados aleatoriamente, e imprime a soma dos 3 valores.
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int lado1, lado2, lado3, resultado;

  srand(time(NULL));

  lado1 = (rand() % 6) + 1;
  lado2 = (rand() % 6) + 1;
  lado3 = (rand() % 6) + 1;

  resultado = lado1 + lado2 + lado3;

  printf("\nDado 1 = %d", lado1);
  printf("\nDado 2 = %d", lado2);
  printf("\nDado 3 = %d", lado3);

  printf("\nA soma dos lados dos dados é: %d", resultado);

  printf("\nPressione enter para encerrar...");
  getchar();
}