#include <stdio.h>

int main()
{
  // programa que imprime se número informado pelo usuário é primo.
  int num, i, ePrimo = 1;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  if (num <= 1)
  {
    ePrimo = 0;
  }
  else
  {
    for (i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
      {
        ePrimo = 0;
        break;
      }
    }
  }

  if (ePrimo)
  {
    printf("%d é um número primo.\n", num);
  }
  else
  {
    printf("%d não é um número primo.\n", num);
  }

  return 0;
}
