#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void somaDez(int *valor)
{
  *valor += 10;
}

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int a = 5;
  printf("O valor de 'a' é: %d\n", a);

  somaDez(&a);
  printf("O valor de 'a' atualizado por ponteiro é: %d\n", a);

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}
