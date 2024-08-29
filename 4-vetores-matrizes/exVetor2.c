#include <stdio.h>
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
  int i, j, k, l, m;

  while (sair != 1)
  {
    printf("\nO que gostaria de realizar ?\n");
    printf("1 - Verificar mochila.\n");
    printf("2 - Adicionar item à mochila.\n");
    printf("3 - Remover item da mochila.\n");
    printf("4 - Sair.\n");
    scanf("%d", &opcao);
    printf("\n");

    if (opcao == 1)
    {
      for (i = 0; i < TAM_MOCHILA; i++)
      {
        int vazio = 1;
        for (j = 0; j < TAM_NOME; j++)
        {
          if (mochila[i][j] != 0)
          {
            vazio = 0;
            break;
          }
        }
        if (vazio)
        {
          printf("%d: espaço vazio\n", i);
        }
        else
        {
          printf("%d: ", i);
          for (j = 0; j < TAM_NOME; j++)
          {
            if (mochila[i][j] == 0)
              break;
            printf("%c", mochila[i][j]);
          }
          printf("\n");
        }
      }
    }
    else if (opcao == 2)
    {
      printf("Digite um item para adicionar: ");
      scanf("%s", item);

      for (i = 0; i < TAM_MOCHILA; i++)
      {
        int vazio = 1;
        for (j = 0; j < TAM_NOME; j++)
        {
          if (mochila[i][j] != 0)
          {
            vazio = 0;
            break;
          }
        }
        if (vazio)
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
        for (j = 0; j < TAM_NOME && item[j] != 0; j++)
        {
          mochila[i][j] = item[j];
        }
        printf("Item adicionado com sucesso!\n");
      }
    }
    else if (opcao == 3)
    {
      int remover;
      printf("Digite a posição do item que você deseja remover: ");
      scanf("%d", &remover);

      if (remover < 0 || remover >= TAM_MOCHILA)
      {
        printf("\nPosição inválida!\n");
      }
      else
      {
        int vazio = 1;
        for (j = 0; j < TAM_NOME; j++)
        {
          if (mochila[remover][j] != 0)
          {
            vazio = 0;
            break;
          }
        }
        if (vazio)
        {
          printf("A posição já está vazia!\n");
        }
        else
        {
          for (j = 0; j < TAM_NOME; j++)
          {
            mochila[remover][j] = 0;
          }

          for (k = remover; k < TAM_MOCHILA - 1; k++)
          {
            for (l = 0; l < TAM_NOME; l++)
            {
              mochila[k][l] = mochila[k + 1][l];
            }
          }

          for (m = 0; m < TAM_NOME; m++)
          {
            mochila[TAM_MOCHILA - 1][m] = 0;
          }

          printf("Item removido com sucesso!\n");
        }
      }
    }
    else if (opcao == 4)
    {
      printf("\nSaindo do sistema!");
      sair = 1;
    }
    else
    {
      printf("\nValor inválido, tente novamente uma das opções!\n");
    }
  }

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();
}
