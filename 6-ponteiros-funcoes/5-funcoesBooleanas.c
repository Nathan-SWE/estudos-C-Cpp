#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool retornaBool()
{
  return false;
}

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");

  bool varBool;

  varBool = retornaBool();

  if (varBool)
  {
    printf("O valor de varBool é: %d", varBool);
  }
  else
  {
    printf("O valor de varBool é: %d", varBool);
  }

  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;
}
