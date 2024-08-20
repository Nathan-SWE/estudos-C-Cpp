#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // algoritmo que leia 3 valores inteiros de uma só vez, multiplique-os, e exiba o resultado.
  int num1, num2, num3, resultado;

  printf("Digite três números inteiros separados por espaço:\n");
  scanf("%d %d %d", &num1, &num2, &num3);

  resultado = num1 * num2 * num3;

  printf("O resultado da multiplicação entre os valores digitados é: %d", resultado);
}