#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  /*   programa que o usuário defina os valores de todas as variáveis. E imprima na tela.
    - valor inicial
    - valor final
    - valor de iteração */

  setlocale(LC_ALL, "pt-BR.UTF-8");
  int inicio, limite, incremento;
  
  printf("Informe o valor inteiro desejado das variáveis de inicio, o limite, e de incremento, respectivamente nessa ordem: \n");
  scanf("%d %d %d", &inicio, &limite, &incremento);

  printf("\nOs valores informados para o loop for são: ");
  printf("int inicio = %d | int limite = %d | int incremento = %d)", inicio, limite, incremento);

  if (incremento > 0)
  {
    for (inicio; inicio <= limite; inicio += incremento)
    {
      printf("\nValor atual: %d", inicio);
    }
  }
  else
  {
    printf("\nO valor de incremento precisa ser maior que 0.");
  }

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
}
