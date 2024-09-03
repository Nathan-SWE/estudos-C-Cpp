#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpaTela()
{
  system("CLS");
}

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  limpaTela();
  int a;

  printf("Digite um valor para 'a': ");
  scanf("%d", &a);

  limpaTela();
  printf("O valor digitado foi: %d", a);

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}
