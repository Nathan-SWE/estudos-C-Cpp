#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <new>

using namespace std;

int main()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");
  int tamanho, cont;

  cout << "Informe o tamanho para o array: ";
  cin >> tamanho;

  int *vetor = new int[tamanho];

  for (cont = 0; cont < tamanho; cont++)
  {
    vetor[cont] = cont;
    cout << "\n" << vetor[cont];
  }

  getchar();
  printf("\nPressione enter para encerrar...");
  getchar();

  delete[] vetor;
  return 0;
}
