#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que imprime de 50 até 0, diminuindo de 6 em 6
  setlocale(LC_ALL, "pt-BR.UTF-8");

  int valor = 50;

  while (valor >= 0)
  {
    printf("\nO valor atual é: %d", valor);
    valor -= 6;
  }
}