#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char retornaLetra();

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  char letra;

  letra = retornaLetra();

  printf("A letra retornada é: %c", letra);

  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}

char retornaLetra()
{
  return 120; //número da letra 'x' da tabela ascii
}