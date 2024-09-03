#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void desenhaBorda()
{
  printf("-------------------------------\n");
}

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  desenhaBorda();
  printf("Olá!\n");
  desenhaBorda();

  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}