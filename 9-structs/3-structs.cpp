#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <new>
#include <locale.h>

using namespace std;

struct fruta
{
  string cor;
  string nome;
};


int main ()
{
  setlocale(LC_ALL, "pt-BR.UTF-8");

  fruta *primeiraFruta = new fruta;

  primeiraFruta->cor = "Amarela";
  primeiraFruta->nome = "Banana";

  cout << "Fruta: " << primeiraFruta->nome << ", Cor: " << primeiraFruta->cor;

  fruta *ponteiroListaDeFrutas = new fruta[2];

  ponteiroListaDeFrutas[0].cor = "Vermelho";
  ponteiroListaDeFrutas[0].nome = "Morango";
  ponteiroListaDeFrutas[1].cor = "Roxo";
  ponteiroListaDeFrutas[1].nome = "Acai";

  for (int cont = 0; cont < 2; cont++)
  {
    cout << "\nFruta: " << ponteiroListaDeFrutas[cont].nome << ", Cor: " << ponteiroListaDeFrutas[cont].cor;
  }

  printf("\nPressione enter para encerrar...");
  getchar();
  return 0;  
}

