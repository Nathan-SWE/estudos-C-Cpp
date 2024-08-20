#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // algoritmo que leia duas notas e mostre a média entre elas;
  setlocale(LC_ALL, "");

  float nota1, nota2;

  printf("Informe o valor da sua primeira nota: ");
  scanf("%f", &nota1);

  printf("Informe o valor da sua segunda nota: ");
  scanf("%f", &nota2);

  printf("A sua média é: %.1f", (nota1 + nota2) / 2);
}
