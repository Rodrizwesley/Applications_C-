//Programa exemplo 3
#include <iostream>
#include <cstdlib>
using namespace std;

double const txmulta = 0.02;

double lerPres(){
       double val;
       cout << "Digite Prestação: ";
       cin >> val; return val;
       }
       
double calMulta (double val){
       return (val * txmulta);
       }

void mostrar (double val, double multa){
    double valatual = val + multa;
    cout << valatual << endl;
    }

int main(){
    double valor, multa;
    int tecla;
    cout << "menu\n1. Executar\n2. Sair\nitem: ";
    cin >> tecla;
    switch(tecla){
                  case 1:          valor = lerPres();
                                   multa = calMulta(valor);
                                   mostrar(valor, multa);
                                   system("pause");
                                   break;
                  case 2:          cout << "Fim do programa!\n";
                                   system("pause");
                                   exit(0);
                  }
    return 0;
    }
