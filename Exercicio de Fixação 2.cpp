//Exercicio J pagina 26
#include <iostream>
#include <cstdlib>
using namespace std;

void mostrar (double cot, double quant){
     double conver = quant * cot;
     cout << "\nA conversão do dolar para real na cotação atual é: " << conver << " reais" << endl;
     }

int main(){
    setlocale(LC_ALL,"Portuguese");
    double cot, quant;
    cout << "\nInsira primeiro a cotação atual do dolar: ";
    cin >> cot;
    cout << "\nAgora insira o valor que você quer converter: ";
    cin >> quant;
    
    mostrar(cot, quant);
    
    system("pause");
    }
