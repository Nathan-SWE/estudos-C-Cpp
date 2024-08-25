#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // programa que mostre os numeros pares de 10 a 20.
  setlocale(LC_ALL, "pt-BR.UTF-8");

  for (int i = 10; i <= 20; i++)
  {
    if (i % 2 == 0)
    {
      printf("\n%d", i);
    }
  };

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
}
