#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que imprime a soma de dois números entre 5 e 10, apenas quando os dois números estiverem dentro do range.
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int num1, num2;

  while (!(num1 > 5 && num1 < 10) || !(num2 > 5 && num2 < 10))
  {
    printf("Os valores digitados precisam estar entre 5 e 10!");

    printf("\nInforme os valores inteiros: ");
    scanf("%d %d", &num1, &num2);
  }

  printf("\nA soma de %d e %d é : %d", num1, num2, num1 + num2);

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
}