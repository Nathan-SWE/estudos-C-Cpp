#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // Programa de calculadora básica, leia dois números, mostre as opções de operações, e imprima o resultado.
  setlocale(LC_ALL, "pt_BR.UTF-8");

  float num1, num2, resultado;
  int operacao;

  printf("Escolha qual operação deseja realizar:");
  printf("\n1 - Soma");
  printf("\n2 - Subtração");
  printf("\n3 - Multiplicação");
  printf("\n4 - Divisão\n\n");
  scanf("%d", &operacao);

  switch (operacao)
  {
  case 1:
    printf("Informe os números que deseja somar: ");
    scanf("%f %f", &num1, &num2);
    resultado = num1 + num2;
    printf("%.2f + %.2f = %.2f", num1, num2, resultado);
    break;
  case 2:
    printf("Informe os números que deseja subtrair: ");
    scanf("%f %f", &num1, &num2);
    resultado = num1 - num2;
    printf("%.2f - %.2f = %.2f", num1, num2, resultado);
    break;
  case 3:
    printf("Informe os números que deseja multiplicar: ");
    scanf("%f %f", &num1, &num2);
    resultado = num1 * num2;
    printf("%.2f * %.2f = %.2f", num1, num2, resultado);
    break;
  case 4:
    printf("Informe os números que deseja dividir: ");
    scanf("%f %f", &num1, &num2);
    resultado = num1 / num2;
    printf("%.2f / %.2f = %.2f", num1, num2, resultado);
    break;
  default:
    printf("Opção inválida, execute o programa novamente!");
    break;
  }
  getchar();
  printf("\nPressione Enter para sair...");
  getchar();
}
