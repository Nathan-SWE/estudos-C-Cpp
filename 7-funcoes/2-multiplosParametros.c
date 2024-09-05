#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int retornaSoma(int num1, int num2)
{
  return num1 + num2;
}

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int num1, num2;

  printf("Informe dois valores inteiros a serem somados: ");
  scanf("%d %d", &num1, &num2);

  printf("A soma dos valores informados é: %d", retornaSoma(num1, num2));

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}
