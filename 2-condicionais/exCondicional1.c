#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int num1, num2, soma;
  printf("Informe o primeiro número inteiro: ");
  scanf("%d", &num1);

  printf("Informe o segundo número inteiro: ");
  scanf("%d", &num2);

  soma = num1 + num2;

  if (soma >= 10)
  {
    printf("A soma de %d e %d é maior que 10: %d", num1, num2, soma);
  }
  else
  {
    printf("A soma de %d e %d não é maior que 10: %d", num1, num2, soma);
  }
}