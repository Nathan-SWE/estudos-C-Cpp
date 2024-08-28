#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM_MOCHILA 5
#define TAM_NOME 20

void main()
{
  // inventário que permita ao usuário verificar o que há guardado, remover e adicionar itens.
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int opcao, remover, sair = 0;
  char mochila[TAM_MOCHILA][TAM_NOME] = {0};
  char item[20] = {0};

  while (sair != 1)
  {
    printf("\nO que gostaria de realizar ?\n");
    printf("1 - Verificar mochila.\n");
    printf("2 - Adicionar item à mochila.\n");
    printf("3 - Remover item da mochila.\n");
    printf("4 - Sair.\n");
    scanf("\n%d", &opcao);

    switch (opcao)
    {
    case 1:
      for (int i = 0; i < TAM_MOCHILA; i++)
      {
        if (strcmp(mochila[i], "") == 0)
        {
          printf("%d: espaço vazio\n", i);
        }
        else
        {
          printf("%d: %s\n", i, mochila[i]);
        }
      }
      break;
    case 4:
      printf("\nSaindo do sistema!");
      sair = 1;
      break;
    default:
      printf("\nValor inválido, tente novamente uma das opções!\n");
      break;
    }
  }

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
}