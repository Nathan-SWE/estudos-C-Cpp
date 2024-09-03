#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int a = 10; // variável

  printf("O valor de a é %d.\n", a);
  printf("O local de armazenamento na memória da variável 'a', é: %d\n", &a);

  // A diferença entre variáveis e ponteiros é que as variáveis estão em um endereço de memória armazenando um valor,
  // E os ponteiros armazenam os endereços de memória.

  int b = 20;
  int *pont; // declaração de um ponteiro
  pont = &b; // Lê-se: ponteiro recebe a posição da memória de 'b'

  printf("O valor de b é %d.\n", b);
  *pont = 40; // seleciona o conteúdo apontado pelo ponteiro e atribui o novo valor
  printf("O valor de b é %d.\n", b);

  return 0;
}