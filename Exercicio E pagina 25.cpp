
// EXERCIO E PAGINA 25

#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

      int main(){
          system("cls");
          setlocale(LC_ALL, "Portuguese");
          
          double valor = 0, tempo = 0, taxa = 10, prestacao = 0;
          
          cout << "\nInsira o valor da da presta��o\n";
          cin >> valor;
          cout << "\nInforme os meses de atraso\n";
          cin >> tempo;
          
          prestacao = valor + (valor * (taxa / 100) * tempo);
          
          cout << "\nO valor da persta��o em atraso � = R$" << prestacao << endl;
          
          system("pause");  
          }
