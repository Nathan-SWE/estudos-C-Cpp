#include <stdio.h>
#include <stdlib.h>
#include <iostream> // para utizar c++
#include <string>

// para imprimir na tela de forma abreviada sem necessidade do std::cout
using namespace std;

int main()
{
  int a = 0;

  cout << "Valor: " << a;
  cin >> a;
  cout << "Valor: " << a;

  return 0;
}