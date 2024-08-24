#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  // faça loop de decremento com for, while e do while;
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int inicio = 10;
  
  // printf("For loop:");
  // for (inicio; inicio >= 0; inicio--)
  // {
  //   printf("\n%d", inicio);
  // }

  // printf("\nWhile loop:");
  // while (inicio >= 0)
  // {
  //   printf("\n%d", inicio);
  //   inicio--;
  // }

  printf("\nDo while loop:");
  do
  {
    printf("\n%d", inicio);
    inicio--;
  } while (inicio >= 0);

  printf("\nPressione enter para encerrar...");
  getchar();
}