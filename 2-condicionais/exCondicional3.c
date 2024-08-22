#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que imprime se um número é par ou não;
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int num;

  printf("Informe um número inteiro para descobrir se ele é par: ");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    printf("O número %d é par", num);
  }
  else
  {
    printf("O número %d é impar", num);
  }
}