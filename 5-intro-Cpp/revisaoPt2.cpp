#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM 3

using namespace std;

int main()
{

  int vetor[TAM] = {5, 10, 15}, cont, i, j;

  for (cont = 0; cont < TAM; cont++)
  {
    cout << vetor[cont] << "\n";
  }

  vetor[0] = 10;
  vetor[1] = 20;
  vetor[2] = 30;

  cont = 0;

  while (cont < TAM)
  {
    printf("%d \n", vetor[cont]);
    cont++;
  }

  int matriz[TAM][TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (i = 0; i < TAM; i++)
  {
    for (j = 0; j < TAM; j++)
    {
      cout << matriz[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}