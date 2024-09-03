#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int retornaDez();

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int a;

  a = retornaDez(); // passa o valor de retorno da função para a variável 'a'

  printf("O valor de a é: %d", a);

  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}

int retornaDez()
{
  return 10;
}
