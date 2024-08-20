#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // algoritmo que leia duas notas e mostre o valor absoluto da diferença entre elas.
  setlocale(LC_ALL, "");

  float nota1, nota2;

  printf("Informe o valor da primeira nota: ");
  scanf("%f", &nota1);

  printf("Informe o valor da segunda nota: ");
  scanf("%f", &nota2);

  printf("O valor absoluto da diferença entre %.1f e %.1f é : %d", nota1, nota2, abs(nota1 - nota2));
}