#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main ()
{
  ofstream arquivoDeSaida;

  arquivoDeSaida.open("log.txt", std::ios_base::app);

  arquivoDeSaida << "\nArquivo de teste #01";

  arquivoDeSaida.close();

  return 0;
}