// EXERCICIO H PAGINA 25

#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;
      
      int main(){
          system("cls");
          setlocale(LC_ALL, "Portuguese");
          
          double volume = 0, comprimento = 0, largura = 0, altura = 0;
          
          cout << "\nInsira comprimento x largura x altura da caixa respectivamente\n";
          cin >> comprimento; cin >> largura; cin >> altura;
          
          volume = comprimento * largura * altura;
          
          cout << "\nO volume desta caixa é igual à " << volume << " litros\n";
          
          system("pause");
          }
