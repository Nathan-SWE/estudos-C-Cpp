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

  int opcao, sair = 0;
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
    printf("\n");

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

    case 2:
      int i;

      printf("Digite um item para adicionar: ");
      scanf("%s", &item);

      for (i = 0; i < TAM_MOCHILA; i++)
      {
        if (strcmp(mochila[i], "") == 0)
        {
          break;
        }
      }

      if (i == TAM_MOCHILA)
      {
        printf("Mochila cheia!\n");
      }
      else
      {
        strcpy(mochila[i], item);
        printf("Item adicionado com sucesso!\n");
      }
      break;

    case 3:
      int remover;

      printf("Digite a posição do item que você deseja remover: ");
      scanf("%d", &remover);

      if (remover < 0 || remover >= TAM_MOCHILA)
      {
        printf("\nPosição inválida!\n");
      }
      else if (strcmp(mochila[remover], "") == 0)
      {
        printf("A posição já está vazia!\n");
      }
      else
      {
        strcpy(mochila[remover], "");

        for (int i = remover; i < TAM_MOCHILA - 1; i++)
        {
          strcpy(mochila[i], mochila[i + 1]);
        }

        strcpy(mochila[TAM_MOCHILA - 1], "");

        printf("Item removido com sucesso!\n");
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