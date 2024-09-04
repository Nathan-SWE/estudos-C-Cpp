#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sucessor(a)
{
  return a + 1;
}

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int a;
  int resultado;

  printf("Informe um valor e veja qual o seu sucessor: ");
  scanf("%d", &a);

  resultado = sucessor(a);

  printf("\nO sucessor de %d é %d", a, resultado);

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}
