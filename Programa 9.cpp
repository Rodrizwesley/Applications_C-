#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int cont = 1;
    float valor = 0, saldo = 0, media = 0;
    
    while(cont <= 10){
               cout << "Valor: ";
               cin >> valor;
               saldo = saldo + valor;
               cont = cont + 1;
               }
    media = saldo/cont;
    cout << "Saldo =" << saldo << endl;
    cout << "Media =" << media << endl;
    
    system("pause");
    return 0;
    }
