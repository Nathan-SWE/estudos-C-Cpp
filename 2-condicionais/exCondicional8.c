#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que leia dois números inteiros e imprima se a soma estiver entre 0 e 10 ou se a soma for par.
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int num1, num2, soma;

  printf("Informe dois números inteiros: ");
  scanf("%d %d", &num1, &num2);

  soma = num1 + num2;

  if (soma > 0 && soma < 10)
  {
    printf("A soma dos números informados está entre 0-10: %d", soma);
  }
  else
  {
    printf("A soma dos números informados NÃO está entre 0-10: %d", soma);
  }

  if (soma % 2 == 0)
  {
    printf("\nA soma entre os dois números é par");
  }
  else
  {
    printf("\nA soma entre os dois números é impar");
  }
}