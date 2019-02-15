#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

      int main(){
          system ("cls");
          setlocale(LC_ALL, "Portuguese");
          
          double tempo = 0, velocidade = 0, distancia = 0, litros_usados = 0;
          
          cout << "\Insira o tempo gasto e a velocidade média durante a viagem\n";
          cin >> tempo ; cin >> velocidade;
          
          distancia = tempo * velocidade;
          litros_usados = distancia / 12;
          
          cout << "\nA velocidade média foi de: " << velocidade << " KM/h\n";
          cout << "\O tempo total de viagem foi de: " << tempo << " Horas\n";
          cout << "\nA distancia percorrida foi igual à: " << distancia << " KM\n";
          cout << "\Foi usado " << litros_usados << " litros de combustivel nesta viagem\n";
          
          system("pause");
          }
